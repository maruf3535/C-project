#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", a);
    for(int i = 0; i < 10; i++)
    {
        if (a[i] != '\0')
        {
            length++;
        }
        else if(a[i] == '\0')
        {
            break;
        }
    }
    printf("%d", length);

    return 0;
}