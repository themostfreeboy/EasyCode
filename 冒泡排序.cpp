#include<conio.h>
#include<stdio.h>
main()
{
      printf("��������\n��Ϊ����ϵͳ�����������������n\nn=");
      int n,i,j;
      scanf("%d",&n);
      int a[n+1];
      printf("\n\n������������%d����\n",n);
      for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
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
      printf("\n\n");
      for(i=1;i<=n;i++)
           printf("%d\t",a[i]);
      getch();
}
