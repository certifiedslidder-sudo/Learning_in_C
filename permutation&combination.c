#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);
    int r;
    printf("enter r:");
    scanf("%d",&r);
    int fnact = 1;
    int rfact = 1;
    int nrfact = 1;
for(int i =2; i<n;i++){
    nfact = rfact*i;

}
for(int i =2;i<=n;i++){
    nrfact = nrfact*i;
}
int ncr = nfact/ (rfact*nrfact);
printf("%d", ncr)
    return 0;
}