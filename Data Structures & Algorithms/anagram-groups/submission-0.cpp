class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<pair<string,int>> p;

    for(int j=0; j<strs.size(); j++){
        p.push_back({strs[j],j});
    }

    for(auto& i : p){
        sort(i.first.begin(),i.first.end());
        cout<<i.first<<"-"<<i.second<<" ";
    }

    // sort array
    sort(p.begin(), p.end());
    vector<string> group;
    vector<vector<string>> result;

    // put first string
    group.push_back(strs[p[0].second]);

    for(int i=1; i<p.size(); i++){
        if(p[i].first == p[i-1].first){
            group.push_back(strs[p[i].second]);
        }
        else{
            result.push_back(group);
            group.clear();
            group.push_back(strs[p[i].second]);

        }
    }
    result.push_back(group);

    
    return result;
    }
};
