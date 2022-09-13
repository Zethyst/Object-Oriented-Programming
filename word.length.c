#include <stdio.h>
int main (void){
char word[100][100];
char str[100],temp[100];
int a,i,j,k,n=0,c,len;
printf("Enter a sentence and terminate with a full stop: ");
scanf("%[^\n]s",&str);
puts(str);
for (int i = 0; str[i]!='\0'; i++)
{ }
len=i;
printf("The length of string: %d",len);
for (int i = 0; str[i]!='\0'; i++)
{
    str[i]=tolower(str[i]);
}
for (int a = 0; a < len; a++)
{
    if(str[a]!=' ' && str[a]!='.')
    {
        temp[a]=str[a];
    }
    else
    {
        word[n++]=temp;
        temp=" ";
    }
}
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(strlen(word[i])<strlen(word[j]))
        {
            temp=word[i];
            word[i]=word[j];
            word[j]=temp;
        }
    }
    
}
char newstr[100];
printf("The words present in the sentence arranged in descending order: \n");
for (int i = 0; i < n; i++)
{
    newstr[i]=word[i][0];
    printf("%s",word[i]);
}
printf(".");





return 0;
}