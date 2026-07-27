
#include<stdio.h>
  void tower(int n , char s , char h , char d){
   if(n==0) return;
      tower(n-1,s,d,h);
      printf("%c ->  %c\n",s,d);
      tower(n-1,h,s,d);
      return ; 
  }
int main(){
    int n;
    printf("enter  number of disks: ");
    scanf("%d", &n);
    tower(n , 'A', 'B','C');
    return 0;
}
/*   hint- divide your piramid into two disk: lower disk, rest of the piramid.
3 rods --> source rod A , destination rod B , helping rod C.
A --> B (S -> H) :    SMALL PYRAMID(N-1)DISK     // CALL
A --> C  (S -> D):    LARGEST DISK
B --> C ( H -> D) :    SMALL PYRAMID     // CALL
   INPUT  --> n -->  no. of disks
    Disks          Minimum Moves
       3            2^3 - 1    -->   7
       4            2^4 - 1    -->   15
       5            2^5 - 1    -->   31
       6            2^6 - 1    -->   63
       
*/