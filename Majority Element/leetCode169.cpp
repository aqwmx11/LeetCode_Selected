class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result=nums[0];
		int count=1;
		for(int i=1;i<nums.length;i++){
			if(count==0){
				count=1;
				major=nums[i];
			}
			else if(major==nums[i])
				count++;
			else
				count--;
		}
	}
}