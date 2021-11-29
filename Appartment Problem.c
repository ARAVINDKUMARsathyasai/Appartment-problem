#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int a[N],j,i,max,flr[N],count[N],total=0,k=0,flg=0;
    int flor,mevn=0;
    for(i = 0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i = 0;i<N;i++)
    {
        if(a[i] > max)
        max = a[i];
    }
    for (i = 0;i<=max;i++)
    {
        total = 0;
        flg = 0;
        for(j = 0;j<N;j++)
        {
            if(i == a[j])
            {
                total++;
                flg = 1;
            }
        }
        if(flg == 1)
        {
            
            flr[k] = i;
            count[k] = total;
            k++;
        }
    }
    for(i =0;i<k;i++)
    {
       if(count[i] % 2 == 0)
       {
           if(count[i] > mevn)
           {
           mevn = count[i];
           flor = flr[i];
           }
       }
    }
    if(mevn != 0)
    printf("%d  %d",flor,mevn);
    else
    printf("No even number of floor available");   
}
