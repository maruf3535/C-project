#include <stdio.h>
#include<string.h>

int main()
{
    // Find a key or word or character from an array
    char b[10] = {'m', 'a', 'r', 'u', 'f'};
    char search;
    printf("Enter a character for search: ");
    scanf("%c", &search);
    int i = 0;
    for (; i < 10; i++)
    {
        if (b[i] == search)
        {
            printf("Successfully find!");
            break;
        }
    }
    if (i == 10)
    {
        printf("Not found!!");
    }
   
    return 0;
}