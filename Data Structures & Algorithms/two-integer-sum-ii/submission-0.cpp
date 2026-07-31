class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //why cant i use a set here ?? 
        //because the solution is needed with no additional space 

        //array is sorted in ascending order 
        //two pointer approach where last element -1 if greater and first pointer +1 if lesser than target 
        vector<int> ans;
        int i = 0 ;
        int j= numbers.size()-1;
        while(i<j){
            if(numbers[i] + numbers[j] == target ){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(numbers[i] + numbers[j] < target){
                i++;
            }
            else if(numbers[i] + numbers[j] > target){
                j--;
            }
        }
        return ans;
        
    }
};
