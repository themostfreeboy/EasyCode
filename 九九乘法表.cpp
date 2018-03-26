#include<conio.h>
#include<stdio.h>
main()
{
      int i,j,a[10][10],b[10];
      printf("¾Å¾Å³Ë·¨±í£º¼ÖÏèÁú±à\n\n");
      for(i=1;i<=9;i++)
           for(j=1;j<=9;j++)
                a[i][j]=i*j;
      for(i=1;i<=9;i++)
      {
           for(j=1;j<=i;j++)
                printf("%d*%d=%d\t",j,i,a[i][j]);
           printf("\n");
      }
      printf("\n\n");
      getch(); 
}
