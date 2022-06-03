class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int zeroele=0;
        int cnt=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[zeroele]=nums[i];
                zeroele++;
                cnt++;
            }
        }
        for( int j=cnt;j<n;j++){
            nums[j]=0;
        }
    }
};