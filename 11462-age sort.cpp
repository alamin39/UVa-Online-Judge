#include<stdio.h>

int main()
{
     int a[101],i,n,j,b, total;
     while(scanf("%d",&n)==1 && n!=0)
     {
         for(i=0;i<101;i++)
         {
             a[i]=0;
         }

         for(i=0;i<n;i++)
         {
             scanf("%d",&b);
             a[b]++;
         }
            total=0;
         for(i=1; i<n; i++)
             {
                 if(a[i]!=0)
                     {
                         for(j=0; j<a[i]; j++)
                             {
                                total++;
                                if(total!=n)
                                    printf("%d ", i);
                                else
                                    printf("%d\n");
                             }
                    }
             }
     }

     return 0;
}
