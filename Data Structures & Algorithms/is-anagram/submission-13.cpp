class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.length()){
            return false;
        }
       
        unordered_map<char,int> mp;
        for(int i = 0 ; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(int j =0 ; j<t.size(); j++){
            mp[t[j]]--;
            if(t[j]<0){
                return false;
            }
        }
        for(int i =0 ; i<mp.size(); i++){
            if(mp[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};