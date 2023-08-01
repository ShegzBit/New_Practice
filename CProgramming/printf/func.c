#include "main.h"

char *_intstr(int num)
{
    //declare str (size = 11)
    if (num == 0) return("0");
    char *str = malloc(12 * sizeof(char));
    if(str == NULL) return(NULL);
    int i = 0, store;
    
    //get absolute if num is negative
    store = num;
    if (num == INT_MIN)
    {
        str[i++] = '8';
        num /= 10;
    }
    if(num < 0)
    {
        num = -num;
    }
    //store each digit in reverse in str by using % 10
    while (num > 0)
    {
        str[i++] = num % 10 + '0';
        num /= 10;
    }
    
    //if number is negative append a '-'
    if(store < 0)
    {
        str[i++] = '-';
    }
    //reverse string and null terminate;
    str[i++] = '\0';
    str = revstr(str);
    return(str);
}

int _printf(const char *fmt, ...)
{
    int i = 0, storeI, len = strlen(fmt), ret = 0;
    unsigned int storeU;
    char storeC, *storeS;
    va_list ap;
    va_start(ap, fmt);
    while (i < len)
    {
        if (fmt[i] == '%')
        {
            switch (fmt[i + 1])
            {
                //check for case d
                case 'd':
                    storeI = va_arg(ap, int);
                    ret += _putint(storeI);
                    i += 2;
                    break;
                //check for case c
                case 'c':
                    storeC = va_arg(ap, int);
                    _putchar(storeC);
                    i += 2;
                    ret++;
                    break;
                //check for case s
                case 's':
                    storeS = va_arg(ap, char *);
                    ret += _puts(storeS);
                    i += 2;
                    break;
                //check for case %
                case '%':
                    _putchar('%');
                    i += 2;
                    ret++;
                    break;
                case 'u':
                    storeU = va_arg(ap, unsigned int);
                    ret += _putUint(storeU);
                    i += 2;
                    break;
                case 'x':
                    storeU = va_arg(ap, unsigned int);
                    ret += _put_x(storeU);
                    i += 2;
                    break;
                case 'X':
                    storeU = va_arg(ap, unsigned int);
                    ret += _putX(storeU);
                    i += 2;
                    break;
                default:
                    i++;
                    break;
            }
        }
        else
        {
            _putchar(fmt[i]);
            i++;
            ret++;
        }
        
    }
    return(ret);
}

char *revstr(char *str)
{
    char temp;
    int len = strlen(str) - 1, i = 0;
    while(len > i)
    {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        i++;
        len--;
    }
    return(str);
}



char *uintstr(unsigned int num)
{
    //chaeck if num is zero or signed
    if (num == 0) return("0");

    //declare str size = 12
    char *str;

    str = malloc(12 * sizeof(char));
    //check for allocation success
    if(str == NULL) return(NULL);
    int i = 0, store;
        
    //store each digit in reverse in str by using % 10
    while (num > 0)
    {
        str[i++] = num % 10 + '0';
        num /= 10;
    }
    //reverse string and null terminate;
    str = revstr(str);
    str[i++] = '\0';

    return(str);
}

//upper = 1 for hexa in uppercase and upper = 0 hexa in lowercase
char * dec_X(unsigned int num, int upper)
{
    if (num == 0) return("0");
    int i = 0;
    char *hex = malloc(15 * sizeof(char)), *str = malloc(9 * sizeof(char));
    if(upper == 1)
    {
        hex =  "0123456789ABCDEF";
    }
    else if (upper == 0)
    {
        hex = "0123456789abcdef";
    }
    while (num > 0)
    {
        str[i] = hex[num % 16];
        num /= 16;
        i++;
    }
    str[i] = '\0';
    str = revstr(str);
    return(str);
}

char *dec_Oct(unsigned int num)
{
    
}

int main()
{
    int i = _printf("%c %s ope%%%j\n", 'a', "string");
    printf("%d\n", i);
    int j = printf("%c %s ope%%%%\n", 'a', "string");
    printf("%d\n", j);
   
    return (0);
}