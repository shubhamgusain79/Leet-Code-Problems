class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int i=0;
        int j=n-1;
        sort(begin(people),end(people));
        int boat=0;
        while(i<=j){
            if(people[j]+people[i]<=limit){
                i++;
                j--;
                boat++;
            }
            else{
                j--;
                boat++;
            }

        }
        return boat;
    }
};