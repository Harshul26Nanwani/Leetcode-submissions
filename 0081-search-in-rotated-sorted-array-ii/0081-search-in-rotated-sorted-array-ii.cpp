class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return false;
    }
};