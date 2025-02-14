#include<stdio.h>
#include<string.h>

int main(){
    char s1[101];
    scanf("%s",s1);

int count1=0,count2=0,count3=0,i;

for(i=0;s1[i]!='\0';i++)
    {
    if(s1[i]=='1')
        count1++;
    else if(s1[i]=='2')
        count2++;
    else if(s1[i]=='3')
        count3++;

}

  for(i=0;i<count1;i++){
    printf("1");

    if(i<count1-1 || count2>0 || count3>0)
        {
        printf("+");

    }
}

  for(i=0;i<count2;i++){

 printf("2");

   if(i<count2-1 || count3>0){

    printf("+");
}
}

  for(i=0;i<count3;i++){
    printf("3");
    if(i<count3-1){
        printf("+");
    }
 }

 return 0;

}
