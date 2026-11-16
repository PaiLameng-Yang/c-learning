#include <stdio.h>
char *my_strcpy(char *dst, const char *src){
    char *begin = dst;
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return begin;
}
int main(void){
    char b1[16], b2[4], b3[32];
    printf("[%s]\n", my_strcpy(b1, "abc"));
    printf("[%s]\n", my_strcpy(b2, ""));
    printf("[%s]\n", my_strcpy(b3, "hello world"));
    return 0;
}
