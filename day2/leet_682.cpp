#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int j = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] !="D" && operations[i] != "C" && operations[i] != "+"){
                ans.push_back(stoi(operations[i]));
                j++;
            }
            else if ( operations[i] == "D" && j != 0){
                ans.push_back(2*ans[j-1]);
                j++;
            }
            else if ( operations[i] == "C"){
                ans.erase(ans.begin()+j);
                j--;
            }
            else if ( operations[i] == "+" && j>1){
                ans.push_back(ans[j-1]+ans[j-2]);
                j++;
            }
        }
        int sum = 0;
        for(int i =0; i<ans.size(); i++) sum+=ans[i];
        return sum;
    }
};