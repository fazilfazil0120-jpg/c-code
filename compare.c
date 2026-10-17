# include <stdio.h>
int main()
{
    int a=10, b=20, c=10;
    if(a>b)
    {
        if(a>c)
        {
            printf("a is the big number");
        }
        else if(c>a)
        {
            printf("c is the big number");
        }
        else
        {
            printf("a and c is big");
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            printf("b is the big number");
        }
        else if(c>b)
        {
            printf("c is the big number");
        }
        else
        {
            printf("c and b is big");
        }
    }
    if(a==b)
    {
        if(a>c)
        {
            printf("a and b is equal and");
        }
        else if(c>a)
        {
            printf("c is the big number");
        }
        else
        {
            printf("a, b and c are equal");
        }
    }
}


