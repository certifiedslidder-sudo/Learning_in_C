#include<stdio.h>
#include<string.h>

int main(){
    char arr[5] ={'a','f','g','t','d'};
    printf("%c" , arr[2]);

                  /*strlen      gives lenth of string witout considering null character*/
    // char*str = "sneha rawat";
    // int x = strlen(str);      
    // printf("%d",x);
    

             /*strcpy --> copies content of srring s2 to string s1*/

//        char s1[12] = "raghav garg";
//        char s2[12];
//     strcpy(s2,s1);             /* //(destination,source)*/
//        s2[0] = 'k';
//    printf("%s\n",s1);                 //will print raghav garg
//     printf("%s",s2);                             //will print kaghav garg

            // therefore a deep copy
       
                    /*STRCAT   --> cocat s1 string with s2 and stores the result in s1*/

    //  char s1[11] = "raghav ";    YOU'LL  have to give more size when you have to cancat.

    //    char s2[5] = "garg";
    // strcat(s1,s2);
    // printf("%s",s1);       MIGHT GIVEC ERROR IF WE DONT GIVE SIZE
    

//        char*s1[11] = "raghav ";        //read only
//        char *s2[5] = "garg";   // read only
//        strcat(s1,s2);                            //as pointer 
//        printf("%s",s2);
    

    return 0;
}