#include<iostream>
using namespace std;
struct Book
{
    int bookid;
    char title [50];
    float price;
};
void input(struct Book *);
void display(struct Book );
int main()
{
    struct Book b1={100,"C in Depth", 546.0f};
    struct Book b2,b3;
    b2.bookid=105;
    strcpy(b2.title, "C++ Made Easy");
    b2.price=630.0f;
    input(&b3);
    display(b1);
}
void display(struct Book )
{
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
}
void input(struct Book *p)
{
    cout<<"Enter bookid title and price";
    cin>>p->bookid;
    cin.getline(p->title,50); 
    cin>>p->price;
}