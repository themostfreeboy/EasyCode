#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{      
       printf("������\n��Ϊ쳲��������У�����������n\n\nn=");
       int n,i=0;
       scanf("%d",&n);
       int a[n+1];
       a[0]=1,a[1]=1;
       if (n==1) printf("\n쳲���������ǰ1��Ϊ��\n1\n",n);
       if (n==2) printf("\n쳲���������ǰ2��Ϊ��\n1\n1\n",n);
       if (n>=3) 
       {   printf("\n쳲���������ǰ%d��Ϊ��\n1\n1\n",n);
           for(i=3;i<=n;i++)
           {
              a[i-1]=a[i-2]+a[i-3];
              printf("%d\n",a[i-1]);
           }
       }
       else printf("���������ݴ���\n");
       getch();
}
