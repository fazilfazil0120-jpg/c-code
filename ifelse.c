#include <stdio.h>
int main()
{ 
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
if(a>10)
{
    printf("The number is greater than 10");
}
else if(a<10)
{
    printf("The number is less than or equal to 10");
}
else
{
    printf("The number is equal to 10");
}
return 0;
}