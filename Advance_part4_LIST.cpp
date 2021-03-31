// Journey of LIst container is stating here........

#include <iostream>
#include <cstring>
#include <list>
using namespace std;

//template <class t>
void display(list<int> &li)
{
    list<int>::iterator iter1;

    for (iter1 = li.begin(); iter1 != li.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;
}

int main()
{
    list<int> li1; // zero length list container.
    list<int> li2(2);
    list<char> li3();
    list<string> li4();

    // pushing some values i li1.

    li1.push_back(34); //
    li1.push_back(44); //
    li1.push_back(54); //------------>These all values are pushed into the list li1.
    li1.push_back(64); //
    li1.push_back(84); //

    list<int>::iterator iter;
    iter = li1.begin();           //begin() this is the reference of the li1.
    cout << *iter << " " << endl; //but this is long method........
    iter++;
    cout << *iter << " " << endl; //but this is long method......
    display(li1);
    //some poping function in list
    li1.pop_back(); // PERFORMING POPING FROM THE END OF THE LIST
    cout << " Deletion is taking place in the end of the list" << endl;

    display(li1);
    li1.pop_front(); // PERFORMING POPING FROM THE begin OF THE LIST
    cout << " Deletion is taking place in the starting of list" << endl;

    display(li1);
    li1.remove(54); //PERFORMING POPING FROM ANY WHERE IN THE LIST. just give the value which is already exist in the list whether it is one time
                    //or multiple times.
    cout << " Deletion of 54 is taking place in the middle of list" << endl;
    // well, now we are going to sort the elements.
    li1.sort();

    display(li1);

    // starting the 2nd list...... It contain only 2 elements
    cout << " New list is initiated. " << endl;
    list<int>::iterator iter2;
    iter2 = li2.begin();
    *iter2 = 34; //we can also perforn push operation by this way.
    iter2++;
    *iter2 = 12;
    iter2++;
    li2.sort();
    display(li2);
    //Now, we are going to merge list1 with list2.
    li1.merge(li2);
    li1.sort();
    cout << " After merging he li1 and li2 is ";
    display(li1);

    //Now, we are going to reverse the list
    li1.reverse();
    display(li1);

    return 0;
}