/*
                   1
                   1 3 
                   1 3 5 
                   1 3 5 7
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of rows:");
    scanf("%d", &n);
    //int a =1;        will not fix initial value of a as 1 if declared outside the loop. after a=5 it goes a = 7  for next iteration of outer loop not a=1.       
   for(int i=1;i<=n;i++)  //imp line
   {   
    int a=1; //  using extra variable,can also use mathemathical formula  
     for(int j=1;j<=i;j++)
     {
        printf("%d ",a);
        a=a+2;
     } 
      printf("\n");
   }
    return 0;
}