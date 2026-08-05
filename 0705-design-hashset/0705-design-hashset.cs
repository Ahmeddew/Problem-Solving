public class MyHashSet {
    private bool[] numSet;
    public MyHashSet() {
        numSet = new bool[1000001];
    }
    
    public void Add(int key) {
        numSet[key] = true;
    }
    
    public void Remove(int key) {
        numSet[key] = false;
    }
    
    public bool Contains(int key) {
        return numSet[key];
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.Add(key);
 * obj.Remove(key);
 * bool param_3 = obj.Contains(key);
 */