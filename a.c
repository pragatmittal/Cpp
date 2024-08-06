#include<stdio.h>
int main(){
    int r,c;
    printf("enter the no. of row");
    scanf("%d",&r);
    printf("enter the no of the col");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[j][i]=a[i][j];
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}