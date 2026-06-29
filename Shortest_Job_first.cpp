class Solution {
  public:
    int solve(vector<int>& bt) {
        // Step 1: Sort burst times to apply Shortest Job First
        sort(bt.begin(), bt.end());
        
        long long total_waiting_time = 0;
        long long current_time = 0;
        
        // Step 2: Accumulate waiting times
        for(int i = 0; i < bt.size(); ++i) {
            total_waiting_time += current_time; // This job waited for 'current_time'
            current_time += bt[i];              // Update time passed after this job executes
        }
        
        // Step 3: Return the floor of the average
        return floor((double)total_waiting_time / bt.size());
    }
};
