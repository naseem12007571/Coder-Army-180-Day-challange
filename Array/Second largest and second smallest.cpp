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

    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return 1; // Exit with an error code        
    }

    sort(arr, arr + n);

    int secondLargest = arr[n - 2];
    int secondSmallest = arr[1];

    cout << "Second Largest:  " <<   secondLargest  <<endl;
    cout << "Second Smallest: " <<  secondSmallest <<endl;

    return 0;
}
