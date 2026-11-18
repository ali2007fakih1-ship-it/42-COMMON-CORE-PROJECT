int ft_strcmp(const char *str ,const char *str1)
{
    int i;
    
    i = 0;
    while (str[i]  || str1[i])
    {
        if (str[i] != str1[i])
        {
            return (unsigned char)str[i] - (unsigned char)str1[i];
        }
        i++;
    }
    return 0;
}
