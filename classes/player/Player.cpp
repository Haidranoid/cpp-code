#include "Player.h"

int Player::num_players = 0;

int Player::get_num_player() {
    return Player::num_players;
}

std::ostream &operator<<(std::ostream &os, const Player &p) {
    os << "{ " << p.name << "," << p.health << "," << p.xp << "}";
    return os;
}


Player::Player(std::string name, int health, int xp, int data)
        : name{name}, health{health}, xp{xp} {
    this->data = new int;
    *this->data = data;

    Player::num_players++;
    std::cout << "three args called" << std::endl;
}

Player::Player(const Player &p)
        : Player(p.name, p.health, p.xp, *p.data) {
    std::cout << "copy constructor called" << std::endl;
}

Player::Player(Player &&p) noexcept
        : name{p.name}, health{p.health}, xp{p.xp}, data{p.data} {
    p.data = nullptr;
    std::cout << "move constructor called" << std::endl;
}

Player::~Player() {
    if (this->data != nullptr) {
        std::cout << "destructing for " << this->name << std::endl;
    } else {
        std::cout << "destructing for nullptr" << std::endl;
    }
    delete this->data;
}

std::string Player::get_name() const {
    return this->name;
}

void Player::set_name(std::string name) {
    this->name = name;
}

int Player::get_health() const {
    return this->health;
}

void Player::set_health(int health) {
    this->health = health;
}

int Player::get_xp() const {
    return this->xp;
}

void Player::set_xp(int xp) {
    this->xp = xp;
}

int Player::get_data() const {
    return *this->data;
}

void Player::set_data(int value) {
    *this->data = value;
}
