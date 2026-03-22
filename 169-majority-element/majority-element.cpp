class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        int candi=nums[0];
        int count = 0;

        for(int i=1; i<n; i++){
            if(candi == nums[i]){
                count++;
            }else{
                count--;
            }
            if(count < 0){
                candi = nums[i];
                count=0;
            }
        }
        return candi;
        
    }
};