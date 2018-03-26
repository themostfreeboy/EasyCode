//函数汇总



//插入排序
void paixu(int n,,int a[])
{
          int i;
          for(i=1;i<n+1;i++)
          {
               a[0]=a[i];
               for(j=i-1;a[j]>a[0];j--)
               {
                    a[j+1]=a[j];
                    a[j]=a[0];                        
               }
          }
}





//选择排序 
void paixu(int n,int a[])
{
      int i,j,q;
      for(i=1;i<=n-1;i++)
      {
                         a[0]=a[n];
                         q=n;
                         for(j=n-1;j>=i;j--)
                         {
                                              if(a[j]<a[0])
                                              {
                                                             a[0]=a[j];
                                                             q=j;
                                              }
                         }
                                              a[q]=a[i];
                                              a[i]=a[0];
      }
}
 
 
 
 
 
 
 
 
//冒泡排序
void paixu(int n,int a[])
{
      int i,j;
      a[0]=0;
      for(i=0;i<=n-1;i++)
      {
                       for(j=n;j>=n-i-1;j--)
                       {
                                        
                                          if(a[j]>a[j+1])
                                          {         a[0]=a[j];
                                                    a[j]=a[j+1];
                                                    a[j+1]=a[0];
                                          }
                       }
      }
}






//快速排序
void quicksort(int a[],int low,int high)
{
     int temp,i,j;
     i=low;
     j=high;
     if(low>=high)      return;
     temp=a[j];
     while(i<j)
     {
               while(i<j&&a[i]<temp)     i++;
               if(i<j)      a[j]=a[i];
               while(i<j&&a[j]>temp)     j--;
               if(i<j)      a[i]=a[j];
     }
     a[j]=temp;
     quicksort(a,low,j-1);
     quicksort(a,j+1,high);
     return;
}






//回溯
void work(int x,int y)
{
     int i;
     if(x==n&&y==n)
     {
                   printf("yes");
                   tag=1;
                   getch();
     }
     for(i=1;i<=4;i++)
     {
                      if(x+ai[i]>=1&&x+ai[i]<=n&&y+aj[i]>=1&&y+aj[i]<=n&&map[x+ai[i]][y+aj[i]]==0)
                      {
                                    map[x][y]=1;
                                    work(x+ai[i],y+aj[i]);
                                    map[x][y]=0;
                      }
     }
}







//生成随机数 
 int suiji(int x)
{
    time_t t;//#include<time.h>
    srand((unsigned) time(&t));
    x=rand()%10;//#include<stdlib.h>
    return x;
}



//系统等待
system("pause");//#include<stdlib.h>




//清屏函数 
system("CLS");//#include<stdlib.h>



//定时自动关机及取消
syetem("shutdown -s -t 180") //#include<stdlib.h>     180秒后自动关机
syetem("shutdown -a") //#include<stdlib.h>       取消自动关机





//文件读写格式1
main()
{
      FILE *p1,*p2;
      p1=fopen("1.in","r");
      p2=fopen("2.out","w");
      fscanf(p1,"");
      fprintf(p2,"");
      fclose(p1);
      fclose(p2);
} 





//文件读写格式2
main()
{
    freopen("1.in","r",stdin);
    freopen("2.out","w",stdout);
    scanf("");
    printf("");
} 

