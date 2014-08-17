
struct IntValue {
  int value;
  IntValue(int value)
  : value(value) {}
};

struct Functor
  : public IntValue {

  Functor(int value)
   : IntValue(value) {}

  bool operator()(const Functor& a, const Functor& b) {
    return a.value < b.value;
  }
};
