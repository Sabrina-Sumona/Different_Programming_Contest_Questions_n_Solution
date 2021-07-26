#include <stdio.h>
#include <string.h>
int main()
{
    char s[100000]={0};
    scanf("%s",s);
    int l,n,i;
    l=strlen(s);
    n=1;
    for(i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            n++;
    }
    printf("%d",n);

}