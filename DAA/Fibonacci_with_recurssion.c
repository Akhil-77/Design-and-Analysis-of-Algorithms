# include <stdio.h>

int main()
{
    int num;
    int m = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        printf("%d ", fibonacci(m));
        m++;
    }
    return 0;
}

int fibonacci(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return(fibonacci(n-1) + fibonacci(n-2));
}
