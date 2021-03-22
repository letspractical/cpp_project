#include<iostream>
//today we are going to learn about Inline function , Default argument and Constant argument

using namespace std;
inline int product(int a,int b) //inline function are the fuction which contain inline keyword before
{                              //any function name is useful in case of when a function is call again and again.
    return a*b;                //so when we call it again then multiple times the function is call therefore it perof-  
}               //-orm multiple times and take time to compute, but we can't make every function inline ,because
      /* compiler will decide which function it'll let to inline , this concept is only used when function contain
      few script, if it contain some code then the size of the program may get affected*/

float dollar_value(int doll, float rupee=60.7)
{
   static float value;  //static key word is used to make argument not destroy after execution but in normal cases after 
    value= doll * rupee;// execution the function destroy its arguments.
    return value;
}

/*float value(const float* dolly) const keyword is used for make the argument only readable but not writeable.
{
}*/


int main()
{
int c,d;
cin>>c>>d;
cout<<"the value of the product of c and dis "<<product(c,d)<<endl;//inline keyword store return value at this memory. 
cout<<"the value of the product of c and dis "<<product(c,d)<<endl;//then at here
cout<<"the value of the product of c and dis "<<product(c,d)<<endl;//then at here
cout<<"the value of the product of c and dis "<<product(c,d)<<endl;//then at here
cout<<"the value of the product of c and dis "<<product(c,d)<<endl;//then at here
cout<<"the value of the product of c and dis "<<product(c,d)<<endl;//then at here



/*--------------------default arguments------------------------*/
int dollar= 34; /*default variables are defined at very extreme right position in function brackets*/
cout<<"the value of rupee w.r.t dollar is"<<dollar_value(dollar)<<endl;
cout<<"the value of rupee w.r.t dollar is"<<dollar_value(dollar, 62.8)<<endl;

/*--------------------constant arguments------------------------*/
cout<<"the new dollar value is"; //<<value(dollar);
/*constant arguments are just an arguments which couldn't destroy after execution, but may it get updated*/

}