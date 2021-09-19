#include<stdio.h>
#include<string.h>
int main()
{
    int i,  length,last_digit,t;
    char n [101];
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%s", &n);
        length=strlen(n);
        last_digit=n[length-1]-48;
        if(last_digit %2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }
    return 0;
}
