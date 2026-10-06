class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int, int> mp;
        vector<int> res;

        for(int i = 0; i< arr.size(); i++){
            int first = arr[i] ;
            int sec  = tar - first;
            if(mp.find(sec) != mp.end()){
                res.push_back(i);
                res.push_back(mp[sec]);
                break;

            }
            mp[first] = i;


        }
        return res;
        
    }
};