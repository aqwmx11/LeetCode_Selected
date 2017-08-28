#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		int rowNum = nums.size();
		int colNum = nums[0].size();
		if (colNum*rowNum != r*c)
			return nums;
		else {
			vector<vector<int>> result(r, vector<int>(c, 0));
			for (int i = 0; i<rowNum; ++i) {
				for (int j = 0; j<colNum; ++j) {
					int index = i*colNum + j;
					result[index / c][index%c] = nums[i][j];
				}
			}
			return result;
		}
	}
};