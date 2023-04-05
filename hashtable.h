#ifndef hashtable_h
#define hashtable_h
#define N 13
#include <cstdlib>

class hashtable_chaining{
    private:
    int S[N];
    int n;
    public:
    hashtable_chaining();
    int h(int k);
    int find(int k);
    int put(int k);
    int erase(int k);
    int size();
};

hashtable_chaining::hashtable_chaining(){
    for(int i = 0; i < N; i++)
        S[i] = -1;
    n = 0;
}

int hashtable_chaining::size(){return n;}

int hashtable_chaining::h(int k){return k % N;}

int hashtable_chaining::find(int k){
    return S[h(k)];
}

int hashtable_chaining::put(int k){
    int t = S[h(k)];
    if (t == -1)
        n++;
    return t;
}

int hashtable_chaining::erase(int k){
    int t = S[h(k)];
    if (t != -1)
        n--;
    return t;
}

class hashtable_probing{
    private:
    int S[N];
    int n;
    public:
    hashtable_probing();
    int h(int k);
    int find(int k);
    int put(int k);
    int erase(int k);
    int size();
};

hashtable_probing::hashtable_probing(){
    for(int i = 0; i < N; i++)
        S[i] = -1;
    n = 0;
}

int hashtable_probing::size(){return n;}

int hashtable_probing::h(int k){return k % N;}

int hashtable_probing::find(int k){
    int i = h(k);
    int p = 0;
    do {
        int c = S[i];
        // TODO
    } while (p != N);
}

int hashtable_probing::put(int k){
    int t = S[h(k)];
    if (t == -1)
        n++;
    return t;
}

int hashtable_probing::erase(int k){
    int t = S[h(k)];
    if (t != -1)
        n--;
    return t;
}
#endif