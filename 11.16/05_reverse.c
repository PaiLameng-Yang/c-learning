#include <stdio.h>
void reverse(char *s){
    char *left = s, *right = s;
    while (*right) right++;
    right--;
    while (left < right) {
        char t = *left;
        *left = *right;
        *right = t;
        left++;
        right--;
    }
}
int main(void){
    char a[] = "hello";
    char b[] = "";
    char c[] = "a";
    reverse(a); printf("[%s]\n", a);
    reverse(b); printf("[%s]\n", b);
    reverse(c); printf("[%s]\n", c);
    return 0;
}
