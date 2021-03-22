#include <iostream>
using namespace std;

//int employee:: count;  //we can't declare static variable before employee

class employee
{
    int id;
    static int count; // static variables are not define in its class.
public:
    void setdata()
    {
        cout << " enter id of an employee \n";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of this employee is " << id << " and this is employee no " << count << endl;
    }

    static void getcount() //significance of the static variable is it can access static members of the class, and we don't need to call

    { //static function by an object, we can call it by using just class name and function name by using the scope resolution operator.
       
       //cout<<id<endl; we can't get access to other non-static functions.
        cout << "this value of count for this employee is " << count << endl;
    }
};

//int employee::count=111(count start from 111); //we can define value to static vriable out side the class, we cant do this in classes.
int employee::count; /*by default the static variable has 0 value, we declare the variable static because when ever we
 need to make the counter shouldn't functionate specifically for an object, by make it static it mean it is no more specific object oriently
 but commonly for all objects, we can't make same name static variable in same class, that variable has scope with in the only class where it 
 was called and its lifespan is till the program is terminated*/
//static member of class= static variables;
//static varable can be access by multiple objects.
int main()

{

    employee rahul, karan, amrit;
    rahul.setdata();
    rahul.getdata();
    employee:: getcount(); //static functions can only have access to static members of the class to practical look at line 26.

    karan.setdata();
    karan.getdata();
    employee:: getcount();

    amrit.setdata();
    amrit.getdata();
    employee:: getcount();

    return 0;
}