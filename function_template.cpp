#include <iostream>
#include <cstring>
using namespace std;
//template <class r>                     single type bhi de skte hai pr argument ka type alag alag ho to niche vala sahi hoga

template <class r, class t> //................................function_template..............................................
int swapp(r &x, t &y)
{
    cout << " The value of X before swaping: " << endl;
    cin >> x;
    cout << " The value of Y before swaping: " << endl;
    cin >> y;
    cout << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << " The value of X after swaping: " << x << endl;
    cout << " The value of Y after swaping: " << y << endl;
    return 0;
}
int main()
{
    int x, y;
    swapp(x, y);
    cout << endl;
    cout << " congratulation !!!!! x, y are swapped successfully." << endl;
    return 0;
}