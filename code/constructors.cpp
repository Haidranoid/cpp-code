//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "./../classes/account/Account.h"
#include "./../classes/player/Player.h"

using namespace std;

int constructors() {
    // -----------------------------------------------

    Account frank_account;
    frank_account.set_name("Frank's account");

    cout << frank_account.get_name() << endl;

    frank_account.setBalance(5000.0);
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    // -----------------------------------------------

    Account *enemy_account = new Account("Enemy's account");

    cout << enemy_account->get_name() << endl;

    enemy_account->deposit(1250.0);
    enemy_account->withdraw(100.0);

    delete enemy_account;

    // -----------------------------------------------

    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};
    Player hero{"Hero", 100};

    // copy constructor -----------------------------------------------
    Player player1 = Player("Player 1", 200, 500);
    //Player player2 {player1};
    Player player2 = Player(player1);
    Player *player3 = new Player(player2);

    cout << "Player 1 name: " << player1.get_name() << endl;

    cout << "Player 2 name: " << player2.get_name() << endl;
    player2.set_name("Player 2 updated");
    cout << "Player 2 name: " << player2.get_name() << endl;

    cout << "Player 3 name: " << player3->get_name() << endl;
    player3->set_name("Player 3 updated");
    cout << "Player 3 name: " << player3->get_name() << endl;

    delete player3;

    return 0;
}



