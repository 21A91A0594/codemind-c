#include<stdio.h>
int main()
{
    char C;
    scanf("%c",&C);
    if((C=='A'||C=='a')||
    (C=='E'||C=='e')||(C=='I'||C=='i')||
    (C=='U'||C=='u'))
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}