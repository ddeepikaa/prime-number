# prime-number
#include<stdio.h>
int main()
{
  int num,ctr,size,count=1;
  printf("enter the number");
  scanf("%d",&num);
  size=num/2;
  
for(ctr=1;ctr<=size;ctr++)
{
   if(num%ctr==0)
     count++;
}
if(count==1)
  printf("prime number");
else 
printf("not a prime number");
}
