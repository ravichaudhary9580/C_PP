#include<stdio.h>
int main()
{
    int a=3;
    printf("%d\n",++a);//4 and print //behaviour of pre-increment is increase and pass due high priority
    printf("%d\n",a++);//print and 5 //behaviour of post-increment is pass and increment due to loo priority

    printf("%d %d %d",a,++a,a++);/* //out of the 3 arguments before passing value, the operator do its work and here look at associativity of 1st argument (a) is Right to left So primarly 3rd argument is in action (a++) and value passes so printed 5 and increase to 6 now 2nd argument is in action (++a) and value increase to 7 and passes now the 3rd and last argument just passes and printed */
    return 0;
}//I hope its clear