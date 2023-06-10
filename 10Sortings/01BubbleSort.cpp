#include<iostream>
using namespace std;

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;;
}

void BubbleSort(int arr[],int n){
	bool flag=false;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
				flag=true;
				cout<<"COMPARISON DONE AND SWAPPED"<<endl;
			}
		}		
		if(!flag)return;
	}
}

void Display(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	// int arr[]{10,9,8,7,6,5,4,3,2,1};
	int arr[]={7,8,9,10,9};
	int size=sizeof(arr)/sizeof(int);
	Display(arr,size);
	BubbleSort(arr,size);
	Display(arr,size);
	return 0;
}