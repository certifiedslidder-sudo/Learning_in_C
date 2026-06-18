/*WAP to print out all armstrong numbers between 1 to 500 . if sum of cubes of each digit of the number is equal to the no. itself , then no. is armstrong*/

#include<stdio.h>

int main(){
    int num,temp,digit,sum;
    printf("armstrong no. between 1 and 500 are:\n");

   for(num=1 ; num<=500;num++)
   {
    temp=num;
    sum =0;
    while(temp>0)
    {
        digit=temp%10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d ", num);
    }
   }
    return 0;
}
