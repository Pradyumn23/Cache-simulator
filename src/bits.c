#include "bits.h"
#include "cache.h"

int get_set(Cache *cache, address_type address) {
  // TODO:
  //  Extract the set bits from a 32-bit address.
  //
  int theSet = cache -> block_bits;
  address = address >> theSet;
  theSet = 32 - (cache-> set_bits);
  address = address << theSet;
  address = address >> theSet;
  return (int)address;
}

int get_line(Cache *cache, address_type address) {
  // TODO:
  // Extract the tag bits from a 32-bit address.
  //
  int theLine = cache->set_bits + cache->block_bits;
  address = address >> theLine;
  return (int)address;
}

int get_byte(Cache *cache, address_type address) {
  // TODO
  // Extract the block offset (byte index) bits from a 32-bit address.
  //
  int theByte = 32 - cache->block_bits;
  address = address << theByte;
  address = address >> theByte;
  return (int)address;
}
