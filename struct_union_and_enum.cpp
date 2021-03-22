#include <iostream>

using namespace std;
//this program is defining about structure, union and enum.

typedef struct employee /*struct is a keyword which is used to make user define data type which can hold number of different data types with there variables, and 
after making data types we can use it later*/

/* Typedef is used to make a short cut to call userdefine datatype by its object */

{
    int emp_id;
    float emp_income;
    string uniform_color;
} ep; /* Typedef and ep is used to make a short cut to call userdefine datatype by its objects */

//--------union--------------

// Union is just similar to structure but the only difference is, it just consider the largest memory for allocation.
/* But never divide it among various parameters which is contained by itself becuase it allow us to use only one at a time therefore if an object is 
calling a union then that object can't call another attribute of that union but offcoarse another object can call any attribute also once*/

union payments
{
    float rupee;
    int dollar;
    int bonds;
};

//----------enum--------------

enum container
{
    balati,
    mug,
    tub
};

int main()
{
    cout << "lecture of Structure, Union, Enum!!";

    /*these concepst are basically make the c++ well memory managemnt facility, this is also an advantage of c++ over otherlanguages that is provide programmer
     to manage the size of the application*/

    ep rohan;             // we can call that data type use ep with parameter, This also make an object by this method also.
    rohan.emp_id = 2;
    rohan.emp_income = 200600.89;
    rohan.uniform_color = "blue";

    struct employee rahul; // we can also call that by this long way.
    rahul.emp_id = 1;
    rahul.emp_income = 200000.89;
    rahul.uniform_color = "red";

    cout << "\n the income of rahul is: " << rahul.emp_income << endl;
    cout << "\n the emp_id of rahul is: " << rahul.emp_id << endl;
    cout << "\n the uniform_color of rahul is: " << rahul.uniform_color << endl;

    cout << "\n the income of rohan is: " << rohan.emp_income << endl;
    cout << "\n the emp_id of rohan is: " << rohan.emp_id << endl;
    cout << "\n the uniform_color of rohan is: " << rohan.uniform_color << endl;

    //-------------Union-----------------

    /*union is just similar to structure but the only difference is , it just consider the largest memory for allocation but never divide it among various paramiters
     which is contained by itself becuase it allow us to use only one at a time therefore if an object is calling a union then that object can't call another attribute
     of that union but offcoarse another object can call any attribute also once*/

    union rest   //union is just a pre-define class.
    {
        char bed, floor;
    };

    union rest boy;     //boy is the object of class union
    boy.bed;
    cout << "\n"
         << boy.bed;

    union payments toma;
    toma.rupee = 98;
    cout << "\n toma need to pay is:" << toma.rupee;

    union payments row;
    row.rupee = 90.8;
    row.dollar = 30;
    row.bonds = 70;
    cout << "\n row need to pay is:" << row.rupee;
    cout << "\n row need to pay is:" << row.dollar; //these outputs are printing some annomalies...because uinion is just
    cout << "\n row need to pay is:" << row.bonds;  /* carry one attribute at once*/

    //---------enum--------------

    enum meal
    {
        breakfast,
        lunch,
        dinner
    }; 
    /* in enum the value is contained reperesented in numeric form in output, so that program doesn't take large size, in enum the value contain its value 
    as same order as defined*/

    cout << "\n " << breakfast;
    cout << "\n " << lunch;
    cout << "\n " << dinner;

    cout << "\n"
         << tub;
    cout << "\n"
         << balati;
    cout << "\n"
         << mug;

    return 0;
}
