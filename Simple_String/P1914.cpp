#include <stdio.h>
int main()
{
    char in[51];
    int n, j;
    scanf("%d%s", &n, in); //读入
    for(j = 0; in[j] != '\0'; j++)
        putchar((in[j]-'a'+n)%26+'a');
}
