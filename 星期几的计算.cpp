#include<stdio.h>
#include<string.h>
#include<conio.h>
void read(int x)
{
    if(x==1)    printf("һ");
    if(x==2)    printf("��");
    if(x==3)    printf("��");
    if(x==4)    printf("��");
    if(x==5)    printf("��");
    if(x==6)    printf("��");
    if(x==0)    printf("��");
}
int panduan(int x)
{
    int y;
    if(x%400==0)    y=1;
    else if(x%100==0)  y=0;
    else if(x%4==0) y=1;
    else    y=0;
    return y;
}
main() 
{
    int i,j,k,m=0,pingrun,date[13][32],year,month,day,xingqi;
    printf("�������࣬��ϵͳ���Լ����1900��1��1���Ժ�ĳ��ĳ��ĳ�����ڼ�(����)�������������ꡢ�¡���\n\n");
    scanf("%d%d%d",&year,&month,&day);
    for(i=0;i<=12;i++)
        for(j=0;j<=31;j++)
            date[i][j]=0;
    for(i=1;i<=31;i++)
    {
        date[1][i]=1;
        date[3][i]=1;
        date[5][i]=1;
        date[7][i]=1;
        date[8][i]=1;
        date[10][i]=1;
        date[12][i]=1;
    }
    for(i=1;i<=30;i++)
    {
        date[4][i]=1;
        date[6][i]=1;
        date[9][i]=1;
        date[11][i]=1;
    }
    for(i=1;i<=28;i++)      date[2][i]=1;
    for(i=1900;i<=year-1;i++)
    {
        if(panduan(i)==1)    date[2][29]=1;
        else if(panduan(i)==0)    date[2][29]=0;
        for(j=1;j<=12;j++)
        {
            for(k=1;k<=31;k++)
            {
                    if(date[j][k]==1)
                    {
                        m++;
                        m=m%7;
                    }
            }
        }
    }
    if(panduan(year)==1)    date[2][29]=1;
    else if(panduan(year)==0)    date[2][29]=0;
    for(i=1;i<=month-1;i++)
    {
        for(j=1;j<=31;j++)
        {
                if(date[i][j]==1)
                {
                    m++;
                    m=m%7;
                }
        }
    }
    for(j=1;j<=day;j++)
    {
                if(date[month][j]==1)
                {
                    m++;
                    m=m%7;
                }
    }
    printf("\n\n%d��%d��%d��������",year,month,day);
    read(m); 
    printf("\n\n��������\n\n"); 
    getch();
}
