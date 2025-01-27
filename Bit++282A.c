
#include<stdio.h>
int main()
{

    int n,i;
    int X=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            char s[4];
    scanf("%s",&s);
    if(strstr(s,"++")){

    X++;
    }
    else if(strstr(s,"--")){
        X--;
    }

    }
    printf("%d\n",X);
    return 0;

}
