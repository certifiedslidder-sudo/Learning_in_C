// create a structure type "book" with name, prize and number of pages as its attributes.
#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int noOfPages;
    }a,b,c;    // variable declared

    a.noOfPages = 100;
    a.price = 411.5;
    //a.name = "secret seven";    // you'll have to print character by character or use loop with this initialization method.
    /*
    a.name[0]= 's';   // not an ideal method
    a.name[1]= 'e';
    a.name[2]= 'v';
    a.name[3]= 'e';
    a.name[4]= 'n';
    printf("%s\n",a.name);
    */
    printf("%d\n", a.noOfPages);
    printf("%f\n", a.price);
   // printf("%s\n", a.name);  for line 13
   /*
   char ch[13]= "secret seven";  // CORRECT WAY CAN PRINT  WHOLE AT ONCE
   printf("%s",ch); 
   char ch[13];

   NOTE --->>  ATER I DECLAED WITHOUT INITIALIZING ---> I HAVE TO ITERATE ITS EACH CHARACTER WITH LOOP OR INDIVIDUAL CHAR. , I CANT JUST PRINT WHOLE STRING AT ONCE , BUT I CAN USE                           STRCPY FUNCTION .*/
   char ch[13];
   strcpy(ch,"secret seven");                  /// v v imp
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