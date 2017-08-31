class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1=0;
        int index2=numbers.size()-1;
        while(numbers[index1]+numbers[index2]!=target){
            if(numbers[index1]+numbers[index2]<target)
                index1+=1;
            else
                index2-=1;
        }
        return vector<int>({index1+1,index2+1});
    }
};