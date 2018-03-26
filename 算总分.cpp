#include<conio.h>
#include<stdio.h>
#include<string.h>
int max(int x,int y)
{
    int max;
    max=(x>y)?x:y;
    return max;
}
void huanshu(int x[],int a,int b)
{
    int exchange;
    exchange=x[a];
    x[a]=x[b];
    x[b]=exchange;
}
void huanwei(char y[][8],int a,int b)
{
     int i,c,d;
     c=strlen(y[a]);
     d=strlen(y[b]);
     char exchange;
     for(i=0;i<max(c,d);i++)
     {
                            exchange=y[a][i];
                            y[a][i]=y[b][i];
                            y[b][i]=exchange;
     }
}
main()
{
      FILE *p1,*p2;
      p1=fopen("data.in","r");
      p2=fopen("data.out","w");
      int n,m,i,j;
      fscanf(p1,"%d %d",&n,&m);
      int a[n+2],c[n+2][m+2],sum[n+2],k;
      char b[n+2][8];
      for(i=1;i<=n;i++)    a[i]=i;
      for(i=1;i<=n;i++)    sum[i]=0;
      for(i=1;i<=n;i++)
      {
                       fscanf(p1,"%s",&b[i]);
                       for(j=1;j<=m;j++)
                       {
                                        fscanf(p1,"%d",&c[i][j]);
                                        sum[i]+=c[i][j];
                       }
      }
      k=0;
      for(i=1;i<=n;i++)
      {
                   if(sum[i]>sum[k])
                   {
                                    k=i;
                                    huanshu(a,k,i);
                                    huanwei(b,k,i);
                   }   
      }
      for(i=1;i<=n;i++)
      {
                       fprintf(p2,"%d %s %d\n",a[i],b[i],sum[i]);
      }
      fprintf(p2,"\n最高分为:\n%d %s %d",a[k],b[k],sum[k]);
      fclose(p1);
      fclose(p2);
}
