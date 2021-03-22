/*In this programm we are going to discuss ambiguity when an object call the common name function of 
  the different classes but their is a relation between these two classes.*/



#include<iostream>
using namespace std;

class A
{
    public:
   void  voice()
    {
        cout<<"hello boys!!!\n";
    }
};

class B : public A
{
    public:
    void voice()
    {
        cout<<"hello girls!!!\n";
    }
};

int main()
{
B boy;
boy.voice();  // compiler wil; give preference to the drive class's member.
return 0;
}  

//its output is "hello girls!!!"