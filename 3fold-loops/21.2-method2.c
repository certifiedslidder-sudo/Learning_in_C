/* WAP TO PRINT THE SUM OF SERIES: 1-2+3-4+5-6.... UPTO 'n'*/
//method 2- when n is a large number, suppose n =1000, running loop for 1000 iterations dont seems feasible therefore using this method, mathematical.
// if n is even(n%2 ==0) then sum = -n/2,  if n is odd(n%2!=0) then sum = (-n/2)+n

 #include<stdio.h>
 
 int main(){
    int n;
    printf("enter a number:");
    scanf("%d" , &n);
    ///1-2+3-4+5-6....+n
    /*OBSERVATION 
    odd no --> add
    even no --> subtract*/
    int sum =0;
    if(n%2==0)
    {
        sum = -n/2;
    }
    else
    {
          sum = -n/2 + n;
    }
    printf("the sum is : %d" ,sum);
    return 0;
 }