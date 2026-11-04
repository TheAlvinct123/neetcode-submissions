class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m != n){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0; i < n; i++){
            if(s == t){
                return true;
            }
        }
        return false;
    }
};
