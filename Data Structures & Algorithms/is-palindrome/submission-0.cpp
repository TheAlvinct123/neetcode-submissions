class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();

        string cleanStr;
        for(char c : s){
            if(isalnum(c)){
                cleanStr += tolower(c);
            }

        }
        int left = 0;
        int right = cleanStr.length() - 1;
        while(left < right) {
            if(cleanStr[left] != cleanStr[right]) {
                return false; // Not a palindrome
            }
            left++;
            right--;
        }
        return true; // Palindrome
    }
};