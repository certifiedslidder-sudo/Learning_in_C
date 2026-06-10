#include<stdio.h>

/*
The ‘break’ statement is used to exit the loop irrespective of 
whether the condition is true or false.
Whenever a “break” is encountered inside the loop, the control
 is sent outside the loop
*/

int main(){
    for ( int i = 0; i<15 ; i++)
    { if(i==5){
        //break;   /// exit the loop now!
        continue;  //skip this  iteration now
    }
        printf("i is %d\n",i);
    }
    
    printf("for loop is done!");
    return 0;
}

/*
The ‘continue’ statement is used to immediately move to the next
 iteration of the loop.
 the control is taken to the next iteration thus skipping everything
  below “continue” inside the loop for that iteration.
*/

//notes
/*
1.Sometimes, the name of the variable might not indicate the behaviour of the program.
2.‘break’ statement completely exits the loop.
1.‘continue’ statement skips the particular iteration of the loop.
*/