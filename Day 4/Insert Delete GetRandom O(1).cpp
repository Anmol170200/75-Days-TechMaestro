#include<unordered_map>

class RandomizedSet {
public:
    unordered_map<int,int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        bool ans = s.count(val);
        s[val]++;
        return (!ans);
    }
    
    bool remove(int val) {
        bool ans = s.count(val);
        if( ans ){
            s.erase(val);
        }
        
        return (ans);
    }
    
    int getRandom() {
        int n = rand() % s.size();
        auto it = next(s.begin(), n);
        
        return it->first;
    }
};