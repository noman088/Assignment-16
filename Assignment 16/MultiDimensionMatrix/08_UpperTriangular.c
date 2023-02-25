// 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of Matrix : ");
    scanf("%d", &size);
    int a[size][size];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size; i++)
        {
            if(j>=i)
                printf("%d", a[i][j]);
        }
    }
    return 0;
}
