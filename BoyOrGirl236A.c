#include<stdio.h>
#include<string.h>
int main()
{

char username[101];
scanf("%s",username);
int freq[26]={0},count=0,i;

for(i=0;username[i]!='\0';i++)
    {

        int index=username[i]-'a';

   if( freq[index]==0){
   freq[index]=1;
   count++;
}
    }

    if(count%2==0){
        printf("CHAT WITH HER!\n");
    }
    else
    {

        printf("IGNORE HIM!\n");
    }


   return 0;

}

