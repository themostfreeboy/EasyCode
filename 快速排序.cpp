#include<stdio.h>
#include<conio.h>
void quicksort(int a[],int low,int high)
{
     int temp,i,j;
     i=low;
     j=high;
     if(low>=high)      return;
     temp=a[j];
     while(i<j)
     {
               while(i<j&&a[i]<temp)     i++;
               if(i<j)      a[j]=a[i];
               while(i<j&&a[j]>temp)     j--;
               if(i<j)      a[i]=a[j];
     }
     a[j]=temp;
     quicksort(a,low,j-1);
     quicksort(a,j+1,high);
     return;
}
main()
{
       int a[100],n,i;
       scanf("%d",&n);
       for(i=1;i<=n;i++)
                scanf("%d",&a[i]);
       quicksort(a,1,n);
       printf("\n");
       for(i=1;i<=n;i++)
                printf("%d\t",a[i]);
       getch();
}
