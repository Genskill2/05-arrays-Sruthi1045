/* Enter your solutions in this file */
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
int max(int a[],int n)
{
  int big,i;
  big=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>big)
    {
      big=a[i];
    }
  }
  return big;
}
int min(int a[],int n)
{
  int small,j;
  small=a[0];
  for(j=1;j<n;j++)
  {
    if(a[j]<small)
    {
      small=a[j];
    }
  }
return small;
}
float average(int a[],int n)
{
  int i=0,sum=0;
  float avg;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  avg=(float)sum/n;
  return avg;
}
    
int mode(int a[],int n)
{
  int maxvalue=0,maxcount=0,i,j;
  for(i=0;i<n;i++)
  {
    int count=0;
    for(j=0;j<n;j++)
    {
      if(a[j]==a[i])
      {
        count++;
      }
    }
    if(count>maxcount)
    {
      maxcount=count;
      maxvalue=a[i];
    }
  }
  return maxvalue;
}
int factors(int n,int a[])
{
    int count=0;
    while(n%2==0)
    {
        a[count]=2;
        count++;
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            a[count]=i;
            count++;
            n=n/i;
        }
    }
    if(n>2)
    {
    a[count]=n;
    count++;
    }
    return count;
}
    
  
