#include<stdio.h>
void england()
{
    printf("you are in england\n");
    return;
}

void india()
{
    printf("you are in india\n");
    australia(); 
    return;
}
int main()
{
    india();
    void australia();
    return 0;
}

void australia()
{
    printf("you are in australia\n");
    england();  
    return; 
}