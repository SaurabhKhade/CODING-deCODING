class RandomizedSet {
    vector<int> vals;
    unordered_map<int,int> map;
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        if(map.find(val)!=map.end()) return false;
        vals.push_back(val);
        map[val] = vals.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(map.find(val)==map.end()) return false;
        int n = vals.back();
        vals[map[val]] = n;
        vals.pop_back();
        map[n] = map[val];
        map.erase(val);
        return true;
    }
    
    int getRandom() {
        return vals[rand()%vals.size()];
    }
};