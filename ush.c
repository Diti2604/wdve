//iferati22
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,k,r = 0;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        r+=rand()%k;

        printf("%d ", r);
    }
    return 0;
}