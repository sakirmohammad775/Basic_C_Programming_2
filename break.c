#include <stdio.h>
int main()
{
    for (int i = 20; i <= 50; i++)
    {
        printf("checking  %d\n", i);

        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("I found my Number :%d\n", i);
            break;
            
        }
    }
        return 0;
}