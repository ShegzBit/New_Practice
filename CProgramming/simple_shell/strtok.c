#include <stdio.h>
#include <stdlib.h>

/*str   is Nice  now */
void new_str_gen(char *src, char *dest)
{
    int i, is_char = 0, count = 0, j;
    char *new_str;
    /*Loop through string*/
    for (i = 0, j = 0; src[i] != '\0'; i++)
    {
        /*increment if char is not space and set for next iteration*/
        if (src[i] != ' ')
        {
            dest[j] = src[i];
            is_char = 1;
            j++;
        }
        /*Now check if previous letter was not space and increment is so*/
        /*then set check to zero for net itr*/
        else
        {
            if (is_char && src[i + 1])
            {
                dest[j] = src[i];
                j++;
            }

            is_char = 0;
                
        }
    }
    printf("%s is dest\n", dest);
}

int count_str(char *str)
{
    int i, is_char = 0, count = 0;
    char *new_str;
    /*Loop through string*/
    for (i = 0; str[i] != '\0'; i++)
    {
        /*increment if char is not space and set for next iteration*/
        if (str[i] != ' ')
        {
            count++;
            is_char = 1;
        }
        /*Now check if previous letter was not space and increment is so*/
        /*then set check to zero for net itr*/
        else
        {
            if (is_char && str[i + 1])
                count++;
            is_char = 0;
                
        }
    }
    return (count);
}

void strtok_help(char *new_str, int count, char **str_arr)
{
    int i, j;

    str_arr = malloc(sizeof(*str_arr) * (count + 1));
    str_arr[count] = NULL;
    for (i = 0; i < count; i++)
    {
        putchar('a');
        j = 0;
        for (; *new_str != ' ' && *new_str != '\0'; new_str++, j++)
        {
            str_arr[i][j] = *new_str;
        }
        new_str++;
        printf("word %d is %s\n", i, str_arr[i]);
    }
}


/*str   is Nice  now */
char **_strtok(char *str)
{
    int count = count_str(str), i, j, track;
    char *new_str, **str_arr;

    new_str = malloc(sizeof(char) * count);
    new_str_gen(str, new_str);

    count = 0;
    /*count words in new_str*/
    for (i = 0; new_str[i] != '\0'; i++)
    {
        if (new_str[i] == ' ')
        {
            count++;
        }
    }
    count++;

    printf("%d is count\n", count);
    printf("str_arr[%d] is %s\n", count, str_arr[count]);
    strtok_help(new_str, count, str_arr);
    /*This is awesome a s*/
    
}

int main()
{
    char *str = "rjksb sdlk";
    
    char **arr = _strtok(str);
    while (*arr != NULL)
    {
        printf("str_arr -> %s\n", *arr);
        arr++;
    }
}