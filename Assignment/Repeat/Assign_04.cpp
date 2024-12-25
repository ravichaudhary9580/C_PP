#include <iostream>
using namespace std;

// Program 1
//  Define a C++ function to print all prime numbers between two given numbers.
bool checkPrime(int n)
{
    int i = 2;
    if (n <= 1)
        return 0;
    while (i < n)
    {
        if (n % i == 0)
            return 0;
        else
            i++;
    }
    return 1;
}

void printPrime(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (checkPrime(i))
            cout << i << " ";
    }
}

// Program 2
// Define a C++ function to find the highest value in a given number.
int highestValue(int n)
{
    int max = 0, d;
    while (n)
    {
        d = n % 10;
        n = n / 10;
        max = d > max ? d : max;
    }
    return max;
}

// Program 3
//  Define a function in C++ to calculate x raised to the power y.
float power(float x, int y)
{
    float pow = 1.0;
    while (y)
    {
        pow = pow * x;
        y--;
    }
    return pow;
}

// Program 4
//  Define a function to print Pascal Triangle up to N lines.
long long int factorial(int n)
{
    long long int fact = 1;
    if (n == 0)
        return 1;
    else
    {
        while (n)
        {
            fact = fact * n;
            n--;
        }
    }
    return fact;
}

long int nthterm(int i, int j)
{
    long int term;
    term = factorial(i) / (factorial(j) * (factorial(abs(i - j))));
    return term;
}

void printPascalTriangle(int lines)
{
    int term;
    for (int i = 0; i < lines; i++) // i is for row
    {
        term = 0;
        for (int j = 1, flag = 1; j < 2 * lines; j++) // j is for column
        {
            if (j >= lines - i && j <= lines + i)
            {
                if (flag)
                {
                    cout << nthterm(i, term);
                    // cout << "*";
                    ++term;
                    flag = 0;
                }
                else
                {
                    cout << " ";
                    flag = 1;
                }
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

// Program 5
// Define a C++ function to check whether a given number is a term in a Fibonacci series or not.
bool checkFibonacci(int n)
{
    int term=0;
    int i=-1,j=1;
    while (term<=n)
    {
        term=i+j;
        if(n==term)
            return 1;
        i=j;
        j=term;
    }
    return 0;
}

int main()
{
    cout<<checkFibonacci();
    return 0;
}