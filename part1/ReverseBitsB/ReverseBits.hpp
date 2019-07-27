#pragma once

#include <Arduino.h>

template<typename Type>
void reverseBits(Type &value) {
  auto bits = value;
  Type result = 0;
  for (uint8_t i = 0; i < (sizeof(Type)*8); ++i) {
    result <<= 1;
    if ((bits & static_cast<Type>(0b1)) != 0) {
      result |= static_cast<Type>(0b1);
    }
    bits >>= 1;
  }
  value = result;
}

inline void reverseBits64(uint64_t &value) {
  reverseBits(value);  
}

inline void reverseBits32(uint32_t &value) {
  reverseBits(value);  
}

inline void reverseBits16(uint16_t &value) {
  reverseBits(value);  
}

inline void reverseBits8(uint8_t &value) {
  reverseBits(value);  
}
