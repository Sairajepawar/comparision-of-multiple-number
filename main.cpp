#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		}
		
		int maxNO;
		int minNO; 
		maxNO=a[0];			
		minNO=a[0];
		for(int i=1;i<n;i++)
		{
			if(maxNO<a[i])
			{
				maxNO=a[i];
				}
				if(minNO>a[i])
				{
					minNO=a[i];
					}
			}
			cout<<maxNO;
			cout<<endl;
			cout<<minNO;
		return 0;
	}
