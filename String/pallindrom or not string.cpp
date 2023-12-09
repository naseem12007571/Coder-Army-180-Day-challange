#include<bits/stdc++.h>
using namespace std;
int main()


{
   string s2 ="naman";
   int start=0,end=s2.size()-1;
   while(start<end)
   
   {
     if(s2[start]!=s2[end])
     {
         cout<<"Not a pallindrom";
         return 0;
     }
     start++;
     end--;
   }
   cout<<"its a pallindrom";
     
} 

https://www.youtube.com/watch?v=FkaIZAQKmWU&list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01&index=36
