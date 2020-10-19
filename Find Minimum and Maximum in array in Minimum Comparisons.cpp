//Program to find minimum and maximum elements in the array
#include<bits/stdc++.h>
using namespace std;
pair<int,int> findMinMaxWithLessComparisons(int a[], int n){
    //Initialize minimum and maximum
    int maxi=INT_MIN;
    int mini=INT_MAX;
    
    //Iterate by incrementing two steps
    for(int i=0;i<n;i+=2){
        
        //If a[i] is greater then it cam be maximum only and a[i+1] can be minimum only
        if(a[i]>a[i+1]){
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i+1]);
        }
        else{
            maxi=max(maxi,a[i+1]);
            mini=min(mini,a[i]);
        }
    }
    return make_pair(maxi,mini);//return the answer as pair
}

int main(){
    int n;
    cin>>n;
    int a[n];
    //Take array Input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pair<int,int> ans=make_pair(INT_MAX,INT_MIN);
    if(n%2==0)
        ans=findMinMaxWithLessComparisons(a,n);
    else{//for odd sized array pass array till n-1 index
        ans=findMinMaxWithLessComparisons(a,n-1);
    }
    int maxi=ans.first;
    int mini=ans.second;
    if(n>=1){//compare with left out element if array was odd
        maxi=max(ans.first,a[n-1]);
        mini=min(ans.second,a[n-1]);
    }
    cout<<"maximum = "<<maxi<<"\n";
    cout<<"minimum = "<<mini<<"\n";
}
