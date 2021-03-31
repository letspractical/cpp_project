#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /*  string Name;
    int Age;
ofstream obj1;            //output for file
obj1.open("file2020.txt");
cout<<" Enter the name ";
cin>>Name;
cout<<" Enter your age ";
cin>>Age;
obj1<<" Enter the name "<< Name <<endl ;
obj1<<" Enter your age "<< Age <<endl;
obj1.close();*/

    ifstream obj2;
    string s1, s2;
    obj2.open("file2020.txt"); //input for file
    //obj2>>s1>>s2;
    /*
cout<<s1<<endl;                  get only the first word of the line
cout<<s2<<endl;                  get only the first word of the line
*/

    //********* To counter the drawback limited capacity of gettin the words from the file*******
    // Here is the way by which we can print the entire line.

    while (obj2.eof() == 0)     //eof() is the end of file......
    {
        getline(obj2, s1);
        cout << s1 << endl;
    }
    obj2.close();
    return 0;
}