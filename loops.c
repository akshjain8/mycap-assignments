#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("0");
        for (int i = 0; i < 5; i++)
        {
            printf("1");
            break;
        }
        
    }
    return 0;
}