import java.util.ArrayList;

class MyHashMap {
    ArrayList<Integer> k = new ArrayList<>();
    ArrayList<Integer> v = new ArrayList<>();
    public MyHashMap() 
    {
        
    }
    
    public void put(int key, int value) 
    {
        if (k.contains(key))
        {
            v.set(k.indexOf(key), value);
            return;
        }
        k.add(key);
        v.add(value);
    }
    
    public int get(int key) 
    {
        if (!k.contains(key))
            return -1;
        return v.get(k.indexOf(key));
    }
    
    public void remove(int key) 
    {
        v.remove(k.indexOf(key));
        k.remove(key);
    }
}