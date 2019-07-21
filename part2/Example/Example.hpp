template<typename Type>
class Example
{
public:
  Example(Type value) : _value(value) {
  }
  Type getValue() const {
    return _value;
  }
  void setValue(const Type &value) {
    _value = value;
  }
private:
  Type _value;
};
