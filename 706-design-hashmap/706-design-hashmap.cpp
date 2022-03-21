class MyHashMap {
public:
    unordered_map<int,int>result;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        result[key] = value;
    }
    
    int get(int key) {
        if(result.find(key) == result.end()) return -1;
        return result[key];
    }
    
    void remove(int key) {
        result.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */