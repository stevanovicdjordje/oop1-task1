#include <iostream>
#include <string>

enum Position {PG, SG, PF, SF, C};

class Player {
    std::string name;
    int years;
    Position position;
    static std::string str_position[];

public:
    Player(const std::string& playerName, int player_years, Position player_position)
            : name(playerName), years(player_years), position(player_position) {}

    Player(const Player& other) = delete;
    Player& operator=(const Player& player) = delete;
    std::string get_name() const { return name; }
    int get_years() const { return years; }
    Position get_position() const { return position; }

    void set_position(Position new_position) { position = new_position; }

    friend std::ostream& operator<<(std::ostream& os, const Player& player);
};

