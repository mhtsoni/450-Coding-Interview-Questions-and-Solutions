//Program to reverse an array
#include<bits/stdc++.h>
using namespace std;
void reverser(int a[], int n){
    int left=0;//Left Pointer
    int right=n-1;//Right Pointer
    for(int i=0;i<n;i++){
        if(left>right){ //When we reach mid break the loop
            break;
        }
        swap(a[left],a[right]);//swap left and right elements
        left++;//Increment Left
        right--;//Increment Right
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    //Take array Input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverser(a,n);
    //reverse(a,a+n);(direct implementation using STL)
    
    //Print array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
