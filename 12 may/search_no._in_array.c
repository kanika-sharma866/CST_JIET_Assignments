//search
#include<stdio.h>
main()
{
	int arr[10],i,m,n,f=0;
	printf("Enter size of array: ");
	scanf("%d",&m);
	printf("Enter array: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(arr[i]==n)
		{
			printf("%d found at position %d",n,i+1);
			f=1;
		}
    }
    if(f==0)
    {
    	printf("%d not found",n);
    }
	    
}
	

