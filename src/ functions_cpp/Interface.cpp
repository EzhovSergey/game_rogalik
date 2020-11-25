#include "../classes_h/Interface.h"

void Interface::movePlayer() {
    if(controls_.isPressUp()) upStep();
    if(controls_.isPressDown()) downStep();
    if(controls_.isPressRight()) rightStep();
    if(controls_.isPressLeft()) leftStep();
}

void Interface::upStep() {
    if (player_.getPositionY() > 0) player_.setPositionY(player_.getPositionY() - 1);
}
void Interface::downStep() {
    if (player_.getPositionY() < window_.height - 1) player_.setPositionY(player_.getPositionY() + 1);
}
void Interface::rightStep() {
    if(player_.getPositionX() != window_.width - 1) player_.setPositionX(player_.getPositionX() + 1);
}
void Interface::leftStep() {
    if(player_.getPositionX() != 0) player_.setPositionX(player_.getPositionX() - 1);
}