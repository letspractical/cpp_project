#include <iostream>
#include <vector>
using namespace std;

template <class r>
void display(vector<r> &v)
{
    cout<<" Displaying the vector elements "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        //cout << v[i] << " ";
        cout <<" "<<v.at(i) << " "; //implementing at()
    }
    cout << endl;
}

int main()
{
    /*vector<int> vec1;
    int elem, size;
    cout << " Enter the size of the vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << " Enter an element into the container ";
        cin >> elem;
        vec1.push_back(elem);
    }
    display(vec1);

    vec1.pop_back();
    cout << " poping an element from the container " << endl;
    display(vec1);*/
    
    vector<int> vec1;   //zero length vector
    //vec1.push_back();
    display(vec1);
    cout<<" THe size of this vector is :"<< vec1.size()<<endl;

    vector<char> vec2(3);
    vec2.push_back('4');
    vec2.push_back('B');
    vec2.push_back('A');
    display(vec2);
    cout<<" THe size of this vector is :"<< vec2.size()<<endl;

    vector<char> vec3(vec2);
    //vec3.push_back();
    display(vec3);
    cout<<" THe size of this vector is :"<< vec3.size()<<endl;

    vector<double> vec4(3, 23); // vec4(no. of copies, element)
    //vec4.push_back();
    display(vec4);
    cout<<" THe size of this vector is :"<< vec4.size()<<endl;
    return 0;
}
