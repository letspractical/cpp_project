/////------multilevel inheritance-----------my project11'

#include <iostream>
using namespace std;

class students
{
    int roll_no;
    string name;
    int Class;

public:
    /*int maths;   //this declared variables of the parent class cann't be inputed in drived classes,
    int science;   //if we want to give input then we need to make variables also at drived classes.
    int english;*/
    void setdata()
    {
        cout << " Enter the name of the student ";
        cin >> name;
        cout << "\n class ";
        cin >> Class;
        cout << "\n Enter the roll number of the student ";
        cin >> roll_no;
    }
};

class marks : public students
{
public:
    int maths;
    int english;
    int science;
    float percentage;

    float marking();
};

float marks ::marking()
{

    cout << " maths ";
    cin >> maths;
    cout << "\n  english ";
    cin >> english;
    cout << "\n science ";
    cin >> science;
    
    int sum = maths + english + science ;

    percentage = (sum / 3);

    return percentage;
}

class result : public marks
{
public:
    void marks()
    {
        cout << " the marks obtained by the student is : \n";
        cout << marking();
        cout << "\n The percent it get is : " << percentage<<" % "<< endl;
    }
};

int main()
{
    result rohan;
    rohan.setdata();
    rohan.marks();
    return 0;
}