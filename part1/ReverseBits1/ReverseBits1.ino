/// Reverse all bits in the given value.
///
/// @tparam Type The type of the value. Has to be a unsigned integer.
/// @param value The value to to reverse the bits.
/// @return The value with reversed bits.
///
template<typename Type>
Type reverseBits(Type value) {
  Type result = 0;
  for (uint8_t i = 0; i < (sizeof(Type)*8); ++i) {
    result <<= 1;
    if ((value & static_cast<Type>(0b1)) != 0) {
      result |= static_cast<Type>(0b1);
    }
    value >>= 1;
  }
  return result;
}

void setup() {
  Serial.begin(115200);
  while (!Serial) {}
  uint32_t valueIn1 = 0b10000000000000000000000010110111u;
  auto valueOut1 = reverseBits(valueIn1);
  Serial.println(valueIn1, BIN);
  Serial.println(valueOut1, BIN);  
  uint16_t valueIn2 = 0b1000000010110111u;
  auto valueOut2 = reverseBits(valueIn2);
  Serial.println(valueIn2, BIN);
  Serial.println(valueOut2, BIN);  
  uint8_t valueIn3 = 0b10011011u;
  auto valueOut3 = reverseBits(valueIn3);
  Serial.println(valueIn3, BIN);
  Serial.println(valueOut3, BIN);  
}

void loop() {
}
