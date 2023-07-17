#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int cnt[26]={0};
    for (int i=0;i<strlen(s);i++) 
    {
        int value=s[i]-97; // converting character value into int index value
        cnt[value]++;   
    }
   for (int i =0;i<strlen(s);i++)
    {
        int value=s[i]-97;
        if (cnt[value]!=0)
        {
             printf("%c - %d\n",value+97,cnt[value]);   // value+97 means converting int value into character value
        }
        cnt[value]=0;

       
    } 
    return 0;
}
















// // 0(zero) value gulo chara string wise dekhte chaile evabe if condition use kore kora jai

//  //  for (int i =0;i<strlen(s);i++)
//     {
//         int value=s[i]-97;
//         printf("%c - %d\n",value+97,cnt[value]);   // i+97 means converting int value into character value
//     } 
   