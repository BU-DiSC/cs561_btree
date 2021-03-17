#include <iostream>
#include "betree.h"

using namespace std; 

int main()
{
    BeTree<int,int> tree("manager", "./tree_dat", 4096, 10000);

    int n = 100000;
    for(int i = 0; i < n; i++)
    {
        tree.insert(i+1, i+1);
    }

    int nops = n;

    int key = 0;
    for(int i =0; i < nops; i++)
    {
        if (!tree.query(i + 1))
        {
            cout << "Key = " << i << " Not found" << endl;
            key++;
        }
    }
    cout << "Not found Keys = " << key << endl;

    return 1; 
}