#ifndef OO1DZ2V2_PLAYERSTATISTIC_H
#define OO1DZ2V2_PLAYERSTATISTIC_H
#include "Player.h"
#include <iostream>

class PlayerStatistics {
    Player* player;
    int one_point_try = 0, two_point_try = 0, three_point_try = 0;
    int one_point_score = 0, two_point_score = 0, three_point_score = 0;
    int off_rebounds = 0, def_rebounds = 0, assists = 0;
public:
    void increase_one_point_try(int default_value = 1);
    void increase_two_point_try(int default_value = 1);
    void increase_three_point_try(int default_value = 1);
    void increase_one_point_score(int default_value = 1);
    void increase_two_point_score(int default_value = 1);
    void increase_three_point_score(int default_value = 1);
    void increase_offensive_rebounds(int default_value = 1);
    void increase_defensive_rebounds(int default_value = 1);
    void increase_assists(int default_value = 1);
    Player* get_player() {
        return player;
    }
    void set_player(Player& player1) {
        player = &player1;
    }
    int total_points() const;
    int total_rebounds() const;
    friend std::ostream& operator<<(std::ostream& os, PlayerStatistics& stats);
};


#endif //OO1DZ2V2_PLAYERSTATISTIC_H
