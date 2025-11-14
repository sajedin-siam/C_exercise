// Capital letter
/*#include <stdio.h>
int main()
{
    int n;
    printf("enter N:");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c", row + 64);
        }
        printf("\n");
    }
    return 0;
}*/
// small letter
#include <stdio.h>
int main()
{
    int n;
    printf("enter N:");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c", row + 96);
        }
        printf("\n");
    }
    return 0;
}