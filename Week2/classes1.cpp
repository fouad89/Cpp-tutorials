#include <iostream>
using namespace std;

/*Using OOP to create a class to move a player in a game*/

class Player{
    // creating the class and declaring public variables
public:
    int x, y;
    double speed;

    void Move(int xa, int ya){
        x += xa * speed;
        y += ya *speed;
    }

};


int main(){
    // creating an object and an instance of the class
    Player player;
    player.x = 1;
    player.y = 1;
    player.Move(1,2);

    return 0;
}