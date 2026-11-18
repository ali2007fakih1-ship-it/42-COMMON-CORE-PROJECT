char *ft_strstr(char *src,char *tofind)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if(tofind[j] == '\0')
    {
        return src;
    }
    while(src[i] != '\0')
    {
        j = 0;
            while (src[i+j] == tofind[j])
            {
                j++;
            }
            if (tofind[j] == '\0')
            {
                return (&src[i]);
            }
            i++;
    }
    return 0;
}