#include<stdio.h>
#include<conio.h>
void main()
{
     long int num,i,j,bnum=(),dnum;
     clrscr();
     printf("\n Enter a decimal number:");
     scanf("% 1d",&num);
     dnum=num;
     i=1;
     for(j=num:j>0:j=j/2)
     {
                         bnum=bnum+(num/2)*i;
                         i=i*10;
                         num=num/2;
     }                    
     printf("/n The binary of %1d is %1d",dnum,bnum);
     getch();
}
