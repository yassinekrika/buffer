#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void foo (char *bar){
    char c[12];
    char str;
    // strcpy(c, bar);
    
    // printf("%ld\n", sizeof(c));
    // printf("%ld\n", strlen(bar));
    if (strlen(bar) > sizeof(c)){
        printf("Overflow\n");
        scanf("%d", &str);
    }

    int i;
    for (i = 0; i < sizeof(c); i++){
        c[i] = c[i] + bar[i];
    }
    printf("Length of Str is %ld ", strlen(c));
    printf("%s\n", c);
}


int main (void){
    char str;
    int ch;

    scanf("%s", str);
    foo(str);
    return 0;
}
