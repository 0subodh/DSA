#include <stdio.h>
int main()
{
    int n1, n2, n, i, j, k, a[10] = {0}, b[10] = {0}, c[10] = {0};
    printf("Enter the degree of first polynomial: ");
    scanf("%d", &n1);
    printf("\nEnter the degree of second polynomial: ");
    scanf("%d", &n2);
    if (n1 > n2)
        n = n1;
    else
        n = n2;
    printf("Enter the coefficent of first polynomial\n");
    for (i = n1; i >= 0; i--)
    {
        printf("coefficient of x ^ %d:", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the coefficent of second polynomial\n");
    for (i = n2; i >= 0; i--)
    {
        printf("coefficient of x ^ %d: ", i);
        scanf("%d", &b[i]);
    }
    for (i = n; i >= 0; i--)
    {
        c[i] = a[i] + b[i];
    }

    printf("The sum of two polynomials: \n");

    for (i = n; i >= 0; i--)
    {
        printf("coefficient of x ^ %d : %d\n", i, c[i]);
    }
    return 0;
}