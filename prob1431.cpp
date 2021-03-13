1431. Kids With the Greatest Number of Candies

//Time complexity: O(n) :  n is the size of the given array. As we are running only a single for loop, hence time complexity will be linear.
//Space Complexity: we are creating a result array of size of n. Hence space complexity will also be linear.

//Approach:-
   -Use max function to find maximum number in list.
   -If current number add extraCandies > maximum number, return True.
   -Else, return False.

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int max = 0;
        vector<bool> result;
        for(int i = 0; i < candies.size(); i++){
            if(candies.at(i)>max){
                max = candies.at(i);
            }
        }
        for(int i = 0; i < candies.size(); i++){
            if(candies.at(i) + extraCandies >= max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
        
    }
};