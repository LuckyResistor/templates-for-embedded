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
  auto valueOut1 = reverseBits(0b10000000000000000000000010110111u);
  Serial.println(valueOut1, BIN);  
  auto valueOut2 = reverseBits(0b1000000010110111u);
  Serial.println(valueOut2, BIN);  
  auto valueOut3 = reverseBits(0b10011011u);
  Serial.println(valueOut3, BIN);  
}

void loop() {
}
