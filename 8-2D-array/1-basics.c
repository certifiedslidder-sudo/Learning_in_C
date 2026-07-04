// A 2D ARRAY IS ALSO CALLED AS MATRIX.  SYNTAX: datatype array_name[r][c];

#include<stdio.h>
//har row apne appme array hota h.
int main(){
    int r;
    printf("enter the no. of rows");
    scanf("%d",&r);
    int c;
    printf("enter the no. of columns");
    scanf("%d",&c);
    int arr[r][c] ;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
      
}
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
      printf("\n");
}
    return 0;
}

//while initializing a 2d array it is necessary to mention the second(column) dimension,whereas the first dimension (row) is optional.
// int arr[2][3];
//MEANING---->>> KI 2 rows banegi(0 and 1) jiske andar 3 size ki array hongindividually.

// int arr[][3];



/*incorrect ways - 
int arr[2][];
int arr[][];*/

