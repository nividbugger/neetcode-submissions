/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */
#include <bits/stdc++.h>
class Solution {
public:
    bool static compareInterval(Interval &i1, Interval &i2)
    {
    return (i1.start < i2.start);
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        std::sort(intervals.begin(), intervals.end(), compareInterval);
        int i =1 ;
        if(intervals.size()==1){
            return true;
        }
        while(i<intervals.size()){
            if(intervals[i].start < intervals[i-1].end){
                return false;
            }
            i++;
        }
        return true;        
    }
};
