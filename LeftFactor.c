#include<stdio.h>
#include<string.h>
int main(){
    char buf[10];
    printf("Enter your string.:\n");
    gets(buf);
    int i = 0;
    char *p = strtok (buf, "/");
    char *array[3];
    while (p != NULL)
    {
        array[i++] = p;
        p = strtok (NULL, "/");
    }
    for (i = 0; i < 3; ++i) 
        printf("%s\n", array[i]);
    return 0;
}