#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        a[0]+=5;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
        // printf("%d ", &a[i]); for checking  the address
    }

    return 0;
}
// 0 1 2 3 4