#include <stdio.h>

int main()
{
    int x, y;
    printf("enter the coordinates:");
    scanf("%d,%d", &x, &y);
    if(x==0 && y==0)
    {
        printf("lies on origin");
    }
    else if(x==0)
    {
        printf("lies on y axis");
    }
    else if(y==0)
    {
        printf("lies at x axis");
    }
    else
    {
        printf("the point does not lie betwen x or y axis or at origin");
    }

    return 0;
}