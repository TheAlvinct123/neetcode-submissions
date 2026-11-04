class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int result = right;

        while(left <= right) {
            int middle = (left + right) / 2;
            long long totalTime = 0; 
            for (int i = 0; i < piles.size(); ++i) {
                int p = piles[i];
                totalTime += ceil(static_cast<double>(p)/middle);
            }
            if(totalTime <= h){
                result = middle;
                right = middle - 1;
            }
            else{
                left = middle + 1;
            }
        }
        return result;
    }
};
