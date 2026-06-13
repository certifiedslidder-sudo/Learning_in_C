#include<stdio.h>
int main()
{
    for(int i=1; i<= 100;i++)  
    {
        if(i%2 !=0) // i is a factor of n
        {
            continue; //skips that particular iteration / round of loop.
        }  
        printf("%d ",i);   ;
    }
    return 0;
}