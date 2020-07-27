#include <stdio.h>
int sumOfDigits(int n);
int main()
{
    int n, s;
    printf("Enter the numbers:\n");
    scanf("%d", &n);
    s = sumOfDigits(n);
    printf("the sum of digits of %d:\n%d", n,s);
    return 0;
}
int sumOfDigits(int n)
{
    if(n == 0)
        return 0;
    return ((n % 10) + sumOfDigits(n / 10));
}

