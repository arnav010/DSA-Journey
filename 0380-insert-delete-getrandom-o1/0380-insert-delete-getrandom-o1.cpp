class RandomizedSet {
public:
vector<int>v;
unordered_map<int,int>mp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;

        v.push_back(val);
        mp[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()) return false;

        int idx = mp[val];   //Storing the index whose value needs to be removed
        int lastElement  = v.back();  //Swapping the value to be removed with the last element 
        v.back() = val;
        v[idx] = lastElement;
        mp[lastElement] = idx;//updating the lastElement index with the new idx

        v.pop_back();//removing the last elemnt after being swapped...this is the element that needs to be removed
        mp.erase(val);
        return true;

    }
    
    int getRandom() {

        int n = v.size();
        int randomIndex = rand()%n;
        return v[randomIndex];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */