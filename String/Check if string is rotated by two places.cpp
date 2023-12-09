class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    
    void rotateclockwise(string &s)
    {
        char c = s[0];
        int index= 1;
        while(index<s.size())
        {
            s[index-1]=s[index];
            index++;
        }
        
        s[s.size()-1]=c;
    }
    void roateanticlockwise(string &s)
    {
        
        char c = s[s.size()-1];
        int index= s[s.size()-2];
        while(index>0)
        {
            s[index+1]=s[index];
            index--;
        };
        s[0]=c;
    }
    
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.size()!=str2.size())
        return 0;
        
        string clockwise, anticlockwise;
        clockwise = str1;
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(clockwise==str2)
        return 1;
        
        anticlockwise =str1;
        rotateclockwise(anticlockwise);
        rotateclockwise(anticlockwise);
        if(anticlockwise==str2)
        return 1;
        
        return 0;
        
        
    }

};


//https://www.youtube.com/watch?v=BCHJ9YizW7w&list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01&index=37
