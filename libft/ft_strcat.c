char *ft_strcat(char *s1 , const char *s2)
{
    int i;
    int j;
   
    i = 0;
    while(s1[i] != '\0')
    {
        i ++;
    }
    j = 0;
    while (s2[j]!= '\0' )
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return s1;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[]="hello";
    char s2[]="ali";
    char *s = ft_strcat(s2,s1);

    printf("%s\n",s);
    printf("%s",s);

}