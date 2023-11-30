#include "PlayerStatistics.h"

int PlayerStatistics::total_points() const {
    return one_point_score + 2 * two_point_score + 3 * three_point_score;
}

int PlayerStatistics::total_rebounds() const {
    return off_rebounds + def_rebounds;
}


std::ostream &operator<<(std::ostream &os, PlayerStatistics &stats) {
    os << *stats.get_player() << "#PTS:" << stats.total_points() << "#RB:" << stats.total_rebounds() << "#AS:"
       << stats.assists << std::endl;
    return os;
}

void PlayerStatistics::increase_one_point_try(int value) {
    one_point_try += value;
}

void PlayerStatistics::increase_two_point_try(int value) {
    two_point_try += value;
}

void PlayerStatistics::increase_three_point_try(int value) {
    three_point_try += value;
}

void PlayerStatistics::increase_one_point_score(int value) {
    one_point_score += value;
    one_point_try++;
}

void PlayerStatistics::increase_two_point_score(int value) {
    two_point_score += value;
    two_point_try++;
}

void PlayerStatistics::increase_three_point_score(int value) {
    three_point_score += value;
    three_point_try++;
}

void PlayerStatistics::increase_offensive_rebounds(int value) {
    off_rebounds += value;
}

void PlayerStatistics::increase_defensive_rebounds(int value) {
    def_rebounds += value;
}

void PlayerStatistics::increase_assists(int value) {
    assists += value;
}












