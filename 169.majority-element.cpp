/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ansIndex = 0;
        int count = 0;


        for(int i = 0;i<n;i++){
            if(nums[i] == nums[ansIndex]){
                count++;
            }
            else{
                count--;
            }

            if(count == 0){
                ansIndex = i;
                count = 1;
            }


        }
        int ansCount = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == nums[ansIndex]){
                ansCount++;
            }
        }

        if(ansCount > n/2){
            return nums[ansIndex];
        }else{
            return -1;
        }
    }

};
// @lc code=end

