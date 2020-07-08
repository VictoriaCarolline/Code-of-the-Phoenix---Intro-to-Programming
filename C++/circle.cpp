#include <iostream>
using namespace std;

class Circle {
public:
    Circle(){
        radius = 1;
    }
    Circle(int newRadius){
        radius = newRadius;
    }
    int radius;
    double getArea(){
        return radius*radius*3.14;
    }
};

int main(){
    Circle c;
    cout << c.getArea() << " ";
    Circle c1(2);
    cout << c1.getArea() << " ";
    cout << c1.radius;

   return 0;
}