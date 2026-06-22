class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int in = 0;
        int max = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            max +=nums[i];
            if(max > in){in = max;}
            if(nums[i] == 0){
                max = 0;
            }

        }
        return in;
    }
};