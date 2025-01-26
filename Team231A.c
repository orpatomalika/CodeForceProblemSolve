
#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);
int i,count=0;

for(i=0;i<n;i++){
    int Petya,Vasya,Tonya;

    scanf("%d%d%d",&Petya,&Vasya,&Tonya);

    if(Petya+Vasya+Tonya >=2){
    count++;
    }
}
printf("%d\n",count);
return 0;
}
