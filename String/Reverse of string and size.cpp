#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name="Naseem Chodhary";
    
    int start=0,end=name.size()-1;
    while(start<end){
        swap(name[start],name[end]);
            start++,end--;
        
    }
    cout<<" Reverse Strins is : "<<name<<endl;
    
    
    // size of this string
    int size =0;
    while(name[size]!='\0'){
        size++;
    }
    cout<<"size of string : "<<size;
    
}

// https://www.youtube.com/watch?v=FkaIZAQKmWU&list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01&index=36
