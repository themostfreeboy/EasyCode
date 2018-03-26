#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
           printf("贾翔龙编\n此程序可验证歌德巴赫猜想\n\n请输入项数n\nn=");
           long int n,i,j,tag=0,z=1,x=1,sum,q=0;
           float b,c;
           scanf("%d",&n);
           printf("\n");
           if(n%2==0) 
     {
           int a[n+1],v[n+1];
           for (i=2;i<=n;i++)
           {
                tag=0;
                b=sqrt(i);
                for (j=2;j<=b;j++)
                {
                     c=i%j;
                     if(c==0)
                     {
                             tag=1;
                             break;
                     }
                }
                if(tag==0)
                     {
                          a[z]=i;
                          v[x]=i;
                          z++;
                          x++;
                     }
            }
            for(z=1;a[z]<=n;z++)
            {
                             for(x=1;v[x]<=n;x++)
                             {
                                                 tag=0;
                                                 sum=a[z]+v[x];
                                                 if(sum==n)
                                                      tag=1;
                                                 if(tag==1)
                                                 {
                                                      printf("%d=%d+%d\n",n,a[z],v[x]);
                                                      q=1;
                                                 }
                             }
            }
            if(q!=1)
                 printf("无\n");
     }
            else printf("你输入的数据有误");
            getch();
            return 0;
}
