 #include<stdio.h>
 #include<string.h>
 int main(){
    char str[] = "sneha rawat";
//    str = "suhana rawat";     // error
    str[0] = 'p';
    printf("%s",str);
    return 0;
 }

 /*in normal initialization       -->         we can modify individual character but not entire string.
 
 whereas
 
 in pointer initialization        -->        we can modify entire string but not individual character*/