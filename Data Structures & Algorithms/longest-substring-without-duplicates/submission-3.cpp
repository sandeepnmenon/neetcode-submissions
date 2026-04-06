class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,n=s.size();
        if(s.size()==0)
            return 0;
        int result=1;
        unordered_map<char,int> hash;
        for(int i=0;i<n;++i){
            if(hash.find(s[i]) != hash.end()) {
                start = max(start, hash[s[i]]+1);
            }
            result = max(result, i-start+1);
            hash[s[i]]=i;
        }

        return result;
    }
};
