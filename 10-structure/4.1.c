#include<stdio.h>
#include<string.h>
int main(){
   typedef struct book{
        char name[50];
        float price;
        int noOfPages;
    } Book; 
    Book d;   // we didnt use struct to create a new object under book with the help of typedef
    Book a;
    Book b;
    Book c;
    a.noOfPages = 100;
    a.price = 411.5;
    printf("%d\n", a.noOfPages);
    printf("%f\n", a.price);
   char ch[13];
   strcpy(ch,"secret seven");               
   printf("%s\n",ch);

   b.noOfPages=200;
   b.price =100.8;
   strcpy(b.name,"famous five");
    printf("%d\n", b.noOfPages);
    printf("%f\n", b.price);
    printf("%s\n", b.name);

   c.noOfPages=290;
   c.price =145.99;
   strcpy(c.name,"animal farm");
    printf("%d\n", c.noOfPages);
    printf("%f\n", c.price);
    printf("%s\n", c.name);

       return 0;
}