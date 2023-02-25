#include <stdio.h>
int main()
{
    int num[100], n, i, j;
    printf("how many numbers will you enter?: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%i. add number: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (j = 0; j < n / 2; j++)
    {
        if (num[j] != num[n - 1 - j])
        {
            break;
        }
    }
    if (i / 2 == j)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
    return 0;
}