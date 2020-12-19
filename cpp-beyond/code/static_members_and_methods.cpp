//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "../../cpp-beyond/classes/poo/player/Player.h"

using namespace std;

int static_members_and_methods() {
    {
        Player player1;
        Player player2;
        Player player3 = Player(player1);
        Player player4 = Player(player2);
        cout << "Num of players: " << Player::get_num_players() << endl;
    }

    cout << "Num of players: " << Player::get_num_players() << endl;


    return 0;
}



