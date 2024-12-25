#include <iostream>
using namespace std;

// Program 1
// Write a C++ program to calculate average of 3 number.
int p1()
{
    int a, b, c;
    cout << "Enter three number:";
    cin >> a >> b >> c;
    cout << "Average of 3 number is: " << (a + b + c) / 3.0;
    return 0;
}

// Program 2
// Write a C++ program to calculate square of a number.
int p2()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Square is: " << n * n;
    return 0;
}

// Program 3
// Write a C++ program to swap values of two variable without using third variable.
int p3()
{
    int a = 5, b = 3;
    cout << "a=" << a << " b=" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a=" << a << " b=" << b << endl;
    return 0;
}

// Program 4
//  Write a C++ Program to find a maximum of two number.
int p4()
{
    int a, b;
    cout << "Enter two number:";
    cin >> a >> b;
    int max;
    max = a > b ? a : b;
    cout << "Maximum is: " << max;
    return 0;
}

// Program 5
// Write a C++ program to find the sum all the number of an array of size 10.
int main()
{
    int num[10], sum = 0;
    cout << "Enter 10 number:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        sum = sum + num[i];
    }
    cout << "Sum of 10 number is: " << sum;
    return 0;
}