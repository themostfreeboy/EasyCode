#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      int n,m,i,j,tag,l;
      printf("�������࣬�˳������ʾԼɪ������������������\n");
      scanf("%d",&n);
      printf("����������\n");
      scanf("%d",&m);
      int a[n+1];
      printf("������������%d�������������\n",n);
      for(i=1;i<=n;i++)
                scanf("%d",&a[i]);
      i=0;
      printf("\n\n����˳��Ϊ\n");
      for(j=1;j<=n+1;j++)
      {
                if(j>n)
                         j=1;
                if(a[j]!=0)
                {
                          i++;
                          i=i%m;
                          if(i==0)
                          {
                                   printf("%d\t",a[j]);
                                   a[j]=0;
                          }
                }
                tag=0;
                for(l=1;l<=n;l++)
                     if(a[l]==0)     tag++;
                if(tag>=n)     break;
      }
      printf("\n\n��������\n\n");
      getch();
}
