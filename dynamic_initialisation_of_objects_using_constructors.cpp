// Dynamic initiallisation of an object means creating an object during running of the program.
/* In simple words means first user had to give its input to compiler then it will decide which objct it should 
create.*/

#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float rate;
    double returnvalue;

public:
    bankdeposit();                      //default construction is declared to initiate the objects and because of this compiler can differentiate the
    bankdeposit(int p, int y, float r); //construction ovrloading.
    bankdeposit(int p, int y, int r);
    void show();
};

bankdeposit ::bankdeposit()
{
}

bankdeposit ::bankdeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    rate = float(R) / 100;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

void bankdeposit ::show()
{
    cout << "the return value of the principal " << principal << " in years " << years << " on interest rate " << rate << " is " << returnvalue << endl;
}

int main()
{
    int p, y, r;
    int R;
    bankdeposit bd1, bd2, bd3; /*bd1 is created to initate the default construction, because it doesn't contain any thing so that it 
                               is n't performing any thing*/

    cout << "Enter the values : ";
    cin >> p >> y >> R;   //so this is the concept of dynamic initialisation of the object by construction.
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    cout << "Enter the values : ";
    cin >> p >> y >> r;  //so this is the concept of dynamic initialisation of the object by construction.
    bd3 = bankdeposit(p, y, r);
    bd3.show();

    return 0;
}