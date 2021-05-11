#include <iostream>

using namespace std;

//today's topic is array.
/*a array is a collection of same type elements in contaguous memory locations. Sometimes a simple variable is not able to hold enough data
to solve this kind of situation ,we just define an array which store that all these similar kind of data.*/
/*Suppose we need to store 100 names of the employee then we can't make variable each name we just make an array
(single type which hold some free memory to store data with its respective memory allocation) which'll store those all 100 names in it*/

int main()
{
    /*as we know an array has some memory to store data but that memory also allocated to many data respectively and after
     allocation that allocated memory has some identical addresses and the adresses are started from index 0.*/
    cout<<"lets learn an array!\n";

int marks[]={34,78,765};                //syntax for defining an array datatype array_name[size optional(memory divided into)]={values};
    
cout<<"marks: "<<marks[0]<<endl;
cout<<"marks: "<<marks[1]<<endl;
cout<<"marks: "<<marks[2]<<endl;

int mathsmarks[4];              /*we can also define array by this way in which we first declare the name and the size of the array
and then we can define it by address wise*/

mathsmarks[0]=133;
mathsmarks[1]=233;
mathsmarks[2]=333;
mathsmarks[3]=433;


cout<<"mathsmarks: "<<mathsmarks[0]<<endl;
cout<<"mathsmarks: "<<mathsmarks[1]<<endl;
cout<<"mathsmarks: "<<mathsmarks[2]<<endl;
cout<<"mathsmarks: "<<mathsmarks[3]<<endl;
marks[2]=56;         /*if we change the value of any address, then the value will absolutely true and changes will be occure*/
cout<<"marks: "<<marks[2]<<endl;

//lets learn how we can define an array by using for looping statement

int dob[]={95,96,97,98,99};
    for(int i=0;i<5;i++)
    {
        cout<<"the dob are "<<dob[i]<<endl;
    }

int lob[]={566,678,900};

    for(int j=0;j<4;j++)
    {
        cout<<"the lob is "<<lob[j]<<endl;
    }
int h=1;
do{
    cout<<"the marks are "<<lob[h]<<endl;
    h++;
}
while(h<4);

//-----------c++ pointers and arrays------------

int* p= dob;

cout<<"the value of *p is:"<<*p<<endl;       //basically *p is a pointer that is holding the address of array dob.
cout<<"the value of *(p+1) is:"<<*++p<<endl; // by using increment operator with p we are just increase the address of the array by 1.
cout<<"the value of *(p+2) is:"<<*++p<<endl;
cout<<"the value of *(p+3) is:"<<*++p<<endl;

}
