class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // sort both arrays by position decreasing to increasing
        if(speed.size() <= 1){
            return 1;
        }
        vector<pair<int,int>> pairs;
        for(int i = 0 ; i<speed.size();i++){
            pairs.push_back({position[i],speed[i]});
        }

        sort(pairs.begin(),pairs.end(), [](const auto& a, const auto& b){
            return a.first > b.first;
        });

        stack<float> fleet;
        float max = 0;
        int ans = 0;
        for(int i = 0 ; i<pairs.size(); i++){
            int distance = target - pairs[i].first;
            float time = float(distance) / pairs[i].second;
            if(time>max){
                max=time;
                ans++;
            }
        }
 
        return ans;
    }
};
