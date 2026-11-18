int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;
    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <=13))
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = sign * (-1);
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
