//in while loop the initialization is done outside the loop, increment is inside the code.
#include<stdio.h>

int main()
{
    int i= 1;
    while(i<=100)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}