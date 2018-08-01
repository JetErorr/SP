%{
int l=0, w=0, ch=0;
%}
%%
\n {
l++;
w++;
}
[\t ''] w++;
[a-zA-Z] ch++;
%%
int main(void){
yyin=fopen("a.txt","r");
yylex();
printf("Name:\tKeval Rathod \nEnrollment: 160570116022 \n\n");
printf("lines=%d words=%d characters=%d \n",l, w, ch);
return 0;
}
int yywrap()
{
return 1;
}

