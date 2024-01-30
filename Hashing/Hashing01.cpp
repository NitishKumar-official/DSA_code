#include<iostream>
#include<vector>
#include<list>
using namespace std;


class hashing{
    vector<list<int>> hashtable;
    int buckets;

    hashing(int size){
        buckets=size;
        hashtable.resize(size);
    }
    int hashvalue(int key){
        return key%buckets;
    }
    void add(int key){
        int idx=hashvalue(key);
        hashtable[idx].push_back(key);
    }

};

int main(){
    return 0;
}