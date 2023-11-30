#include "Player.h"

std::string Player::str_position[] = {"PG", "SG", "PF", "SF", "C"};

std::ostream &operator<<(std::ostream &os, const Player &player) {
    os << player.name << "(" << player.years << "):" << Player::str_position[player.position];
    return os;
}