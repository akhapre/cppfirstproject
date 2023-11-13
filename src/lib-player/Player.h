#include <string>
class Player
{
private:
    std::string name;
    int health;
    int xp;
    static int num_players;

public:
    std::string get_name() const;

    void set_name(std::string name_val);

    static int get_num_players();

    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health, int xp);

    ~Player();
};