#include<stdio.h>
int main()
{
    char a[100];
    int c[5]={0},i;
    printf("Enter an equation:\n");
    gets(a);    
    for(i=0;i<100;i++)
    {
        if(a[i]=='a'){c[0]++;}
        if(a[i]=='e'){c[1]++;}
        if(a[i]=='i'){c[2]++;}
        if(a[i]=='o'){c[3]++;}
        if(a[i]=='u'){c[4]++;}
        else{c[5]++;}
    }
    // printf("The number of operators in the eqaution is: %d",count);
    printf("\nThe total number of vowels is: %d",c[0]+c[1]+c[2]+c[3]+c[4]+c[5]);
    printf("\nThe number of a in the string is: %d",c[0]);
    printf("\nThe number of e in the string is: %d",c[1]);
    printf("\nThe number of i in the string is: %d",c[2]);
    printf("\nThe number of o in the string is: %d",c[3]);
    printf("\nThe number of u in the string is: %d",c[4]);
    printf("\nThe total number of consonants in the string is: %d",c[5];
    return 0;
}