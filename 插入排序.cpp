#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int n,i,j,z;
      printf("�˳�����Խ��������������������򣬼�������\n\n��ѡ����������:\n1����С��������\n2���Ӵ�С����\n\n");
      scanf("%d",&z);
      if(z!=1&&z!=2)
           printf("���������������\n\n");
      else
      {
          printf("\n\n������Ҫ���������ĸ���\n\n");
          scanf("%d",&n);
          int a[n+1];
          printf("\n������������%d������\n\n",n);
          for(i=1;i<n+1;i++)
               scanf("%d",&a[i]);
          for(i=1;i<n+1;i++)
          {
               a[0]=a[i];
               for(j=i-1;a[j]>a[0];j--)
               {
                    a[j+1]=a[j];
                    a[j]=a[0];                        
               }
          }
          if(z==1)
          {
               printf("��С��������Ϊ");
               for(i=1;i<n+1;i++)
                    printf("%d\t",a[i]);
          }
          else if(z==2)
          {
               printf("�Ӵ�С����Ϊ");
               for(i=n;i>=1;i--)
                    printf("%d\t",a[i]);
          } 
      }
      getch();
      return 0;
}
