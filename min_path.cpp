#include<stdio.h>
int cost[3][3] = { {1,2,3},{4,8,2},{1,5,3} };

int min(int x ,int y,int z)
{	
	if (x<y)
		return (x<z) ? x:z ;
	else
		return (y<z) ? y:z ;
} 


int min_dist(int m, int n)
{      
	int t[3][3];
	t[0][0] = cost[0][0];

	// set first column
	for(int i =1;i<m;i++)
		t[i][0] = t[i-1][0] + cost[i][0];
	// set first row
	for(int j=1;j<n;j++)
		t[0][j] = t[0][j-1] + cost[0][j];
	for(int i=1;i<m;i++)
	{for(int j=1;j<n;j++)
	{t[i][j] = min(t[i][j-1],t[i-1][j-1],t[i-1][j])+cost[i][j]; 
	}
	}
	return t[m-1][n-1];
}
	

int main()
{	
	printf("%d\n",min_dist(3,3));
	return 0;
}
