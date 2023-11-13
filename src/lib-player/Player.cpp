#include <string>
#include "Player.h"

std::string Player::get_name() const
{
    return name;
}

void Player::set_name(std::string name_val)
{
    name = name_val;
}

Player::Player() : name{"None"}, health{0}, xp{0} {num_players++;}
Player::Player(std::string name_val) : name{name_val}, health{0}, xp{0} {num_players++;}
Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val} {num_players++;}

Player::~Player() {
    num_players--;
}

int Player::num_players = 0;

int Player::get_num_players() {
    return Player::num_players;
}