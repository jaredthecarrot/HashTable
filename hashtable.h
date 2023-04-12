#ifndef hashtable_h
#define hashtable_h
#define N 13
#include <cstdlib>
#include <list>

class Node{
    public:
    int data;
    Node* next;
};

class LinkedList{
    private:
    Node *head, *tail;
    public:
    LinkedList();
    void addNode(int val);
};

LinkedList::LinkedList(){
    head = nullptr;
    tail = nullptr;
}

void LinkedList::addNode(int val){
    Node *temp = new Node();
    temp->data = val;
    temp->next = nullptr;
    if (head == nullptr){
        head = temp;
        tail = temp;
        temp = nullptr;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

class hashtable_lp{
    private:
    int table[N];
    int n;
    int collisions;
    public:
    int size();
    hashtable_lp();
    int h(int k);
    int find(int k);
    int put(int k);
    int erase(int k);
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
    //table?
    int n;
    int collisions;
    public:
    int size();
    hashtable_sc();
    int h(int k);
    int find(int k);
    int put(int k);
    int erase(int k);
    int collision();

};

hashtable_sc::hashtable_sc(){
    n = 0;
    collisions = 0;
}

int hashtable_sc::size(){return n;}

int hashtable_sc::collision(){return collisions;}

int hashtable_sc::h(int k){return k % N;}

int hashtable_sc::find(int k){
    return NULL;
}

int hashtable_sc::put(int k){
    return NULL;
}

int hashtable_sc::erase(int k){
    return NULL;
}
#endif