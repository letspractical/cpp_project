#include <iostream>
using namespace std;

class shop            //general statement says whenever we create any class then we actually allocating some memory to class which further allocate that,
{                     /*to their objects but this is partly true because some variables and members are containing their fix memory for all objects */
    int item_id[100]; //and some maynot.
    int count;
    int item_price[100];

public:
    void intcounter() //because count is defined inside the intcounter(), that's why it is not making count=0 at everywhere.
    {                 /*a common function therefore it is allocated with fix memory which will not change*/
        count = 0;
    }
    void setprice();
    void getprice();
    void display_price();
};

void shop::setprice() //a common function therefore it is allocated with fix memory which will not change
{
    cout << "enter your item id is " << count + 1 << endl; //count+ is not updating the actual value of count
    cin >> item_id[count];
    cout << "enter your item price is \n";
    cin >> item_price[count];
    count++;
}

void shop::display_price() //a common function therefore it is allocated with fix memory which will not change
{
    for (int i = 0; i < count; i++)
    {
        cout << " the price of item id is " << item_id[i] << " and price is " << item_price[i] << endl;
    }
}
int main()
{
    int j, t;
    shop it1, it2, it3;
    it1.intcounter();
    cin >> t;
    for (j = 0; j < t; j++)
    {
        it1.setprice();
    }

    it1.display_price();
    return 0;
}