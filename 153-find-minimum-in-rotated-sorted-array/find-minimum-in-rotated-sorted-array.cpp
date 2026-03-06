class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int minV=INT_MAX;
        int curr=0;

        for(int i=0; i<n; i++){
            curr=nums[i];
            minV=min(minV,curr);
        }
        return minV;
    }
};