#include<conio.h>
#include<stdio.h>
int max(int x,int y)
{
    int z;
    z=(x>y)?x:y;
    return z;
}
int min(int x,int y)
{
    int z;
    z=(x<y)?x:y;
    return z;
}
main()
{
                    int a,b,i,minbei;
                    printf("贾翔龙编\n此为最小公倍数程序，请分别输入两个数\n");
                    scanf("%d%d",&a,&b);
                    minbei=a*b;
                    for(i=a*b;i>=max(a,b);i--)
                    {
                              if(i%a==0&&i%b==0)         minbei=i;
                    }
                    printf("\n最小公倍数是%d\n",minbei);
                    getch();
}
