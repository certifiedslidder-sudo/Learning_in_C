/*WAP TO PRINT REVERSE OF A GIVEN NUMBER and its sum*/
// HINT= *10 last digit
 #include<stdio.h>
 
 int main(){
    int n,num,sum;
    
    printf("enter a no.:");
    scanf("%d", &n);
    num =n;
    int r =0;
    while(n>0)
    {
         r= r*10;
        r = r+(n%10);
        n=n/10;
    }
    sum = num+r;
    printf("the reversed number is %d" , r);
    printf("\nthe sum is %d" ,sum );
    return 0;
 }