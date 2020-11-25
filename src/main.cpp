#include <BearLibTerminal.h>
#include " functions_cpp/Player.cpp"
#include " functions_cpp/Controls.cpp"
#include " functions_cpp/Interface.cpp"

int main() {
    terminal_open();

    Window window;
    Player player;
    Controls controls;
    Interface interface(window, player, controls);

    terminal_refresh();

    player.drawPlayer();
    terminal_refresh();

    while (true) {
        terminal_clear();

        controls.update();

        if(controls.isExit()) break;

        interface.movePlayer();
        player.drawPlayer();

        terminal_refresh();
    }
 }
