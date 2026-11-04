class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();    //size of temperatures
        vector<int> results(n,0);       
        stack<pair<int, int>> s;        //used stack pairing to keep track of {temp, index}

        for(int i = 0; i < n; i++){
            int t = temperatures[i];
            while(!s.empty() && t > s.top().first){     //while the stack isnt empty and temp[i] > temp[top of stack] 
                auto pair = s.top(); 
                s.pop();
                results[pair.second] = i - pair.second; //results[top of stacks index] = difference of i and top stacks index
            }
            s.push({t,i});  //if temp[i] !> temp[top of stack] push it onto the stack
        }
        return results;
    }
};
