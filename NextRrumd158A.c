#include<stdio.h>
int main()
{
    int n,i,a[100];
    int count=0;
    scanf("%d",&n);
    int K;
    scanf("%d",&K);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

        int k=a[K-1];
        for(i=0;i<n;i++){


        if(a[i]>=k&&a[i]>0){
            count++;
        }

    }
        printf("%d\n",count);
        return 0;
    }

