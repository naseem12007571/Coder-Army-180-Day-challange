#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[6]={5,6,7,8,9,10};
     
     int start=0,end=5;
     while(start<end){
         start++;
         end--;
     }
     for(int i=0;i<6;i++){
         cout<<arr[i]<<" ";
     }
}
