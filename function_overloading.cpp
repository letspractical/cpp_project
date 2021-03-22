#include<iostream>
using namespace std;
//-----function overloading--------
// function overloading is a process in which we can make same name function by just giving vary arguments.

double volume(float r,float h)//volume of cylender having function name "volume"
{
    return 3.14*r*r*h;
}
float volume(int a)//volume of cube having function name "volume"
{
    return a*a*a;
}
double volume(float l,float b,float h)//volume of rectangle having function name "volume"
{
    return l*b*h;
}

int main()
{
    int a,r,b,h,l;
cin>>a;
cout<<"the volume of cube "<<volume(a)<<endl; //printing volume of cube
cin>>r>>h;
cout<<"the volume of the cylender "<<volume(r,h)<<endl;//printing volume of cylender
cin>>l>>b>>h;
cout<<"the volume of the rectangle "<<volume(l,b,h)<<endl;//printing volume of cylender
return 0;//overloading successful
}