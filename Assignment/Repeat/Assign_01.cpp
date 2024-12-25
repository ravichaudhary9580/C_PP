#include <iostream>
using namespace std;

// Problem - 01
// Write a program to check whether a given number is even or odd.
void checkEven_Odd()
{
    int n;
    cout << "Enter a number to check Even or odd:" << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}

// Problem - 02
// Write a program to calculate the factorial of a given number.
void factorial()
{
    int n;
    cout << "Enter a number to calculate factorial:" << endl;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
}

// Problem - 03
// Write a program to swap values of two int variables.
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Program 04
//  Write a function to calculate LCM of two numbers (TSRS)
int lcm(int a, int b)
{
    int lcm;
    lcm = a > b ? a : b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            return lcm;
        }
        else
            lcm++;
    }
}

// Program 5
// Write a function to check whether a given a number is Prime or Not.(TSRS)
bool checkPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < n;)
        {
            if (n % i == 0)
            {
                return 0;
            }
            else
            {
                i++;
            }
        }
    }
    return 1;
}

int main()
{
    int x;
    cout << "Enter a number:" << endl;
    cin >> x;
    if (checkPrime(x) == 1)
    {
        cout << endl
             << "Prime" << endl;
    }
    else
        cout << endl
             << "Not prime";
    return 0;
}