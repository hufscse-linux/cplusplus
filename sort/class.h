
struct IntValue {
  int value;
  IntValue(int value)
  : value(value) {}
};

struct Functor {
  int value;
  Functor(int value)
  : value(value) {}

  bool operator()(const Functor* a, const Functor* b) {
    return a->value > b->value;
  }
};
