/*#include<stdio.h>

int main(){
    int x = 5;
    int y =2;
    int z = x/y;
    printf("%d\n",x);
    //printf("%f\n",z);
    printf("%d",z);
    return 0;
}*/

#include<stdio.h>

int main(){
    float x =5;
    float y =2;
    float z = x/y;                //OUTPUT:2.50000.....
    /*float z = 5/2;               OUTPUT:2.00000.....
     int ko int k sath operate(/) kra anser aya int m jo ki 2 h fir wo float m store ho gya as it is      
     wheres as x/y operate hi as float hue h so ans aya 2.5*/
    printf("%f",z);
    //printf("%d",x);       %d= for int         %f=for float(real no.)
     

    /*float z = 5.00/2             output is 2.5000
     kyuki do diff datatype sath m operate nhi hote aur IMPLICIT TYPECASTING ho jati h ,, chota data type(here int) bade data type (here float) mai convert hota h fir operation perform hota hai.*/
    return 0;
}