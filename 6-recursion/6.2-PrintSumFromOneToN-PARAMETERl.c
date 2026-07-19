/*                IMPORTANT DRY RUN                     */



   #include<stdio.h>
   void sum(int n, int s ){   // here s store's my sum and i initiated it to 0.
    if(n==0) 
    {
        printf("%d\n",s);
        return;
    }
    sum(n-1, s+n);
      return;
   }
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    sum(n,0);
    return 0;
}