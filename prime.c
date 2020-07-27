#include<stdio.h>
int isPrime(int, int);
int main()
{
    int num, prime;
    printf("Enter a positive number to check if Prime:\n");
    scanf("%d", &num);
    prime = isPrime(num, num/2);
    if(prime == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
int isPrime(int n, int i)
{
    if(i == 1)
        return 1;  
    else
    {
        if(n%i == 0)
            return 0;
        else
            isPrime(n, i-1);   
    }
}

