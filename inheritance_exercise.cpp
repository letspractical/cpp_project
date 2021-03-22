// make calculater by creating two base classes and 3 drive class.
/*
   l Create 2 Base classes of simple calculator and complex calculator
   2 Then make a hybrid class which make of obove two classes and perform the task of calculating two numbers.
   3 Which type of Inheritance ar you using?
   4 In which mode of Inheritance are you making classes?
   5 How is code reusability implemented?
   6 Making a Hybrid calculator and dispaly the output.
   */

#include <iostream>
#include <cmath>
using namespace std;

class Simple_cal
{
  int a, b;

public:
  int Setdata1()
  {
    cout << " Enter the value of a : " << endl;
    cin >> a;
    cout << " Enter the value of b : " << endl;
    cin >> b;
    return 0;
  }

  void perform1()
  {

    cout << " The sum of " << a << " and " << b << " is " << a + b << endl;
    cout << " The sub of " << a << " and " << b << " is " << a - b << endl;
    cout << " The product of " << a << " and " << b << " is " << a * b << endl;
    cout << " The divide of " << a << " and " << b << " is " << a / b << endl;
  }
};

class Scientific_cal
{
  int a;

public:
  int Setdata2()
  {
    cout << " Enter a : " << endl;
    cin >> a;
    return 0;
  }

  void perform2()
  {

    cout << " The sin value of " << sin(a);
    cout << " The cos value of " << cos(a);
    cout << " The tan value of " << tan(a);
    cout << " The log value of " << log(a);
  }
};

class Hybrid_calculator : public Simple_cal, public Scientific_cal
{
};

int main()
{
  Hybrid_calculator a;
  a.Setdata1();
  a.perform1();

  Hybrid_calculator b;
  b.Setdata2();
  b.perform2();

  return 0;
}
