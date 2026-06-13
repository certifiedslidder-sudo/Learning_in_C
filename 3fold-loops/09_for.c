#include<stdio.h>
/*
The syntax of a typical ‘for’ loop looks like this:
 for (initialize; test; increment or decrement) {
//code;
}
*/


/*
•initialize → Setting a loop counter to an initial value.
•Test → Checking a condition.
•Increment → Updating the loop counter
*/

int main(){
    int n =6;
    for(int i=0;  i<n; i++  ){
        printf("the value of i is %d\n" ,i);

    }
    return 0;
}