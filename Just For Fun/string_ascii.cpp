#include <iostream>
using namespace std;  
int main() 
{   
    string str = "chutiya ho kya";    
    for (int i = 0; i < str.length(); i++) 
    {     
        cout << (int)str[i] << " ";   
    }    
    cout << endl;
    return 0; 
}