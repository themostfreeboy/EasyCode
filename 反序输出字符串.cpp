#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
    int b,i;
    char a[2*2*2*2*2*2*2*2*2*2*2*2*2*2*2];
    printf("¼ÖÏèÁú±à\n");
    scanf("%s",&a);
    b=strlen(a);
    printf("\n\n");
    for(i=b-1;i>=0;i--)
         printf("%c",a[i]); 
    printf("\n\n");
    getch();
}
