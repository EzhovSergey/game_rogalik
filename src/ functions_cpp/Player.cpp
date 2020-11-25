#include "../classes_h/Player.h"

void Player::drawPlayer() const {
    terminal_put(x_, y_, symbol_);
}

int Player::getPositionX() const  {return x_;}
int Player::getPositionY() const  {return y_;}

void Player::setPositionX(int x) {x_ = x;}
void Player::setPositionY(int y) {y_ = y;}
