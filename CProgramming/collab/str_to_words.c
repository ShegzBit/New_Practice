#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int row_num(char *str)
{
    int i, count = 0;
    int alpha = 0;

    for (i = 0; str[i]; i++)
    {
            if (str[i] != ' ')
            {
                if (alpha == 0)
                    count++;
                    alpha = 1;
            }
            else
            {
                alpha = 0;
            }
    }
 
    return (count);
}

int normal_len(char *str)
{
         int count = 0;
         int i;
         int blank = 0;

/* test = "we     are"*/

         for (i = 0; str[i]; i++)
         {
                 if (str[i] == ' ')
                 {
                         if (blank == 1)
                         {
                                 count++;
                         }
                         blank = 0;
                 }
                 else
                 {
                         count++;
                         blank = 1;
                 }
         }
        printf("the size is %d\n", count);
         return (count);
}

char *normalise(char *str)
{
         char *s;
         int i, j = 0;
         int blank = 0;
         int len;

         len = normal_len(str);
         s = malloc(sizeof(char) * len + 1);
         if (s == NULL)
                 return (NULL);

/* test = "      we  are"*/
         for (i = 0; str[i]; i++)
         {
                 if (str[i] == ' ')
                 {
                        if (blank == 1)
                        {
                            s[j++] = str[i];
                        }
                        blank = 0;
                 }
                 else
                 {
                         s[j++] = str[i];
                         blank = 1;
                 }
         }
         s[j] = '\0';

         return (s);
}
//         0123456789!%
// test = "this is good"
char **strtoarr(char *str)
{
    int size = row_num(str), i, j = 0, k = 0, temp;
    char **arr = malloc(size * sizeof(char *));
    //arr[0] 
    //loop through str
    //
    for (i = 0; i < size; i++);
    {
        

    }

}

/**
 * while i < lenght of test:
    if str[i] == ' ' and not space:
        str[i] = ''
        i+=1
        continue
    if str[i] != ' ':
        space = 1
        i+=1
        continue
    else:
        space = 0
        i+=1

*/
/*int _normal_len(char *str)
{
    int i = 0, space = 0, j = 0;
    while (str[i])
    {
        if (str[i] == ' ' && !space)
        {

        }
    }
}*/






/**
 * word_count - count the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
        int count = 0;
        int in_word = 0;

        while (*str != '\0')
        {
                if (*str != ' ' && !in_word)
                {
                        count++;
                        in_word = 1;
                }
                else if (*str == ' ')
                {
                        in_word = 0;
                }
                str++;
        }

        return (count);
}

/**
 * strtow - split a string into an array of words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str)
{
        int num_words, i, j, k;
        char **words;

        if (str == NULL || *str == '\0')
                return (NULL);

        num_words = word_count(str);
        words = malloc((num_words + 1) * sizeof(char *));
        if (words == NULL)
                return (NULL);

        i = 0;
        while (*str != '\0' && i < num_words)
        {
                while (*str == ' ')
                        str++;

                j = 0;
                while (str[j] != ' ' && str[j] != '\0')
                        j++;

                words[i] = malloc((j + 1) * sizeof(char));
                if (words[i] == NULL)
                {
                        for (k = 0; k < i; k++)
                                free(words[k]);
                        free(words);
                        return (NULL);
                }

                for (k = 0; k < j; k++)
                        words[i][k] = str[k];
                words[i][k] = '\0';

                str += j;
                i++;
        }
        words[i] = NULL;
        return (words);
}