#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
    int b,i,tag=0;
    char a[2*2*2*2*2*2*2*2*2*2*2*2*2*2*2];
    printf("��������\n�˳�����ж������ַ��Ƿ�Ϊ�����ַ����������ַ���\n");
    scanf("%s",&a);
    b=strlen(a);
    for(i=0;i<=(b/2-1);i++)
    {
                 tag=0;
                 if(a[i]!=a[b-i-1])
                 {
                                   tag=1;
                                   break;
                 }   
    }
    if(tag==0)
        printf("\n\n�ǻ����ַ�\n");
    if(tag==1)
        printf("\n\n���ǻ����ַ�\n");
    getch();
}
