#pragma once

#include <Arduino.h>

template<typename Type>
void reverseBitsT(Type &value) {
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

inline void reverseBits(uint32_t &value) {
  reverseBitsT(value);
}

inline void reverseBits(uint16_t &value) {
  reverseBitsT(value);  
}

inline void reverseBits(uint8_t &value) {
  reverseBitsT(value);
}
