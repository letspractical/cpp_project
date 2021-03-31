#include <iostream>
#include <vector>
using namespace std;

template <class r>
void display(vector<r> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        //cout << v[i] << " ";
        cout << v.at(i) << " ";  //implementing at() 
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
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
    display(vec1);

    //iterator declaration.
    vector<int>::iterator iter = vec1.begin(); /* iterator is pointing the beginning of the vec1 container, So that insertion
 will takes place at the beginning of the container.*/

    vec1.insert(iter, 23); /*inserting an element into the container by using the insert function of the vector class
                           
                           its syntax is :  vector_name.insert(iterator_name, value that will enter)
*/
    cout << " inserting the new value." << endl;
    display(vec1);

    vec1.insert(iter + 3, 23);
    cout << " inserting the new value at 3rd position of the container." << endl;
    display(vec1);

    vec1.insert(iter + 6,3, 23);   // in this syntax insert function is containing insert(pointer_iterator, no. of copy of element, element)
    cout << " inserting the new value at 6th position of the container." << endl;
    display(vec1);
    return 0;
}