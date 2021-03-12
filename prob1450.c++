1480. Running Sum of 1d Array

//Time complexity: O(n) :  n is the size of the given array. As we are running only a single for loop, hence time complexity will be linear.
//Space Complexity: we are creating a result array of size of n. Hence space complexity will also be linear.


Approach
we have to create an array where value of element at index i will 
be equal to sum of the elements from 1st to the ith indexed element 
in given array.
For this we can simply create an array of size equal to given array size. 
Then for each element in a for loop we can add element from index 0 to 
index i in the original array using another for loop.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++) nums[i] = nums[i-1] + nums[i];
        return nums;
    }
};