/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        int max=0;
        vector<Interval> result;
        sort(intervals.begin(),intervals.end(),[](Interval& a,Interval& b){ return a.start<b.start;});
        for(auto temp:intervals)
        {
            if(result.size()==0||(result.back().end<temp.start))
                result.push_back(temp);
            else
            {
                Interval back=result.back();
                result.pop_back();
                back.end=(temp.end>back.end?temp.end:back.end);
                result.push_back(back);
            }
        }
        return result;
    }
};
