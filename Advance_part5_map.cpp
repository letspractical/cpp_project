// This is the program to learning the map container for stl.

#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{
map<string, int> marksmap;
marksmap["Shivam"] = 45;
marksmap["Rohan"] = 54;
marksmap["Jombee"] = 50;
marksmap["Flask"] = 45;

//Creating the iterator.

//inserting some data.
marksmap.insert({{"Karan",23},{"Nosie",76}});    //This is the way by which we can insert these values.
map<string, int> :: iterator iter1;
for(iter1 = marksmap.begin(); iter1 != marksmap.end(); iter1++)
{
cout<<(*iter1).first<< " "<<(*iter1).second<<"\n";
}
cout<<" The output is sorted in alphabatical order.";

return 0;
}

//successfully executed

//there are so many funcions of these classes, for learning those we can go to cplusplus.com website.