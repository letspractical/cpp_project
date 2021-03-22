    // IN this lecture we are learning the virtual class.

    // The use of the virtual class is when we are making two drive classes of the same parents class,
    // but when on the other hand we also making a drive class of those two child classes then it will also inherent the characters of grand 
    // parent class but problem arises when two classes also containg the one parent class' property , It create problem for the grand child class
    // because it giving it 2 time the characterstics of grand parent class thouugh need only once. to overcome this kind of the strike we create
    // a virtual class of the grand parent class when we are going to make parent class, visit to statement 43 and 74. 


#include <iostream>
using namespace std;

class Student
{
protected:
    string Name;
    int Class;
    int roll_number;

public:
    int set_data();
    void print_data();
};

int Student ::set_data()
{
    cout << " Enter the name :";
    cin >> Name;
    cout << "\n Enter the class :";
    cin >> Class;
    cout << "\n Enter the roll number :";
    cin >> roll_number;
    return roll_number;
}

void Student ::print_data()
{
    cout << " The roll number of " << Name
         << " is " << roll_number
         << " Study in " << Class << " class." << endl;
}

class Marks : virtual public Student
{
protected:
    int maths;
    int chemistry;
    int physics;
    int total;

public:
    int set_marks()
    {
        cout << " Enter marks Subject wise : ";
        cout << "\n Maths : ";
        cin >> maths;
        cout << "\n Chemistry : ";
        cin >> chemistry;
        cout << "\n Physics : ";
        cin >> physics;
        total = maths + chemistry + physics;
        return total;
    }

    void print_marks()
    {
        cout << " Maths marks is : " << maths << endl;
        cout << " Chemistry marks is : " << chemistry << endl;
        cout << " Physics marks is : " << physics << endl;
        cout << " Total marks is : " << total << endl;
    }
};

class Score : public virtual Student
{
protected:
    float games_score;

public:
    int set_score()
    {
        cout << " Enter Score in physical education : ";
        cin >> games_score;
        return games_score;
    }

    void print_score()
    {
        cout << "\n Earn Score in Games is : " << games_score << endl;
    }
};

class Result : public Marks, public Score
{
    int Total_marks;

public:
    int final_marks()
    {
        Total_marks = total + games_score;
        return Total_marks;
    }

    void Display()
    {
        cout << " Total_marks obtained by the student is : " << Total_marks;
    }
};

int main()
{
    Result s1;
    s1.set_data();
    s1.print_data();
    s1.set_marks();
    s1.print_marks();
    s1.set_score();
    s1.print_score();
    s1.final_marks();
    s1.Display();
    return 0;
}