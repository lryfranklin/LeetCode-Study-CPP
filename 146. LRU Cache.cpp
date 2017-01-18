class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        auto it = map.find(key);
        if (it == map.end()) return -1;
        lis.splice(lis.begin(), lis, it->second);
        return it->second->second;
    }

    void put(int key, int value) {
        auto it = map.find(key);
        if (it != map.end()) lis.erase(it->second);
        lis.push_front(make_pair(key, value));
        map[key] = lis.begin();
        if (map.size() > cap){
            int k = lis.rbegin()->first;
            lis.pop_back();
            map.erase(k);
        }
    }
private:
    int cap;
    list<pair<int, int> > lis;
    unordered_map<int, list<pair<int, int> >::iterator> map;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
