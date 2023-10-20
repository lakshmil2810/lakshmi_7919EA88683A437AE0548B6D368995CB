#include <iostream>

class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Batsman batsman;
    Bowler bowler;

    // Call the play() method for the Batsman object
    batsman.play();

    // Call the play() method for the Bowler object
    bowler.play();

    return 0;
}
