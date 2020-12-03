//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "Player.h"

using namespace std;

// constructors -------------------------
Player::Player(std::string name, int health, int xp)
        : name{name}, health{health}, xp{xp} {
    cout << "Three-args constructor called" << endl;
    Player::num_players++;
    //this->name = name;
    //this->health = health;
    //this->xp = xp;
}

// copy constructor
Player::Player(const Player &source)
      //: name{source.name}, health{source.health}, xp{source.xp} {
        : Player(source.name, source.health, source.xp) {
    cout << "Copy constructor called from: " << source.name << endl;
}

Player::~Player() {
    cout << "Destructor called for: " << this->name << endl;
    Player::num_players--;
}


// getters and setters ----------------------
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

// methods -----------------------------------
void Player::talk(std::string text_to_say) {
    cout << name << " says: " << text_to_say << endl;
}

bool Player::is_dead() {
    return false;
}

// static initialization ----------------
int Player::num_players = 0;

// static methods -----------------------------
int Player::get_num_players() {
    return Player::num_players;
}

