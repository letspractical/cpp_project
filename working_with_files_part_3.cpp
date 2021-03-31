#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1;
    string st2;

    ofstream out("sample60b.txt"); //opening the file and writting by using constructor.
    cout << " Enter the name ";

    cin >> st1;
    out << " Name is " + st1; // i can use + operator instead of <<.//
    out.close();              // This function is used to break the link between that file and this program.

    ifstream in("sample60b.txt");
    //in >> st2;  is se sirf pehla word h print hoga. So use getline() for printing the content.
    getline(in, st2);
    cout << st2;
    in.close();
    return 0;
}