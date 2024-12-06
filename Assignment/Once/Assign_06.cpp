#include<iostream>
#include<string.h>
using namespace std;
void sort(int arr[],int size,bool x=1);
void sort(char str[],bool ascending=1);
void rotate(int arr[],int size,int d,int n=1);

//Program 1
void sort(int arr[],int size,bool ascending)
{
    int i,n,temp;
    if(ascending)//x is true Ascending else Descending sorting
    {
        for(n=0;n<size-1;n++)
        {
            for(i=0;i<size-n-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    temp=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=temp;
                }
            }
        } 
    }
    else
    {
        for(n=0;n<size-1;n++)
        {
            for(i=0;i<size-1-n;i++)
            {   temp=0;
                if(arr[i]<arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        } 
    }

}
int man()
{
    int arr[10]={3,5,7,2,8,6,12,4,9,1};
    int i;
    sort(arr,10,1);
   for(i=0;i<10;i++)
    {
         std::cout << arr[i] << " ";
    }
    printf("\n");
    sort(arr,10,false);
   for(i=0;i<10;i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

//Program 2
void sort(char str[],bool ascending)
{
    int i,n,l;
    char temp;
    l=strlen(str);
    printf("%d",l);
    if(ascending)//x is true Ascending else Descending sorting
    {
        for(n=0;n<l-1;n++)
        {
            for(i=0;i<l-1-n;i++)
            {
                if(str[i]>str[i+1])
                {
                    temp=str[i+1];
                    str[i+1]=str[i];
                    str[i]=temp;
                }
            }
        } 
    }
    else
    {
       for(n=0;n<l-1;n++)
        {
            for(i=0;i<l-1-n;i++)
            {
                if(str[i]<str[i+1])
                {
                    temp=str[i];
                    str[i]=str[i+1];
                    str[i+1]=temp;
                }
            }
        } 
    }

}
int min()
{
    char str[50];
    cout<<"Enter a String:";
    cin.getline(str,50);
    sort(str, true);
    
   std::cout << "Sorted String (Ascending): " << str << std::endl;
    printf("\n");

    sort(str, 0);
   std::cout << "Sorted String (Descending): " << str << std::endl;
    return 0;
}

//Program 3
void rotate(int arr[],int size,int d,int n)
{
    int i,temp;
    if(d==1)
    {
        while(n)
        {
            temp=arr[size-1];
            for(i=0;i<size-1;i++)
            {
                arr[size-1-i]=arr[size-2-i];
            }
            arr[0]=temp;
            n--;
        }
    } 
    else
    {
        while(n)
        {
            temp=arr[0];
            for(i=0;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[size-1]=temp;
            n--;
        }
    }
}
int mai()
{
    int arr[5]={1,2,3,4,5};
    int i;
    rotate(arr,5,-1,3);
    for(i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}

//Program 4
int lcm(int a,int b,int c)
{
    int l;
    l= c > a>b?a:b ? c : a>b?a:b;
    for(l;l<=a*b*c;l++)
    {
        if(l%a==0&&l%b==0&&l%c==0)
        break;
    }
    return l; 
}
int ain()
{
    int a=4,b=6,c=8;
    cout<<"LCM is "<< lcm(a,b,c);
    return 0;
}

//Program 5
bool check_prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==2)
    return 1;
    else
    return 0;
}
void prime_factors(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        if(check_prime(i))
        cout<<i<<" ";
    }
}
int main()
{
    prime_factors(36);
    return 0;
}
