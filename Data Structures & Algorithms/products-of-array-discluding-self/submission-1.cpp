class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left_list(n,1);
        vector<int> right_list(n,1);
        vector<int> result(n,1);
        for(int i=1;i<nums.size();i++){
            left_list[i]=left_list[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            right_list[i]=right_list[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            result[i]=left_list[i]*right_list[i];
        }
        return result;
   }
};
