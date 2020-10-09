#include <stdio.h>
 
int main() 
{
    int i ,m,n, a[100];
    int flag =0;
    printf("enter the size of array");
    scanf("%d",&m);
    printf("enter the elements of array");
    for(i=0;i<m;i++)
    {
    	scanf("%d",&a[i]);
    }
    printf("enter the no to be searched");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
    	if(a[i]==n)
    	{
    		printf("element found at index position %d",i+1);
    		flag=1;
    		break;
    	}
    }
    if(flag==0)
    {
    	printf("element not founf in the array");
    }
    return 0;
}