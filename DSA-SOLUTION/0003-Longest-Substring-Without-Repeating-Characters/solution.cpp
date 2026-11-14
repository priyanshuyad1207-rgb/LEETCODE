class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<bool>count(256,0);
        int start =0,sec=0,len=0;
        while(sec<s.size()){
            while(count[s[sec]]){
                count[s[start]]=0;
                start++;

            }
            count[s[sec]]=1;

            len=max(len,sec-start+1);
            sec++;
        }
        return len;
    }
};
