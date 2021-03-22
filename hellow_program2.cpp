// project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "control statements\n";
    //sequencial structure
    //selection structure
    //looping structure
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << " you are not welcome in the party\n";
    }
    else if (age == 18)
    {
        cout << "you are welcome in the party\n";
    }
    else
    {
        cout << "your are welcome to the party\n";
    }

    /*-------------- switch case------------*/
    int age1 = 12;


    switch (age1)
    {
    case 20:
        cout << "print20\n";
        break;

    case 12:
        cout << "print12\n";
        break;
    case 18:
        cout << "print18\n";
        break;
    default:
        cout << " print default\n";
        break;
    }
    //----------looping structure----------

    cout << "there are 3 types of looping structure\n";
    cout << "1, for statements\n";
    cout << "2, while statements\n";
    cout << "3, do-while statements\n";


    for (int a = 0; a < 9; a++)
    {
        if (a < 9) {
            cout << "print " << a << endl;
        }
        else
        {
            cout << "value not satisfy\n";
        }
    }

    // now while-do statement------
    int s = 3;
    while (s < 9)
    {
        cout << "print" << s << endl;
        s++;
    }
    do  {
        cout << "the value s" << s<<endl;
        s++;
    } while (s <= 10);

}
   
// 