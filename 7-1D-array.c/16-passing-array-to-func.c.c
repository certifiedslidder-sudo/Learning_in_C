 //PASSING ARRAY TO FUNCTION(BY VALUE/REFERENCE)
#include<stdio.h>
void fun( int x[]){// no need to declare size of an array
    x[0] = 10;    //paasing array or integer or float or char
return;
}
int main(){
   int  arr[5]= {1,2,3,4,5};
    printf("%d\n",arr[0]);  // 1
    fun(arr);                  //   passing value  -- only name is written not the data type
    printf("%d\n", arr[0]);  // 10
    return 0;
}

//   IMP NOTE - ARRAY IS PASSED BY REFERENCE ,in c,c++, JAVA