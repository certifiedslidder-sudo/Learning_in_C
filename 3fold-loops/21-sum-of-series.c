/* WAP TO PRINT THE SUM OF SERIES: 1-2+3-4+5-6.... UPTO 'n'*/
//method 1 = hint: loop, if-else

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
    for(int i=1;i<=n;i++)
    {
       if(i%2!= 0) sum +=i;
       else sum -=i;
    }
    printf("the sum is : %d" ,sum);
    return 0;
 }