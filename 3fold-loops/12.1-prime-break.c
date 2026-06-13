        /* IMPORTANT PROGRAM FOR UNDERSTANDING....*/    





#include<stdio.h>
int main()
{
    int n;
    int a =0;
    printf("enter a no.:");
    scanf("%d", &n);
for(int i=2; i<= n-1;i++)//i<n is also same.
    {
        if(n%i==0) // i is a factor of n
        {
       a=1;
        break ;
        }
    }
    if(n==1) printf("the given number is neither prime nor composite.\n");
    else if(a==0) printf("the given number is prime.\n");
    else printf("the given number is composite\n");
    return 0;
}
// if no. is 1, then loop goes for n=1, i=2 to 0(n-1) and loop dont work..as it dont follow the condition , i<=n
//OUTPUT - THE GIVEN NO. IS PRIME. AS A REMAINS 0 THEREFORE EDIT THE CODE AT LINE 22AND 23.

// if no. is 2 , n=2, then loops goes for i=2 to 1(n-1) and loop dont work as it dont follow the condition , i<=n
//OUTPUT - THE GIVEN NO. IS PRIME, AS A REMAINS 0