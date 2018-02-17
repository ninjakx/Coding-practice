#include<stdio.h>


int count(int s[],int m,int n)
{
	// amount is along rows and coin value is along rows
	// I 0 1 2
	// X 1 2 3 --> c  (size=n+1)
	// 0 1 1 1
	// 1 
	// 2 
	// 3 
	// 4
	// 5
	// .
	// n
	int x,y;
	int table[n+1][m];
	for (int j = 0; j < m; j++)
            table[0][j] = 1;  // choose column(n=0) and set it as 1 as there is 1 solution i.e to choose no change
	for (int i = 1 ;i<n+1;i++) // row
	{for(int j=0;j<m;j++)  // column
	{  // solution including s[j]
	   x = (i - s[j] >= 0)? table[i-s[j]][j]:0;
	   // solution excluding s[j]
	   y = (j >= 1)? table[i][j-1]:0;
	   table[i][j] = x+y;

	}
	}
	return table[n][m-1];
}

int count2(int s[],int m,int n)
{
	//where n is the amount which will vary from 0 to n+1 
	// for n = 5 range will be from 0 to 6
	// n will be represented as column 
	// X 0 1 2 3 4 5 6 --> n  (size=n+1)
	// 1 1
	// 2 1
	// 3 1
	// ^ 
	// |
	// m : represented as row, defines coin used c=3 means rs 3 coin is used
 	int x,y;
	int table[m][n+1];
	for(int i=0;i<m;i++)
	{for(int j=0;j<n+1;j++)
	{table[i][0] = 1 ;
	}	
	}
	for(int i =0;i<m;i++)
	{
	for(int j =1;j<n+1;j++)
	{
	x = (j - s[i])>=0 ? table[i][j-s[i]]:0;
	y = ( i>=1)? table[i-1][j]:0;
	table[i][j] = x+y;
	}
	}
	return table[m-1][n];

}
		
int main()
{	
	int arr[] = {2,3,5,6};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = 9;
	
	printf("%d\n",count(arr,m,n));
	printf("%d\n",count2(arr,m,n));
	return 0;
}
	




	 
	
	

