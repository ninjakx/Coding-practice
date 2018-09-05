//https://practice.geeksforgeeks.org/problems/equilibrium-point/0
using namespace std;
int equi(int arr[],int l,int sum)
{       
       if (l==1)
          return 1;
       int leftsum=0;
	   for (int i =0 ;i<l;i++)
	   {    
	       sum = sum - arr[i];
	       if (leftsum == sum)
	            return i+1;
	       leftsum+=arr[i];
	   }
	   return -1;
}
int main() {
	int t;
	
	cin>>t;
	while(t--)
	{  int n;
	   cin>>n;
       int sum =0,index;
	   int a[n];
	    
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	       sum = sum + a[i];
	   }
	   index = equi(a,n,sum);
	   cout<<index<<endl;
	       
	 
	   
	}
	return 0;
}
