#include "mystring.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *   Implement the following functions: 
 * 
 *   You are NOT allowed to use any standard string functions such as 
 *   strlen, strcpy or strcmp or any other string function.
 */

/*
 *  mystrlen() calculates the length of the string s, 
 *  not including the terminating character '\0'.
 *  Returns: length of s.
 */
int mystrlen (const char *s) 
{
	int len=0;
int i=0;
while(s[i]!='\0')
{
    len++;
 i++;
}
       return len;
	
}

/*
 *  mystrcpy()  copies the string pointed to by src (including the terminating 
 *  character '\0') to the array pointed to by dst.
 *  Returns: a  pointer to the destination string dst.
 */
char  *mystrcpy (char *dst, const char *src)
{
	int newlen=mystrlen(src);
        
        int i=0; 
while(i<=newlen)
{ dst[i]=src[i];
	i++;
}
return dst;
}
    
    int mystrcmp(const char *s1, const char *s2)
{
	int i = 0;
while (s1[i] != 0 || s2[i] != 0)
// this condition is safe for cstring, but not safe for general array, Why?
{
if (s1[i] < s2[i])
return -1;
else if (s1[i] > s2[i])
return 1;
++i;
}
return 0;
	
}


char *mystrdup(const char *s1)
{
	int newlen=mystrlen(s1);
        char *str1= malloc(sizeof(char)*(newlen+1));
int i=0;        
while(s1[i]!='\0')
{
str1[i]=s1[i];
i++;
}
int result=mystrcmp(str1,s1);
if(result ==0)
{
	return str1;
}
else
return NULL;
}


