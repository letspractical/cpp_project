#include <iostream>
using namespace std;

class Shope
{
    int id, price;

public:
    int setData()
    {
        cout << " Enter the data : " << endl;
        cin >> id >> price;
        return 0;
    }

    void getData()
    {
        cout << "Enter the Id of an Item " << id << endl;
        cout << "Enter the Price of an Item " << price << endl;
    }
};

int main()
{
    int size;
    cout << "Number of Items" << endl;
    cin >> size;
    Shope *ptr = new Shope [size];              //object array created
    Shope *ptrTemp = ptr;
    
    int i;
    
    for (i = 0; i < size; i++)
    {
        ptr -> setData();
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        ptrTemp -> getData();
        ptrTemp++;
    }
    return 0;
}