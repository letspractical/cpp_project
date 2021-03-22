
  //-----pending program--------


#include <iostream>
#include <cmath>

using namespace std;

class points
{
    int a, b;
    float s;

public:
    points(int x, int y);   //construction declaration
    
    void display()
    {
        cout << "the coordinates of the point is (" << a << "," << b << ")" << endl;
    }

   friend points point_distance(points x, points y);  //friend function declaring.
};

points :: points(int x, int y)   //construction defining
    {
        a = x;
        b = y;
    }
  
  
points point_distance(points p1,points p2)  //friend function is defining here.//can't able to define inside class.
{
     int evaluate() { ((p2.a - p1.a) * (p2.a - p1.a) + (p2.b - p1.b) * (p2.b - p1.b))};
    float dist= evaluate();
    
    points s= sqrt(dist);
    cout<<"the distance between two point P("<<p1.a<<","<<p1.b<<") and Q("<<p2.a<<","<<p2.b<<") is"<<s<<endl;
    return s;
}

int main()
{
    points p1(2, 3);
    p1.display();
    points p2(3, 5);
    p2.display();


    point_distance(p1,p2);
   // cout<<"the distance between two points is "<<point_distance(p1,p2)<<endl;    ------we can't invoke point_distance(p1,p2) by this.
    return 0;
}