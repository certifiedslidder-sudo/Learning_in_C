#include<stdio.h>
#include<math.h>
int main(){
      int x1,x2,x3,y1,y2,y3;
    printf("enter the point:");
    scanf("%d", &x1);
    printf("enter the point:");
    scanf("%d", &x2);
    printf("enter the point:");
    scanf("%d", &x3);
    printf("enter the point:");
    scanf("%d", &y1);
    printf("enter the point:");
    scanf("%d", &y2);
    printf("enter the point:");
    scanf("%d", &y3);
    double m1;
    m1=(y2-y1)/(x2-x1);
    double m2;
    m2=(y3-y2)/(x3-x2);
    if(m1==m2)
    {
        printf("the points fall on one straight line");
    }
    else
    {
        printf("the points do not fall on one straight line");
    }
    return 0;
}