#include <stdio.h>
#include <string.h>
int main(void)
{
char s[] = "Hello world";
s[strlen(s)] = '!';// Try to append a ! to the string
printf("%s\n", s);
return 0;
}
