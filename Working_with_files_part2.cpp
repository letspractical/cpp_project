#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1;
    ifstream le("file2020.txt"); //this is class is used for reading
                                  /* out>>st1;      *********BY ONLY THIS WAY WE CAN JUST READ A WORD OF LINE OF THE CALLED FILE.
    cout<<st1;*/

    //le >> st1;   it can print only one and first word of the sentence.
    getline(le, st1); //getline(from, to) is the member function of the header file #include<fstream> first word willn't be printed.
    cout << st1;
    cout << endl;
    cout << endl;
    string st2 = " This is predator 321.";
    ofstream la("sample60b.txt"); //this is used for writting
    la << st2;
    return 0;
}

// program successfully executed