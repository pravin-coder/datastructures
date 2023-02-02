#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		char n[30];
		int l,i,j;
		scanf("%s",n);
		l=strlen(n);
		int flag=0;	
		for(i=0,j=l-1;i<=(l-1)/2;i++,j--){
			if (n[i]!=n[j]){
				flag=1;
				break;
			}
		}
		if(flag==0)
		  printf("YES\n");
		else
		  printf("NO\n");
	}
return 0;
}
