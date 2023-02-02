#include<stdio.h>
#include<conio.h>
int main()
{   x:int a=0,b=1,i,c,n;
	printf("\nenter the no of terms you want to print:");
	scanf("%d",&n);
	if(n<=0){
	printf("no fibonacci elements");
	goto x;
	}
	else if(n==1)
	printf("%d",a);
	else if(n==2)
	printf("%d %d",a,b);
	else if(n>2){
		
	      printf("%d %d",a,b);
		for(i=2;i<n;i++){
			c=a+b;
			printf(" %d", c);
			a=b;b=c;
		}
	}
	return 0;
}
