#include<stdio.h>
void england()
{
    printf("you are in england\n");
    return;// goes back to australia -->india --> MAIN
}
void australia()
{
    printf("you are in australia\n");
    england();  // calling england
    return; 
}
void india()
{
    printf("you are in india\n");
    australia(); //calling australia
    return;
}
'''if i call a function x by function y then x should be above y function.'''
int main()
{
    india(); //calling india
    return 0;
}