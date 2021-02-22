#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
    friend std::ostream &operator<<(std::ostream &os, const Player &p);

private:
    static int num_players;
    std::string name;
    int health;
    int xp;
    int *data;
public:
    Player(const Player &p);

    Player(Player &&p) noexcept;

    explicit Player(std::string name = "no name", int health = 0, int xp = 0,int data = 0);

    ~Player();

    static int get_num_player();

    std::string get_name() const;

    void set_name(std::string name);

    int get_health() const;

    void set_health(int health);

    int get_xp() const;

    void set_xp(int xp);

    int get_data() const;

    void set_data(int value);
};


#endif //PLAYER_H
