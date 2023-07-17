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


// 0(zero) value gulo chara character wise dekhte chaile evabe if condition use kore kora jai

     for (int i =0;i<26;i++)
    {
        if(cnt[i]!=0)
        {
             printf("%c - %d\n",i+97,cnt[i]);   // i+97 means converting int value into character value

        }
       
    }  
       return 0;
}



// 0 value gulo shoho jodi dekhte hoi tahole evhabe likhbo
// // for (int i =0;i<26;i++)
//     {
//         printf("%c - %d\n",i+97,cnt[i]);   // i+97 means converting int value into character value
//     }
   


