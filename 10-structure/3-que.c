//create a structure type 'person' with name , salary and age as its attributes. declare and initialize 2 variables for this . print the name of first person and age of the person.

#include<stdio.h>
#include<string.h>
int main(){
    struct person {
        char name[50];
        int salary;
        int age;
    }a,b,c;

   strcpy(a.name ,"sneha"); 
   a.salary=20000;
   a.age =19;
   printf("%s\n",a.name);

   strcpy(b.name ,"suhana"); 
   b.salary=25000;
   b.age = 17;
   printf("%d\n",b.age);

    return 0;
}