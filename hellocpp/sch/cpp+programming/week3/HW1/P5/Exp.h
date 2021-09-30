class Exp {
  double base, exp;

public:
  Exp(double, double);
  Exp(double);
  Exp();
  double getValue();
  double getBase();
  double getExp();
  bool equals(Exp);
};