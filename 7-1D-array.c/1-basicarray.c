#include<stdio.h>
int main(){
    int brr[5];
    for(int i=0;i<=4;i++){
        printf("enter element number %d\n",i+1);
        scanf("%d",&brr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",brr[i] );
    }
    
    // brr[0]= 1;
    // brr[1]= 3;
    // brr[2]= 4;
    // brr[3]= 10;
    // brr[4]= 2;
    //  printf("%d\n", brr[3]); //10

          // ANOTHER WAY
//    int arr[5] ={2,4,6,8,1};
//    arr[4]=100;  //{2,4,6,8,100}
//    arr[1]=1; //{2,1,6,8,100}
//    printf("%d\n", arr[1]);
    //printf("%d\n", arr[7]);      index  out of bound error

         // FLOAT ARRAY
//    float a[3]={1.2,3.4,5.7};
//    printf("%f\n",a[2]);

         //CHARACTER ARRAY
//    char b[5]={'q','e','y','o','n'};
//    printf("%c\n", b[4]);  //n
//    b[4] = '%';
//    printf("%c\n", b[4]);   // %
    return 0;
}