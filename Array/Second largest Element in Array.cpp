class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    int ans= -1;   //largest elemnt find
	    for(int i=0;i<n;i++){
	        if(arr[i]>ans)
	        ans= arr[i];
	    }
	    
	    
	    // Second largest element
	    
	    int anstwo= -1;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=ans)      // mera arr[i] ka elment not equal hona chaoye ans ke
	        anstwo= max(anstwo,arr[i]);
	    }
	    	return anstwo;
	}

};



#include<bits/stdc++.h>
using namespace std;

int findMaxValue() {
    int n = 0;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] != maxi) {
            maxi = max(maxi, arr[i]);
        }
    }

    return maxi;
}

int main() {
    int result = findMaxValue();
    cout << "Max Value: " << result << endl;

    return 0;
}

