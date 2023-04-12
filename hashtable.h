#ifndef hashtable_h
#define hashtable_h
#define N 13
#include <cstdlib>
#include <list>

std::list<int> list;

class hashtable_lp{
    private:
    int table[N];
    int n;
    int collisions;
    public:
    int size();
    hashtable_lp();
    int h(int k);
    // find
    int find(int k);
    // put
    int put(int k);
    // erase
    int erase(int k);
    // need linear probing
    int collision();

};

hashtable_lp::hashtable_lp(){
    for (int i = 0; i < N; i++)
        table[i] = NULL;
    n = 0;
    collisions = 0;
}

int hashtable_lp::size(){return n;}

int hashtable_lp::collision(){return collisions;}

int hashtable_lp::h(int k){return k % N;}

int hashtable_lp::find(int k){
    int i = h(k);
    int p = 0;
    for (p; p < N; p++){
        if (table[i] == k)
            return i;
        else
            i = (i + 1) % N;
        return NULL;
    }
    return 0;
}

int hashtable_lp::put(int k){
    int i = h(k);
    int p = 0;
    for (p; p < N; p++){
        if (!table[i]){
            table[i] = k;
            n++;
            return i;
        }
        else
            i = (i + 1) % N;
            collisions++;
    }
    return 0;
}

int hashtable_lp::erase(int k){
    int i = find(k);
    if (i == NULL)
        return NULL;
    else{
        table[i] = NULL;
        n--;
        return i;
    }
}

class hashtable_sc{
    private:
    int table[N];
    int n;
    int collisions;
    public:
    int size();
    hashtable_sc();
    int h(int k);
    // find
    int find(int k);
    // put
    int put(int k);
    // erase
    int erase(int k);
    // need separate chaining
    int collision();

};

hashtable_sc::hashtable_sc(){
    for (int i = 0; i < N; i++)
        table[i] = NULL;
    n = 0;
    collisions = 0;
}

int hashtable_sc::size(){return n;}

int hashtable_sc::collision(){return collisions;}

int hashtable_sc::h(int k){return k % N;}

//  find

// put

// erase
#endif