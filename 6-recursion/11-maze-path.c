/*                   VERY INTRESTING QUESTION           
ALLOWED --> down , right  
note - one step at a time    
 */

 #include<stdio.h>  // s=start, e=end , r=row , c=column
int maze(int sr, int sc, int er , int ec){  
    int rightWays = 0;
    int downWays = 0;
    if(sr == er && sc == ec)   return 1;
    if ( sr == er){ // only rightWays call 
        rightWays += maze(sr,sc+1,er,ec);  
    }
    if (sc == ec){   // only downWays call
         downWays  += maze(sr+1,sc,er,ec);
    }
    if(sr<er && sc<ec){
          rightWays = maze(sr,sc+1,er,ec);
          downWays = maze(sr+1,sc,er,ec);
    }
    int TotalWays = rightWays + downWays ;
    return TotalWays;
}
int main(){
       int n;
       printf("enter no. of rows of the maze: ");
       scanf("%d",&n);
       int m ;
       printf("enter no. of columns of the maze: ");
       scanf("%d",&m);
       int noOfWays =  maze(1,1,n,m);
       printf("%d" , noOfWays);      
      return 0;

}