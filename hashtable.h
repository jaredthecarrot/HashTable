#ifndef hashtable_h
#define hashtable_h
#define N 13
#include <cstdlib>
#include <list>

std::list<int> list;

class hashtable{
    private:
    int table[N];
    public:
    hashtable();
    int h(int k);
    // find
    // put
    // erase
    // need linear probing and chaining
    // requires linked list for chaining
    // count collisions

};

int h(int k){return k % N;}

#endif