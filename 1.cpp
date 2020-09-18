//Program to find sum of elements in a given array
#include<iostream>
using namespace std;
int sum(int a[],int n)
{
	int sum=0;
		for(int i=0;i<n;i++)
		sum+=a[i];
		return sum;
}
int main()
{
int a[]={2,4,6,8};
int n=sizeof(a)/sizeof(a[0]);
cout<<"sum of array :"<<sum(a,n);
return 0;
}

//output :-20
