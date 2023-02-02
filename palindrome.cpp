#include<stdio.h>
#include<conio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n,i,j,A[20],flag;
		
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
		
		flag=1;
		for(i=0,j=n-1;   i<=(n-1)/2;  i++,j--)
		{
			if(A[i]!=A[j])
			{
				flag=0;
				break;
			}
		}
		
		if(flag==0)
			printf("\nNO");
		else
			printf("\nYES");
		
	}
	return 0;
}
