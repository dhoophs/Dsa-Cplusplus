class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
        return 0;
    }
        int i=0; int j=1;
        int n = nums.size();
        for(j;j<n;j++){
            if(nums[j]!=nums[i]){
                i++;
                
                nums[i]=nums[j];
            }    
            }
            return i + 1;
        
    }
};