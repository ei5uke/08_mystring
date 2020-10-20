#include <stdio.h>
#include <stdlib.h>

#include "work08.h"

int mystrlen(char *s)
{
    int len = 0;
    while (*s != 0)
    {
        len++;
        s++;
    }
    return len;
}

char * mystrcpy(char *dest, char *source)
{
    int i = 0;
    while (*(source + i))
    {
        *(dest + i) = *(source + i);
        i++;
    }
    return dest;
}

char *mystrncat(char *dest, char *source, int n)
{
    int i = 0;
    int length = mystrlen(dest); //note to self, this has to be constant so declare beforehand
    while (i < n && *(source + i))
    {
        *(dest + length + i) = *(source + i);
        i++;
    }
    *(source + length + i) = 0;
    return dest;
}

int mystrcmp( char *s1, char *s2 )
{
    while (*s1|| *s2)
    {
        if (*s1 > *s2) return 1;
        if (*s1 < *s2) return -1;
        s1++;
        s2++;
    }
    return 0;
}

char *mystrchr( char *s, char c )
{
    int i;
    for (i = 0; i <= mystrlen(s); i++)
        if (*(s + i) == c)  return s + i;
    return NULL;
}
