#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    printf("Matrix Operations Tool\n");
    
    printf("\nEnter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    int A[r1][c1], B[r2][c2], result[50][50];

    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    int choice;

    printf("\nChoose Operation\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose of Matrix A\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
        if(r1 == r2 && c1 == c2) {
            for(i=0;i<r1;i++)
                for(j=0;j<c1;j++)
                    result[i][j] = A[i][j] + B[i][j];

            printf("\nResult Matrix:\n");
            for(i=0;i<r1;i++) {
                for(j=0;j<c1;j++)
                    printf("%d ", result[i][j]);
                printf("\n");
            }
        }
        else
            printf("Addition not possible\n");
        break;

        case 2:
        if(r1 == r2 && c1 == c2) {
            for(i=0;i<r1;i++)
                for(j=0;j<c1;j++)
                    result[i][j] = A[i][j] - B[i][j];

            printf("\nResult Matrix:\n");
            for(i=0;i<r1;i++) {
                for(j=0;j<c1;j++)
                    printf("%d ", result[i][j]);
                printf("\n");
            }
        }
        else
            printf("Subtraction not possible\n");
        break;

        case 3:
        if(c1 == r2) {
            for(i=0;i<r1;i++) {
                for(j=0;j<c2;j++) {
                    result[i][j] = 0;
                    for(k=0;k<c1;k++)
                        result[i][j] += A[i][k] * B[k][j];
                }
            }

            printf("\nResult Matrix:\n");
            for(i=0;i<r1;i++) {
                for(j=0;j<c2;j++)
                    printf("%d ", result[i][j]);
                printf("\n");
            }
        }
        else
            printf("Multiplication not possible\n");
        break;

        case 4:
        printf("\nTranspose of Matrix A:\n");
        for(i=0;i<c1;i++) {
            for(j=0;j<r1;j++)
                printf("%d ", A[j][i]);
            printf("\n");
        }
        break;

        default:
        printf("Invalid Choice\n");
    }

    return 0;
}