#include<stdio.h>
int main()
{
int m,n,l,i,j,k;

printf("enter the no of rows of 1st matrix:");
scanf("%d",&m);
printf("enter the no of col of 1st matrix:");
scanf("%d",&n);
printf("enter the no of col of 2st matrix:");
scanf("%d",&l);
printf("enter the elements of 1st matrix:\n");
int a[m][n],b[n][l],c[m][l];
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
}
printf("enter the elements of 1st matrix:\n");
for(i=0;i<n;i++){
	for(j=0;j<l;j++){
		scanf("%d",&b[i][j]);
	}
}

for(i=0;i<m;i++){
	for(j=0;j<l;j++){
       c[i][j]=0;
       for(k=0;k<n;k++){
    	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
	   }
	}
}
printf("The resultant matrix:\n");
for(i=0;i<m;i++){
	for(j=0;j<l;j++){
		printf(" %d ",c[i][j]);
	}printf("\n");
}


}
