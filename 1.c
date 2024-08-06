#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c;
    scanf("%d", &c);
    int a[n][c];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]); // Added space after each element
        }
        printf("\n");
    }
    for (int j = 0; j < c; j++) {
        if (j % 2 == 0) {
            for (int i = n - 1; i >= 0; i--) {
                printf("%d ", a[i][j]);
            }
        } else {
            for (int i = 0; i < ; i++) { 
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
