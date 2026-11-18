#include "get_next_line.h"

char *get_next_line(int fd)
{

    static char *stash ;
    char fl [1024];
    char *tmp;
    char *temp;
    char *str;
    int i = 0;
    int  j;
    int len;
    int z = 0;
    int m = 0;
    j = 0;  

    while (ft_strchr(stash, '\n') == NULL)
    {
        len = read(fd,fl,1024);
        if (len < 0)
        {
            return NULL;
        }
        if (len == 0)
        {
            break;
        }
        
        fl[len] = '\0';
        tmp = ft_strjoin(stash, fl);
        free(stash);
        stash = tmp;
    }

    if (stash == NULL || stash[0] == '\0')
    {
        free(stash);
        stash = NULL;
        return NULL;
    }
    while(stash[i] != '\n' && stash[i]!='\0')
    {
        i++;
    }
    if (stash[i] == '\n')
    i++;
    str = malloc (sizeof(char) * (i + 1));
    if (str == NULL)
    {
        return NULL;
    }
    while (j < i )
    {
        str[z] = stash[j];
        j++;
        z++;
    }
    str[z] = '\0';
    z = 0;
    m = i;
    while (stash[m] != '\0') 
    {
        m++;
        z++;
    }
    temp = stash;
    stash = malloc(sizeof(char) * (z+1));
    if (stash == NULL)
    {
        free (temp);
        free (str);
        return NULL;
    }
   m = i;
    z = 0;
    while (temp[m] != '\0')
    {
        stash[z] = temp[m];
        z++;
        m++;
    }
    stash[z] = '\0';
    free(temp);
    
    if (stash[0] == '\0')
    {
        free(stash);
        stash = NULL;
    }

    return str;
}