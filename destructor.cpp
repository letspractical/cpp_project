  // this program is for understanding the destructors, actual functioning of the distructors.


#include<iostream>
using namespace std;

class num
{

    int count=0;    //caunt initialise.
    public:
    num()        //constructor defining.
    {
        count++;
        cout<<"this is the time when constructor is called for object number"<<count<<endl;
    }

    ~num()       //destructor defining. it is a just as same as constructor when the object is declared then destructor 
    // is also ready to peroform its task.
    {
        cout<<"this is the time when destructor is called for object number"<<count<<endl;
        count--;
    }
};

int main()
{
cout<<"we are in our main function"<<endl;
cout<<"creatinfg first object n1 \n";
num n1;
{
    cout<<"entering this block \n";
    cout<<"creating two more objects \n";
    num n2,n3;
    cout<<"exiting this block";
}
//because we have made destructor so that when the compiler is getting out of the block then the objects created
// in side the block will automatically destroy.

//we need to know that whenever the block is over the stuffs it contain will also get distroyed.

cout<<"back to main \n";
return 0;
}