
/*#include<iostream>
using namespace std;

class before
{
    int a;
    cin<<a; 
};

int main()
{
cout<<" the value of the a is "<<before s;
return 0;
}*/

#include <iostream>
using namespace std;

class Student //parent class
{
    /* protected:               when we make any member of the class protected im nature then it is only
    int roll_number;           accessable by other class members of the drived classes or friend classes*/
protected:
    int roll_number;

public:
    void set_roll_number(int r);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << " The roll number is " << roll_number << endl;
}

class Exam : public Student //Exam is child class of Student.
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "the marks obtained in maths are " << maths << endl;
    cout << "the marks obtained in physics are " << physics << endl;
}
class result : public Exam //result is child class of Exam.
{                          //result is grand child class of Student class.
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << " your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result shivam;
    shivam.set_roll_number(345);
    shivam.set_marks(45.9, 90.8);
    shivam.display();
    return 0;
}