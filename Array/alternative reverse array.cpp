logic samjha love babbar lecture 17

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[6]={6,5,4,0,-2,1};
    
    for(int i=0;i<5;i=i+2){
        if(i+1<6)
        swap(arr[i],arr[i+1]);
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}
