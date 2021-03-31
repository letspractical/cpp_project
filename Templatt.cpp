// This program is to learning the significance of template in c++ programming............

#include <iostream>
using namespace std;

/*template is used to reduce the size of the program, basically when the same piece of code is used multiple time at that 
time we need to type the same code multiple times so at that time we just crerate a template which hold the class returning
type, but that type is not the original return type, that type is basically the declaration of the type which will be define
in the main section of the program*/


template <class p>  //template create a custom data type.***************
class Vector
{
    public:
    p *arr;    //a pointer contains return type of template
    int size;


    Vector(int m)
    {
        size = m;
        arr = new p[size];
    }

    p dotproduct(Vector &v)     //a member function contains return type of template.
    {
        p d=0;       //a parameter contains return type of template.
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    int n;
    cin >> n;
    //Vector<int> v10(n);  
    //v10.arr[0] = 2;
    //v10.arr[1] = 3;
    //v10.arr[2] = 4;
    //v10.arr[3] = 5;
    //Vector<int> v20(n);
    //v20.arr[0] = 8;
    //v20.arr[1] = 9;
    //v20.arr[2] = 1;
    //v20.arr[3] = 5;
    //int g1 = v10.dotproduct(v20);
    //cout << g1;

    //****** majic of template*******


    Vector <float>v1(n);
    v1.arr[0] = 2.9;
    v1.arr[1] = 3.5;
    v1.arr[2] = 4.3;
    v1.arr[3] = 5.9;
    Vector <float>v2(n);
    v2.arr[0] = 8.2;
    v2.arr[1] = 9.5;
    v2.arr[2] = 1.7;
    v2.arr[3] = 5.1;
    float g = v1.dotproduct(v2);
    cout << g;
    return 0;
}
// when we apply 2 template having same class but defining differently then it will work only with the last caller. But if deffault template
/* is defined at that case it could be possible to perform. */