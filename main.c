#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
printf("Enter the number:"),
scanf("%i",&num);
if(num%2==0 )
{
    printf("the number is even");
}
else if(num%2!=0)
{
    printf("the numbber is odd");
}
    return 0;

}
