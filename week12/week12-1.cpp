#include <stdio.h>
int isPrime (int n)
    {
    for(int i=2;i<n;i++)
        {
        if(n%i==0)return 0;
        }
    }
int main()
{
    int n;
    scanf("%d",&n);
    if(isPrime(n)) printf("n是質數");
    else printf("n不是質數");
}
