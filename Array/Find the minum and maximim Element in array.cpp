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
/////////////////////////////////////////////////////////////////////////////////////////////////
maxi and min take a input 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Find the maximum and minimum values
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;

    return 0;
}
