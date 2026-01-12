# include<stdio.h>

int main()
{
    char c;
    printf("enter the character:\n");
    scanf("%c",&c);
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
    {
      printf("The given character is vowel..!\n");
    }
    else{
        printf("The given character is consonant..!\n");
    }
    return 0;
}