class Solution {
    

    string GetlongString(string& s, int left, int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }

        return s.substr(left+1, right-left - 1);
    }
public:
    string longestPalindrome(string s) {
        string longest = "";
        for(int i =0;i<s.length();i++){

            string oddpal = GetlongString(s,i,i);
            if(oddpal.length()>longest.length()){
                longest = oddpal;
            }

            string evenpal = GetlongString(s,i,i+1);
            if(evenpal.length()>longest.length()){
                longest = evenpal;
            }
        }
        return longest;
        
    }
};