#include<iostream>
using namespace std;

void setItem(int *arr,int i,int j,int ele);
int getItem(int *arr,int i,int j);

int main(){
    int arr[5];
    setItem(arr,1,1,1);
    setItem(arr,2,2,2);
    setItem(arr,3,3,3);
    setItem(arr,4,4,4);
    setItem(arr,5,5,5);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<getItem(arr,i,j);
        }
        cout<<endl;
    }
}

void setItem(int *arr,int i,int j,int ele){
    if(i==j){
        arr[i-1]=ele;
    }
    else{
        cout<<"Not in Diagonal Position";
    }
}


int getItem(int *arr,int i,int j){
    if(i==j){
        return arr[i-1];
    }
    return 0;
}
