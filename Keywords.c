#include<stdio.h>
int main()
{
    char a[10];
    char b[32]={'auto',"break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    int count,i,j;
    printf("Enter a string:\n");
    gets(a);
    for(i=0;i<10;i++)
    {
        for(j=0;j<32;j++)
        {
            if(b[j]==a[i])
            {count++;}
        }
    }
    printf("The number of keywords in the string is: %d",count);
    return 0;
}