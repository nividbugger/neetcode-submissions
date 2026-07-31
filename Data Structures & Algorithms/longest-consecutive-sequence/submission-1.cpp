class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // cant use sorting as we want o(n) complexity 
        // can we use set to verify is a number exists at constant time ???

        // <--1 , 2, 3, 4-------100----200-->
        // validate whether a number can we the starting if a sequence and only then proceed ahead 

        unordered_set<int> nums_set;
        int max_len_ans = 0;
        for(auto ele : nums ){
            nums_set.insert(ele);
        } 
        for (auto ele : nums){
            int previous_num = ele-1;
            if(nums_set.find(previous_num) == nums_set.end()){
                //this could be the start of a sequence
                int local_length = 1;
                int cur_num_to_evaluate = ele+1;
                bool stop = false;
                while(!stop){
                    if(nums_set.find(cur_num_to_evaluate ) != nums_set.end() ){
                        local_length +=1;
                        cur_num_to_evaluate++;
                    }else{
                        stop = true;
                    }
                    max_len_ans = max(max_len_ans,local_length);
                }
         
            }
            continue;
        }
        return max_len_ans;
        
    }
};
