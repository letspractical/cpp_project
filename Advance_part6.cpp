// This program is for learn the function objects.

#include<iostream>
#include<cstring>
#include<functional>    // this is the header file which contain fuctional objects.
#include<algorithm>

using namespace std;

// functional objects(functor) are the fuctions wrapped in the class which acts like an object.

int main()
{        // 1  2 3 4  5.
int arr[]= {34,5,6,23,2,4,10,37};
sort(arr, arr+5);     // sort(arr, arr+5) this is defining the raange of sorting.

// now we are making function object in the sorting function.

sort( arr, arr+5, less<int>());        // So this the definition of the function object "less"
cout<<"\n";
for(int i=0; i<=6; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"The sorting of first five elements in increasing order";
cout<<endl;
cout<<endl;
sort( arr, arr+5, greater<int>());        // So this the definition of the function object "greater"
for(int i=0; i<=6; i++)
{
    cout<< arr[i]<<" ";
}
cout<<" The order of first five elements in decreasing order\n";
return 0;
}