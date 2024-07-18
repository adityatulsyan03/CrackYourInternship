class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int s=cardPoints.size()-k,total=0;
        for(int i:cardPoints)
            total+=i;
        if(s==0)
            return total;
        int ans=0,c=0;
        for(int i=0;i<s;i++)
            c+=cardPoints[i];
        ans=max(ans,total-c);
        for(int i=s;i<cardPoints.size();i++){
            c-=cardPoints[i-s];
            c+=cardPoints[i];
            ans=max(ans,total-c);
        }
        return ans;
    }
};
