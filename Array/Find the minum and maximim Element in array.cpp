#include<bits/stdc++.h>
using namespace std;
int main()
{
    // this is for minimum
    //  int arr[5]= {4,3,2,5,6};
    // int ans= INT_MAX;
    // for(int i=0;i<5;i++){
    //     if(arr[i]<ans)
    //     ans =arr[i];
    // }
    // cout<<ans;
    
    
    // this is for maximim 
    int arr[5] = {5,2,3,7,8};
    int ans= INT_MIN;
    for(int i=0;i<5;i++){
       if(arr[i]>ans)
       ans = arr[i];
    }
    cout<<ans;
}

