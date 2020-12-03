//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include <vector>
#include "../classes/poo/move/Move.h"

using namespace std;

int move_constructor() {
    vector<Move> vec;

    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    return 0;
}



