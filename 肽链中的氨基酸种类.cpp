#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
      printf("�������࣬�˳��������������еİ��������࣬��ѡ�����뷽ʽ��\n1������DNA�еĺ����������\n2������RNA�еĺ����������\n");
      int z,i,b;
      char dna[2*2*2*2*2*2*2*2*2*2],rna[2*2*2*2*2*2*2*2*2*2];
      scanf("%d",&z);
      if(z==1)
      {
              printf("\n����������������(�ñ�ʾA��G��C��T���м䲻��Ҫ�ո�)\n");
              scanf("%s",&dna);
      }
      else if(z==2)
      {
              printf("\n����������������(�ñ�ʾA��G��C��U���м䲻��Ҫ�ո�)\n");
              scanf("%s",&rna);
      }
      else   
      {
              printf("\n���������������\n");
              goto m;
      }
      if(z==1)
      {
              for(i=0;dna[i]!='\0';i++)
              {
                        if(dna[i]!='a'&&dna[i]!='A'&&dna[i]!='g'&&dna[i]!='G'&&dna[i]!='c'&&dna[i]!='C'&&dna[i]!='t'&&dna[i]!='T')
                        {
                                  printf("\n���������������\n");
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
                                  printf("\n���������������\n");
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
                                                           if(rna[i]!='0')     printf("��������\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("������\t");
                                            }
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("˿����\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("�Ұ���\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("(������ֹ)\t");
                                            }
                                  }
                                  else if(rna[i]=='G')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("���װ���\t");
                                            }
                                            else if(rna[i]=='A')
                                            {
                                                           if(rna[i]!='0')     printf("(������ֹ)\t");
                                            }
                                            else if(rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("ɫ����\t");
                                            }
                                  }
                        }
                        else if(rna[i]=='C')
                        {
                                  i++;
                                  if(rna[i]=='U')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("������\t");
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("������\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("�鰱��\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("�Ȱ�����\t");
                                            }
                                  }
                                  else if(rna[i]=='G')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("������\t");
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
                                                           if(rna[i]!='0')     printf("��������\t");
                                            }
                                            else if(rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("������(������ʼ)\t");
                                            }
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("�հ���\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("�춬����\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("������\t");
                                            }
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("˿����\t");
                                            }
                                            else if(rna[i]=='A'||rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("������\t");
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
                                                           if(rna[i]!='0')     printf("�Ӱ���\t");
                                            }
                                            else if(rna[i]=='G')
                                            {
                                                           if(rna[i]!='0')     printf("�Ӱ���(������ʼ)\t");
                                            }
                                  }
                                  else if(rna[i]=='C')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("������\t");
                                  }
                                  else if(rna[i]=='A')
                                  {
                                            i++;
                                            if(rna[i]=='U'||rna[i]=='C')
                                            {
                                                           if(rna[i]!='0')     printf("�춬����\t");
                                            }
                                            else if(rna[i]=='A'||'G')
                                            {
                                                           if(rna[i]!='0')     printf("�Ȱ���\t");
                                            }
                                  }
                                  else if(rna[i]=='G')
                                  {
                                            i++;
                                            if(rna[i]!='0')     printf("�ʰ���\t");
                                  }
                        }
                }
      }
      m:;
      printf("\n\n");
      getch();
}
