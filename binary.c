#include<stdio.h>
int main()
{
	 int i ,m,n,c,d,swap,first,last,mid,a[100];
	  printf("enter the size of array");
    scanf("%d",&m);
    printf("enter the elements of array");
    for(i=0;i<m;i++)
    {
    	scanf("%d",&a[i]);
    }
    for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1]) 
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }
    }
  }
  printf("enter the no to be searched");
    scanf("%d",&n);
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{
	if (a[mid] == n) 
	{
      printf("%d found at location %d", n, mid+1);
      break;
  }
  else if(n>mid)
  	first=mid+1;
  else
  	last=mid-1;
  mid=(first+last)/2;
}

	return 0;
}