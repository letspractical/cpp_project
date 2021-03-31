//This program is to learning the vector container for competative programming. also implementing some of 
//its functions like push_back(), pull_back() functions

#include <iostream>
#include <vector>
using namespace std;


template <class t>
void display(vector<t> &v)      //displaying the entered number into the vec1 container.
{
  for (int i = 0; i < v.size(); i++)   //using size function of the vector class--> size()
  {
    cout << v[i] << " ";         // position of the elements in container.
  }
  cout<<endl;
}
int main()
{
  vector<int> vec1;       //vector declaration  
  int elem, size;
  cout<<" Enter the size of the vector : ";
  cin>> size;
  for (int i = 0; i < size; i++)
  {
    cout << " Enter the number which you want to put into this vector : ";
    cin >> elem;
    vec1.push_back(elem);    //vector member function called by vector object(vec1)
  }
  display(vec1);
  vec1.pop_back();           // htis member function for performing the poping the last member.
  cout<<" Poping1 is occured"<<endl;
  display(vec1);
  vec1.pop_back();           // htis member function for performing the poping the last member.
  cout<<" Poping2 is occured"<<endl;
  display(vec1);

  return 0;
}
/*
  1. Significance of Vector is ,basically it is a container in c++ and in general words we can call is as a flexible array
  2. Because vector is also a class therefore it has multiple member functions which can perform lot of tasts....
  3. Such as pushback(), popback(), at() etc.....
  4. For more reference cplusplus.com website is recommended.
  */