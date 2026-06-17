/*WAP TO PRINT SUM OF all odd DIGITS OF A GIVEN NUMBER.*/
// hint : use % operator :will store last digit, / operator



#include<stdio.h>

int main(){
    int n;
    printf("enter a no.:");
    scanf("%d", &n);
   int sum = 0;
   int lastdigit=0;
   while(n!=0)
   {
    lastdigit = n%10;
    if(lastdigit%2!=0)
    {
    sum += lastdigit;
  
    }
  n =n/10;
   }
   printf("the sum of odd digits are %d" , sum);
    return 0;
}
