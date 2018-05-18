#include<stdio.h>
#include<string.h>
int main()
{
    int n,v[11],max,i,j,k;
    char a[11][101];
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        max=0;
        for(j=1;j<=10;j++)
        {
            scanf("%s %d",a[j],&v[j]);
            if(max<v[j])
            {
                max = v[j];
            }
        }
        printf("Case #%d:\n",k);
       for(j=1;j<=10;j++)
       {
           if(max == v[j])
                printf("%s\n",a[j]);
       }
    }
    return 0;
}
