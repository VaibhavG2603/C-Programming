#include <stdio.h>
int main()
{
    int m, s;
    printf("Enter (1: pass or 0:fail)for subject of maths and science:\n");
    if (scanf("%d %d", &m, &s) != 2 || (m != 0 && m != 1) ||( s != 0 && s != 1))
    {
        printf("Invalid input...!");
        return 1;
    }
    if (m==1&&s==1)
    {
        printf("You Earn 1000rs..!\t\nand you passed in maths and science\n");
    }
    else if (m==1)
    {
      printf("You Earn 500rs..!and you passed in maths\n");
    }
     else if (s==1)
    {
      printf("You Earn 500rs..!and you passed in science\n");
    }
    else
    {
        printf("No Subject is passed....\n");
    }
    return 0;
}