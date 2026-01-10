//Taking input either ASCII or charater from one input
# include<stdio.h>
# include<ctype.h>
int main()
{
  char input[10];
  int ascii;
  printf("Enter the Values liske ASCII or Character:\n");
  scanf("%s",input);
  if(isdigit(input[0]))
  {
    ascii = 0;
    for(int i=0;input[i]!='\0';i++)
    {
        ascii=ascii*10+(input[i]-'0');
    }
        printf("ASCII %d represents character '%c'\n", ascii, (char)ascii);
  }
  else
    {
         printf("Character '%c' has ASCII value %d\n", input[0], (int)input[0]);
    }

  return 0;

}