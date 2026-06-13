#include<stdio.h>
void good_morning();
void good_afternoon();              ///PROTOTYPE
void good_evening();


void good_morning(){
    printf("good morning\n");               //FUNCTION DEFINITION
}

void good_afternoon(){
    printf("good afternoon\n");
}
void good_evening(){
    printf("good evening\n");
}

int main(){
    good_morning();                 // FUNCTION CALL
    good_afternoon();
    good_evening();
return 0;
}
