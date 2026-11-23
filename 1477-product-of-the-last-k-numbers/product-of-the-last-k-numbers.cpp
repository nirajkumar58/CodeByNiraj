class ProductOfNumbers {
public:
    vector<int> v;
    // int res=1;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int res=1;
        int i=v.size()-1;
        while(k--){
            res*=v[i];
            i--;
        }
        return res;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */