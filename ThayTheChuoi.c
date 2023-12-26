#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void strreplace(char *string, const char *find, const char *replaceWith){
    if(strstr(string, replaceWith) != NULL)
    {
        char *temporaryString = malloc(strlen(strstr(string, find) + strlen(find)) + 1);
        strcpy(temporaryString, strstr(string, find) + strlen(find));    
        *strstr(string, find) = '\0';   
        strcat(string, replaceWith);    
        strcat(string, temporaryString);    
    }
}
int main()
{
    char s[100], old[100], rpl[100];
    gets(s);
    gets(old);
    gets(rpl);
    strreplace(s, old, rpl);
    puts(s);
    return 0;
}