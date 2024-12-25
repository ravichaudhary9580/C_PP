#include <iostream>
using namespace std;

// Program 1
// Write a C++ program to print Hello MySirG on the screen.
int p1()
{
    cout << "Hello MySirG" << endl;
    return 0;
}

// Program 2
// Write a C++ program to print Hello on the first line and MySirG on the second line using endl;
int p2()
{
    cout << "Hello" << endl
         << "MySirG" << endl;
    return 0;
}

// Progarm 3
// Write a C++ program to calculate the sum of two numbers.
int p3()
{
    int a, b;
    cout << "Enter two number:";
    cin >> a >> b;
    cout << endl;
    cout << "Sum is:" << a + b;
    return 0;
}

// Program 4
// Write a C++ program  to calculate the area of a circle.
int p4()
{
    float radius, PI = 3.1432;
    cout << "Enter radius of Circle: ";
    cin >> radius;
    cout << endl;
    cout << "Area of Circle is: " << "\033[32m" << PI * radius * radius << "\033[0m";
    return 0;
}

// Program 5
// Write a C++ program  to calculate the Volume of Cuboid.
int main()
{
    float l, b, h;
    cout << "Enter dimensions  of Cuboid: ";
    cin >> l >> b >> h;
    cout << endl;
    cout << "Volume of Cuboid is: " << "\033[32m" << l * b * h << "\033[0m";
    return 0;
}