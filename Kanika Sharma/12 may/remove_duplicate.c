//remove duplicate
//search
#include<stdio.h>
main()
{
	int arr[10],i,j,m;
	printf("Enter size of array: ");
	scanf("%d",&m);
	printf("Enter array: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m && arr[i]!=-99;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=-99;
			}
	    }
	}
	printf("The output after removing duplicate numbers is : \n");
	for(i=0;i<m;i++)
	{
	    if(arr[i]!=-99)
	    printf("%d\n",arr[i]);
	}
	
	    
}
	

