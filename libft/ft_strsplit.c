#include <stdio.h>
#include <stdlib.h>


char ** ft_strsplit(char const *s, char c)
{
    char **ptr; 
    int i;
    int l;
    int j;
    int m;
    int q;
    int start;
    j = 0;
    i = 0;
    m = 0;
    if (!s)
    {
        return NULL;
    }
    while (s[i] != '\0')
    {
        
        if (s[i] != c && (i == 0 || s[i - 1] == c))
        {
            j++;
        }
        i++;
    }
    ptr = malloc(sizeof(char*) * (j + 1));
    if (ptr == NULL)
    {
        return NULL;
    }
    i = 0;
    start = 0;
    while (s[i] != '\0')
    {
        l = 0;
        q = 0;
        if (s[i] != c && s[i] != '\0')
        {
            while(s[i] != c && s[i] != '\0')
            {
                i++;
                q++;
            }
            start = i - q;
            ptr[m] = malloc(sizeof(char) * q+1);
            if(ptr[m] == NULL)
            {
                while(m >= 0)
                {
                    free (ptr[m]);
                    m --;
                }
                free (ptr);
                return NULL;
            }
            while(l < q)
            {
                ptr[m][l] =s[start + l];
                l++;
            }
            ptr[m][l] = '\0';
            m++;
        }
        else{i++;}
    }
    ptr[m] = NULL;
    return ptr;
}
int	main(void)
{
    char	**result;
    int		i;

    // حالة اختبار 1: نص عادي بفواصل محددة
    printf("Test 1:\n");
    result = ft_strsplit(" ali - fakih - 123 ", ' ');
    if (result)
    {
        i = 0;
        while (result[i] != NULL)
        {
            printf("%s", result[i]);
            free(result[i]); // تحرير الذاكرة لكل كلمة
            i++;
        }
        free(result); // تحرير مصفوفة المؤشرات
    }
}