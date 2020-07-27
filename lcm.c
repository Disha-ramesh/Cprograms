#include<stdio.h>

int lcmtime(int, int); 
int main()
{
    int a, b, lcm;
    printf("Enter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    lcm = lcmtime(a,b);   
    printf("LCM of %d and %d is:\n%d", a, b, lcm);
    
    return 0;
}
int lcmtime(int a, int b)
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcmtime(a,b);
        return temp;
    }
}

