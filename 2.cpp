//Program to find largest element in an array
#include<iostream>
using namespace std;
int largest(int a[],int n)
{
	//Initialize maximum element
	int max = a[0];
	 // Traverse array elements  
    // from second and compare 
    // every element with current max  
	for(int i=0;i<n;i++)
	if(a[i]>max)
	max=a[i];
return max;
}
int main()
{
	int a[]={2,4,5,20};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"largest number of array :- "<<largest(a,n);
return 0;
}

//output : largest number of array :- 20
