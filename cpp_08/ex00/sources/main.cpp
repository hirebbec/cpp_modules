//
// Created by Hilaria Rebbeca on 9/28/22.
//
#include "./../includes/easyfind.h"
#include "iostream"
#include "vector"
#include "list"
#include "set"
#include "map"

int main( void ) {
    std::vector<int> v;
    std::list<int> l;
    std::set<int> s;

    for (int i = 0; i < 100; i++){
        v.push_back(i);
        l.push_back(i);
        s.insert(i);
    }
    getchar();
    easyfind(v, 1);
    easyfind(l, 200);
    easyfind(s, 3);
}