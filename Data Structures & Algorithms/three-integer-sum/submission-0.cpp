class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> sums;
        int n = nums.size();

        for(int i = 0; i < n - 2; i++){
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int current = nums[i];
            int left = i + 1;
            int right = n - 1;

            while(left < right){
                int total = current + nums[left] + nums[right];
                if(total == 0){
                    sums.push_back({current, nums[left], nums[right]});
                    // Skip duplicate values for left pointer
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicate values for right pointer
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(total < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return sums;
    }
};