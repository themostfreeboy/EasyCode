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
                    int a,b,i,maxyue=1;
                    printf("��������\n��Ϊ���Լ��������ֱ�����������\n");
                    scanf("%d%d",&a,&b);
                    for(i=1;i<=min(a,b);i++)
                    {
                              if(a%i==0&&b%i==0)         maxyue=i;
                    }
                    printf("\n���Լ��Ϊ%d\n",maxyue);
                    getch();
}
