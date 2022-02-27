#include<stdio.h>
int main()
{
    char k;
    scanf("%c",&k);
    if(k=='A'||k=='E'||k=='I'||k=='O'||k=='U'||k=='a'||k=='e'||k=='i'||k=='o'||k=='u') printf("Vowel");
    else printf("Consonant");
    return 0;
}