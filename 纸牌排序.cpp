#include<conio.h>
#include<stdio.h>
#include<string.h>
void paixu(int a[],int n)
{
    int j,i,t,q,min;
    for(i=0;i<n-1;i++)
    {
              min=a[i];
              t=i;
              q=a[i];
              for(j=i+1;j<n;j++)
                        if(a[j]<min)
                        {
                                    min=a[j];
                                    t=j;
                        }
              a[i]=a[t];
              a[t]=q;
    }
}
main()
{
      printf("�������࣬��Ϊֽ��������򣬾����������Ϊ:\n����n���˿��ƣ���������Ҫ���������\n(1)���ֻ�ɫ���ҡ���Ƭ�����Һ�÷���ֱ�����ĸh��f��t��m��ʾ��ÿ�ֻ�ɫ����������1--13�ֱ��ʾ�������⡱Ϊ1��kΪ13,�����j������t11��ʾ�������Դ����ơ�������ʾΪk1��С����ʾΪk2��\n(2)���ֻ�ɫ�����ҡ���Ƭ�����Һ�÷����˳��������������Ļ�������������ߣ�����ʼλ�á�\n(3)ÿ�ֻ�ɫ����ʾ������С�����˳�����򣬴�������С���ĺ��档\n(4)��n���ƿ���û��������û��ĳ�ֻ�ĳЩ�ֻ�ɫ���ơ�\n\n����������n\nn=");
      int n,i;
      scanf("%d",&n);
      printf("\n\n��������%d��ֽ��\n",n);
      char a[n+2];
      int b[n+2],c[n+2];
      for(i=0;i<n;i++)
      {
                       scanf(" ");
                       scanf("%c%d",&a[i],&b[i]);
      }
      for(i=0;i<n;i++)
      {
                       if(a[i]=='k') c[i]=1000+b[i];
                       else if(a[i]=='h') c[i]=2000+b[i];
                       else if(a[i]=='f') c[i]=3000+b[i];
                       else if(a[i]=='t') c[i]=4000+b[i];
                       else if(a[i]=='m') c[i]=5000+b[i];
                       else printf("��ĵ�%d��������������\n",i+1);
      }
      paixu(c,n);
      printf("\n\n˳��Ϊ:\n");
      for(i=0;i<n;i++)
      {
                if(c[i]%5000<100) printf("m%d\t",c[i]%5000);
                else if(c[i]%4000<100) printf("t%d\t",c[i]%4000);
                else if(c[i]%3000<100) printf("f%d\t",c[i]%3000);
                else if(c[i]%2000<100) printf("h%d\t",c[i]%2000);
                else if(c[i]%1000<100) printf("k%d\t",c[i]%1000);
                else printf("��ĵ�%d��������������\n",i+1);
      }
      printf("\n\n");
      getch();
}
