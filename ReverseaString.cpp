class Solution
{
    public:
    string reverseWord(string str)
    {
        int l = 0;
        int r = str.length()-1;
        
        
        while(l<=r)
    {
        
        swap(str[l],str[r]);
        
        
        l++;
        r--;
    } 
    return str;
    }
};
