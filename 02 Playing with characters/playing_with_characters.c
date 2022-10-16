#include <stdio.h>
#include <string.h>

void main(){
    char ch;
    char s[20];
    char sen[100];

    //printf("Enter a character:\n");
    scanf("%c", &ch);
    //printf("Enter a string:\n");
    scanf("%s", s);
    //printf("Enter a sentence:\n");
    scanf(" %[^\n]%*c", sen); 

    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen);
}