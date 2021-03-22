#include <iostream>

using namespace std;

/*--------------functions----------------*/
//functions are the type which contains number of statements which is actually performing any task
/* the advAntage of the function is , it can be call any where in the program and it will perfom that task for that 
it was create*/

int sum(int a, int b)//globally declared functions //a,b are the formal parameters
{
int c=a+b;
}
// in C++ function name is case sensitive, whe can't use special characters in c++ functions or space bars.
/*the various way to declare any function

1, data type function_name(type argument1,type argument2,...) ======ACCEPTABLE=====
2, data type function_name(){        =======ACCEPTABLE========
    argument1;
    argument1;
    argument1;.......}

    type function_name(type argument1, argument2)=====NOT ACCEPTABLE======
}


int sub( int a, int b); /*function prototype:=> These are those parameters which are used to telling or declare to the
compliler that the same function is defined any where in the program instead before the main function.*/

int main()
{
    int num1, num2;
    cout<<"entre the value of num1 ";
    cin>>num1;
    cout<<"entre the value of num2 ";
    cin>>num2;
cout<<"\nthe value of sum is "<<sum(num1,num2)<<endl;//function called/* num1 and num2 are the actual parameters
cout<<"the value of sub is "<<sub(num1,num2)<<endl;//function called

}


int sub( int a, int b)
{
    int c=b-a;
}