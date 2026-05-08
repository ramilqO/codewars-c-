#include <string>
#include <iostream>

enum class Weapon {
    rock, paper, scissors
};

std::string rps(Weapon p1, Weapon p2) {
    if (p1 == p2) { return "Draw!"; }

    if ((p1 == Weapon::rock && p2 == Weapon::scissors) ||
        (p1 == Weapon::paper && p2 == Weapon::rock) || (p1 == Weapon::scissors && p2 == Weapon::rock)) {
        return "Player 1 won!";
    }

    return "Player 2 won!";
}

int main() {
    std::cout << rps(Weapon::rock, Weapon::paper);
    return 0;
}
