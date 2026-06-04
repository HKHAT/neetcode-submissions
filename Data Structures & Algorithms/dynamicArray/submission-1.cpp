class DynamicArray {
    private:
        std::vector<int> vec;
public:

    DynamicArray(int capacity) 
    {
        if(capacity > 0)
            vec.reserve(capacity);
    }

    int get(int i) 
    {
        return(vec[i]);
    }

    void set(int i, int n) 
    {
        vec[i] = n;
    }

    void pushback(int n) 
    {
        if(vec.capacity() == vec.size())
            resize();
        vec.push_back(n);
    }

    int popback() 
    {
        int last = vec.back();
        vec.pop_back();
        return last;
    }

    void resize() 
    {
        vec.reserve(vec.capacity() * 2);
    }

    int getSize() 
    {
        return vec.size();
    }

    int getCapacity() 
    {
        return vec.capacity();
    }
};