#include<stdio.h>
/*given an array of marks of 10 students,if the mark of any student is less than 35 print its index number(roll number)*/
int main(){
    int marks[10] = {95,90,31,25,100,50,65,89,97,30};
    for(int i=0; i<10;i++){
        if(marks[i]<35){
            printf("%d",i)
        }
    }
    
    return 0;
}