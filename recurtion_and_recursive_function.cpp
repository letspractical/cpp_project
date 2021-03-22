#include<iostream>
/*here we are discussing recursion with the help of 2 examples*/
//--recursion--> when function call itself in it, that process is called recursion.

using namespace std;

int factorial(int n)  //here function factorial calling itself by giving new argument n-1.6   
{
    if(n<=1)
    {
        return 1;
    }
    
return n* factorial(n-1);
}

int fibo(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main()
{
int a;
cin>>a;
cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
cout<<"the fibonacci of "<<a<<" is "<<fibo(a)<<endl;
return 0;
}