#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
      printf("贾翔龙编，此程序可以算出肽链中的氨基酸种类，请选择输入方式：\n1、输入DNA中的含氮碱基序列\n2、输入RNA中的含氮碱基序列\n");
      int z,i,b;
      char dna[2*2*2*2*2*2*2*2*2*2],rna[2*2*2*2*2*2*2*2*2*2];
      scanf("%d",&z);
      if(z==1)
      {
              printf("\n请依次输入碱基序列(用表示A、G、C、T，中间不需要空格)\n");
              scanf("%s",&dna);
      }
      else if(z==2)
      {
              printf("\n请依次输入碱基序列(用表示A、G、C、U，中间不需要空格)\n");
              scanf("%s",&rna);
      }
      else   
      {
              printf("\n你输入的数据有误\n");
              goto m;
      }
      if(z==1)
      {
              for(i=0;dna[i]!='\0';i++)
              {
                        if(dna[i]!='a'&&dna[i]!='A'&&dna[i]!='g'&&dna[i]!='G'&&dna[i]!='c'&&dna[i]!='C'&&dna[i]!='t'&&dna[i]!='T')
                        {
                                  printf("\n你输入的数据有误\n");
                                  goto m; 
                        }
              }
      }
      if(z==2)
      {
              for(i=0;rna[i]!='\0';i++)
              {
                        if(rna[i]!='a'&&rna[i]!='A'&&rna[i]!='g'&&rna[i]!='G'&&rna[i]!='c'&&rna[i]!='C'&&rna[i]!='u'&&rna[i]!='U')
                        {
                                  printf("\n你输入的数据有误\n");
                                  goto m; 
                        }
              }
      }
      if(z==1)
      {
              for(i=0;dna[i]!='\0';i++)
              {
                        if(dna[i]=='a'||dna[i]=='A')     rna[i]='U';
                        if(dna[i]=='g'||dna[i]=='G')     rna[i]='C';
                        if(dna[i]=='c'||dna[i]=='C')     rna[i]='G';
                        if(dna[i]=='t'||dna[i]=='T')     rna[i]='A';
              }
      }
      if(z==2)
      {
              for(i=0;rna[i]!='\0';i++)
              {
                        if(rna[i]=='a')     rna[i]='A';
                        if(rna[i]=='g')     rna[i]='G';
                        if(rna[i]=='c')     rna[i]='C';
                        if(rna[i]=='u')     rna[i]='U';
              }
      }
      b=strlen(rna);
      for(i=b;i<=b+5;i++)     rna[i]='0';
      printf("\n\n");
      for(i=0;rna[i]!='\0';i++)
      {
                if(i%3==0)
                {
                        if(rna[i]=='U')
                        {
                                  i++;
                                  if(rna[i]=='U')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("苯丙氨酸\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("亮氨酸\t");
                                            }
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("丝氨酸\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("酪氨酸\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("(肽链终止)\t");
                                            }
                                  }
                                  else if(rna[i]=='G')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("半胱氨酸\t");
                                            }
                                            else if(rna[i]=='A')
                                            {
                                                           if(rna[i]!='0')     printf("(肽链终止)\t");
                                            }
                                            else if(rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("色氨酸\t");
                                            }
                                  }
                        }
                        else if(rna[i]=='C')
                        {
                                  i++;
                                  if(rna[i]=='U')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("亮氨酸\t");
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("脯氨酸\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("组氨酸\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("谷氨酰胺\t");
                                            }
                                  }
                                  else if(rna[i]=='G')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("精氨酸\t");
                                  }
                        }
                        else if(rna[i]=='A')
                        {
                                  i++;
                                  if(rna[i]=='U')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C'||rna[i]=='A')
                                            {
                                                           if(rna[i]!='0')     printf("异亮氨酸\t");
                                            }
                                            else if(rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("甲硫氨酸(肽链起始)\t");
                                            }
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("苏氨酸\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("天冬酰胺\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("赖氨酸\t");
                                            }
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("丝氨酸\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("精氨酸\t");
                                            }
                                  }
                        }
                        else if(rna[i]=='G')
                        {
                                  i++;
                                  if(rna[i]=='U')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C'||rna[i]=='A')
                                            {
                                                           if(rna[i]!='0')     printf("缬氨酸\t");
                                            }
                                            else if(rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("缬氨酸(肽链起始)\t");
                                            }
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("丙氨酸\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("天冬氨酸\t");
                                            }
                                            else if(rna[i]=='A'||'G')
                                            {
                                                           if(rna[i]!='0')     printf("谷氨酸\t");
                                            }
                                  }
                                  else if(rna[i]=='G')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("甘氨酸\t");
                                  }
                        }
                }
      }
      m:;
      printf("\n\n");
      getch();
}
