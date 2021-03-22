  //single level inheritence..........

#include <iostream>
using namespace std;

class base        //parent class
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata()
{
    data1 = 54;
    data2 = 67;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

class drive : private base     //drive class
{
public:
    int process(void);
    void display();
};

int drive ::process()
{
    setdata();
    int data3 = data2 * getdata1();
    return data3;
}

void drive ::display()
{
    cout << " the value of data1 is " << getdata1() << endl;
    cout << " and data2 is " << data2 << endl;
    cout << " the value of the process is " << process() << endl;
}

int main()
{
    drive rider;
    rider.process();
    rider.display();

    return 0;
}