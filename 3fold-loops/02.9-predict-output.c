#include<stdio.h>

int main(){
    int x = 4, y=0,z;
    while(x>=0){
        x--;  //x=3
        y++;   //y=1
        if(x==y)
             continue;
        else
             printf("\n%d %d ",x,y);
    }
    return 0;
}
// ater four iterations the loop stops as x<0(-1) so loop breaks after iterating 4 times.