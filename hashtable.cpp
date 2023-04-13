#include "hashtable.h"
#include <iostream>

using std::cout, std::endl;

int main()
{
    hashtable_lp table1;
    hashtable_sc table2;
    // testing code. uncommented so you can see the relevant information in terminal
    // table1 uses linear probing, table2 uses separate chaining
    table1.put(15);
    table1.put(25);
    table1.put(35);
    table1.put(45);
    cout << table1.find(15) << '\n';
    cout << table1.find(25) << '\n';
    cout << table1.find(45) << '\n';
    table1.erase(45);
    table1.erase(25);
    table2.put(15);
    cout << table2.find(15) << '\n';
    table2.put(15+13); // modulus addition allows for purposeful collisions to test collision function and LL structure
    table2.put(15+13+13);
    table2.put(15+13+13+13);
    cout << table2.collision();
    table2.erase(15+13+13);

    return 0;
}