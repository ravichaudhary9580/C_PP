#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void print_substring(char str[],int start,int end=-1);

//Program 1
int hcf(int a,int b)
{
    int i,h;
    h=a<b?a:b;
    for(i=h;i>0;i--,h--)
    {
        if(a%h==0&&b%h==0)
        break;
    }
    return h;
}
int pro1()
{
    int a=4,b=3;
    cout<<hcf(a,b);
    return 0;

}

//Program 2
float volume(float l,float b,float h)
{
    return l*b*h;//volume of cuboid
}
float volume(float r,float h)
{
    return (3.14/3)*r*r*h;//volume of cone
}
float volume(float r)
{
    return (4/3.0)*3.14*r*r*r;//volume of sphere
}

//Program 3
void print_substring(char str[],int start,int end)
{
    int i;
    if(end==-1)
    end=strlen(str);
    
    for(i=start;i<end;i++)
    {
        cout<<str[i];
    }
}
int pro3()
{
    char str[]="ravichaudhary";
    print_substring(str,3,6);
    return 0;
}

//Program 4
void swap_array(int arr1[],int arr2[],int size)
{
    int temp,i;
    for(i=0;i<size;i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
}
int pro4()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,0};
    swap_array(arr1,arr2,5);
    int i;
    for(i=0;i<5;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
    for(i=0;i<5;i++)
    cout<<arr2[i]<<" ";
    return 0;
}

//Program 5
int* merge_array(int A[],int B[],int size)
{
    int *arr=(int*)malloc(2*size*sizeof(int));
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    return arr;
}

int main()
{
    int A[5]={1,2,3,4,5};
    int B[5]={6,7,8,9,10};
    int i,*arr;
    arr=merge_array(A,B,5);
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}