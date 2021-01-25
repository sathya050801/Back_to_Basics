#include<iostream>
using namespace std;
 
 int main()
 {
 	int i,n,num,pos,arr[10];
 	
 	cout<<"Enter the no. of elements: ";
 	cin>>n;
 	cout<<endl;
 	 
 	 for(i=0;i<n;i++)
 	 {
 	 	cout<<"arr[]= ";
 	 	cin>>arr[i];
 	 	cout<<endl;
	  }
	  cout<<"Enter the no. to be inserted: ";
	  cin>>num;
	  cout<<endl;
	  
	  cout<<"Enter the position to be inserted: ";
	  cin>>pos;
	  cout<<endl;
	  
	  for(i=n-1;i>=pos;i--)
	  {
	  	arr[i+1]=arr[i];
	  }
	  	arr[pos]=num;
	  	n=n+1;
	  
	  	cout<<"Elements after insertion: ";
	  	for(i=0;i<n;i++)
	  	{
	  		cout<<arr[i];
		  }
	  	  
	  return 0;
 }
