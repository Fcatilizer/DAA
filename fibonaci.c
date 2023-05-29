#include <stdio.h>
void fibonaci(int n)
{
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 0; i < n - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonaci(n);
    return 0;
}