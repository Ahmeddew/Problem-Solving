 public class MyHashSet {

        public MyHashSet() {
        
        }

         List<int> st = new();
        public void Add(int key)
        {
            if (!Contains(key))
            {
                st.Add(key);
            }
        }
    
        public void Remove(int key) {
            if (Contains(key))
            {
                st.Remove(key);
            }
        }
    
        public bool Contains(int key) {
             foreach(int i in st){
                if (i == key )return true;
              }
            return false ;
        }
    }