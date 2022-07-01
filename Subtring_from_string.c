#include <stdio.h>
#include <string.h>

int extract(int from, int to, char *str, char *subStr)
{
    int i = 0, j = 0;
    int length = strlen(str);

    if (from > length || from < 0)
    {
       return 1;
    }
    if (to > length)
    {
        return 1;
    }
    for (i = from, j = 0; i <= to; i++, j++)
    {
        subStr[j] = str[i];
    }
    return 0;
}

int main()
{
    char str[50];
    char subStr[50];
    

    printf("\nEnter a string: ");
    fgets(str, 100, stdin);
    int n,m;
    printf("\nEnter from which element the string should be extracted: ");
    scanf("%d",&n);
    printf("\nEnter till which element the string should be extracted: ");
    scanf("%d",&m);
    int from = n-1, to = m+1;


    if (extract(from, to, str, subStr) == 0)
        printf("\nThe Sub String is : %s\n\n", subStr);
    else
        printf("Invalid\nERROR!\n");

    return 0;
}