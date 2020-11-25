#ifndef MAIN_CPP_PLAYER_H
#define MAIN_CPP_PLAYER_H

class Player{
    const char symbol_ = '@';
    int x_, y_;
public:
    Player(int x = 1, int y = 1): x_(x), y_(y){}
    int getPositionX() const;
    int getPositionY() const;

    void setPositionX(int x);
    void setPositionY(int y);

    void drawPlayer() const;
};

#endif
