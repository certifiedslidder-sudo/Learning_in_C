/*
Write a program to print ‘n’ natural numbers in reverse order
*/

#include<stdio.h>
 
/*
The loop runs in following steps:
1.‘i’ is initialized to 5.
2.The condition “i” (0 or none) is tested.
3.The code is executed.
4.‘i’ is decremented.
5.Condition ‘i’ is checked & code is executed if it’s not 0.
6.And so on until ‘i’ is non 0.
*/


int main(){
    int n=12;
    for (int  i = n; i; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}