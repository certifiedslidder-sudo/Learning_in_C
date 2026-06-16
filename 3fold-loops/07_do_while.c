/*
The syntax of do-while loop looks like this:
 do {
  //code; 
  } while (condition);
*/

/*do-while loop = while loop which executes at least once.
‘do-while’ executes the code & then checks the condition.*/

#include<stdio.h>

int main(){
    int i=0;
    do
    {
    printf("the value of i is %d\n",i);
    i++;
    } while (i<4);
    
    return 0;
}
// one statement will always be printed, after that the condition will check and loop prints accordingly.