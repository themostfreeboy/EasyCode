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
                    printf("��������\n��Ϊ��С������������ֱ�����������\n");
                    scanf("%d%d",&a,&b);
                    minbei=a*b;
                    for(i=a*b;i>=max(a,b);i--)
                    {
                              if(i%a==0&&i%b==0)         minbei=i;
                    }
                    printf("\n��С��������%d\n",minbei);
                    getch();
}
