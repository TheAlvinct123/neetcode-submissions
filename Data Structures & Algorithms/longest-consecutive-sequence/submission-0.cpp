class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;
    
        for(int i = 1; i < n; i++){
            if(abs(nums[i] - nums[i-1]) == 1){
                current++;
                longest = max(longest, current);        
            }
            else if(nums[i] != nums[i-1]){
                current = 1;
            }
        }
        return longest;
    }
};
