//end to start means er(n) to ec(m) and sr(n==1) to sc(m==1)
// here               DOWN = (n-1,m)                      , RIGHT = (n,m-1)
// totalways = rightways + downways
 #include<stdio.h>  
int maze2(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1)       return 1;
    if(n==1){  // cannot go down
        rightWays +=  maze2(n,m-1);
    }
    if(m==1){  // cannot go right
        downWays +=  maze2(n-1,m);
    }
    if(n>1 && m>1){
         rightWays +=  maze2(n,m-1);
         downWays +=  maze2(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
       int n;
       printf("enter no. of rows of the maze: ");
       scanf("%d",&n);
       int m ;
       printf("enter no. of columns of the maze: ");
       scanf("%d",&m);
       int noOfWays =  maze(n,m);
       printf("%d" , noOfWays);      
      return 0;

}