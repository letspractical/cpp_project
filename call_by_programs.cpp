#include <iostream>

using namespace std;

void swap1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << "the value of a is" << a << "and of b is " << b << endl;
    swap(a, b);
    cout << "the value of a is" << a << "and of b is " << b << endl;
}