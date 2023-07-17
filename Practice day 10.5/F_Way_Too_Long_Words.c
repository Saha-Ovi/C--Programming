#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        char s[101];
        scanf("%s",&s);
        int str=strlen(s);

          if (strlen(s)<=10)
          {
            printf("%s\n",s);
          }
          else if(strlen(s)>10)
          {
            printf("%c%d%c\n",s[0],str-2,s[str-1]);
          }

    }
  
    

    
    return 0;
}

//s[0] indicate value of string s index 0
//str-2- int number of strlen before 2 .2 means one character last one is null
// s[str-1]idicate the last character of the string


