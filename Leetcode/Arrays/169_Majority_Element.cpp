class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int majElemnt=0;
        for(int num:nums){
            if(cnt==0){
                majElemnt=num;
            }
            if(num==majElemnt){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return majElemnt;
    }
};
