class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        const int OFFSET = 50000;
        vector<int> freq(100001, 0);

        for(int i = 0; i < n; i++){
            freq[nums[i] + OFFSET]++;
        }

        for(int i = 0, j = 0; i < 100001; i++){
            while(freq[i] > 0){
                nums[j++] = i - OFFSET;
                freq[i]--;
            }
        }

        return nums;
    }
};