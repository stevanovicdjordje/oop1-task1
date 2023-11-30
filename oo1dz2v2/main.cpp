#include "PlayerStatistics.h"

int main() {
    Player player("Djordje", 21, Position::PG);
    PlayerStatistics player_stats;
    player_stats.set_player(player);

    player_stats.increase_assists(2);
    player_stats.increase_defensive_rebounds(3);
    player_stats.increase_one_point_score(2);
    player_stats.increase_offensive_rebounds();
    player_stats.increase_three_point_score(3);
    player_stats.increase_two_point_score(5);
    player_stats.increase_offensive_rebounds(10);

    std::cout << player << std::endl;
    std::cout << player_stats;
    return 0;
}