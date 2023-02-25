// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{

    int size;
    printf("Enter the size of a Matrix");
    scanf("%d", &size);
    int ar[size][size];
    printf("Enter Element in matrix");
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &ar[i][j]);
    printf("Transpose of the matrix is : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", ar[j][i]);
        }
        printf("\n");
    }
    return 0;
}