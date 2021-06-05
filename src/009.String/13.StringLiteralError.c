#include <stdio.h>
int main() {
    char str[] = "abcd";
    char *pstr = "bcdef";
    
    //str[1] = 'e';
    pstr[1] = 'd';
    
    //printf("%s\n", str);
    printf("%s\n", pstr);
    
    
    return 0;
}