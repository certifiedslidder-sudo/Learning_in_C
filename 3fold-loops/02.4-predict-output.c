#include<stdio.h>

int main(){
    int x= 4,y,z;
    y= --x; //  --x se, x phele 3 bana fir y=3 assign hua
    z= x--; //x-- se, z ko x ki current value assign kri z=3 then x ko decrement kra ke x=2 bnaya
    printf("\n%d %d %d ",x,y,z);
    return 0;
}