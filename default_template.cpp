#include <iostream>
#include <cstring>
using namespace std;
template <class f = string, class t = int, class s = char> //default template declaring
class Myclass
{
public:
    f Name;
    t Age;
    s Blood_group;
    Myclass(f a, t b, s c)
    {
        Name = a;
        Age = b;
        Blood_group = c;
    }
    void display()
    {
        cout << "Your Name : " << Name << endl;
        cout << "Your Age : " << Age << endl;
        cout << "Your Blood_groupB: " << Blood_group << endl;
    }
};

int main()
{
    cout << endl;
    cout << endl;
    string a, a1;
    int b;
    float b1;
    char c, c1;
    cout << " Enter your Name : ";
    cin >> a;
    cout << " Enter your Age : ";
    cin >> b;
    cout << " Enter your Blood group : ";
    cin >> c;
    cout << endl;
    cout << endl;
    Myclass<> M1(a, b, c); //defining the defaut template.......... here we are not giving the type, here default template will execute
    M1.display();
    cout << endl;
    cout << endl;
    cout << " Enter your Name : ";
    cin >> a1;
    cout << " Enter your Age : ";
    cin >> b1;
    cout << " Enter your Blood group : ";
    cin >> c1;
    cout << endl;
    cout << endl;
    Myclass<string, float, char> M2(a1, b1, c1); //defining the default template...... here we are giving the return type, here default template willn't execute
    M2.display();
    return 0;
}