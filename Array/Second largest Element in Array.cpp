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
