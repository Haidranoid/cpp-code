#include <iostream>

#ifndef _PLAYER_H
#define _PLAYER_H


class Player {
    //friend class Account_Test;
    //friend void Account_Test::display_player(Player &player);
private:
    // attributes
    std::string name;
    int health;
    int xp;

    // static attributes
    static int num_players;
public:
    // constructors
    Player(std::string name = "Default", int health = 0, int xp = 0);

    // copy constructor
    Player(const Player &source);

    ~Player();

    // getters and setters
    std::string get_name() const;

    void set_name(std::string name);

    int get_health() const;

    void set_health(int health);

    int get_xp() const;

    void set_xp(int xp);

    // methods
    void talk(std::string text_to_say);

    bool is_dead();

    // statics methods
    static int get_num_players();
};

#endif //_PLAYER_H
