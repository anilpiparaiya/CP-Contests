class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end());
        reverse(tasks.begin(), tasks.end());
        
        int ans = 0;
        for(int i=0; i<tasks.size(); i++){
            ans = max(ans, tasks[i] + processorTime[i/4]);
        }
        
        return ans;
    }
};
