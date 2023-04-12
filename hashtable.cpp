#include "hashtable.h"
#include <iostream>

using std::cout, std::endl;

int main()
{
    hashtable_lp table1;
    table1.put(15);
    table1.put(25);
    table1.put(35);
    table1.put(45);
    cout << table1.find(15) << '\n';
    cout << table1.find(25) << '\n';
    cout << table1.find(45) << '\n';
    return 0;
}