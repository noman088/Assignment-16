// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int s;
    printf("Enter the size of Matrix : ");
    scanf("%d", &s);
    int a[s][s];
    printf("Enter Element in Matrix : ");
    for (int i = 0; i < s; i++)
        for (int j = 0; j < s; i++)
            scanf("%d", &a[i][j]);


    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j <= i; j++)
                if(j<=i)
                    printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}