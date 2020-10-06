#include "game_timer.h"
#include "keypad_timer.h"
#include "keypad.h"
#include "lcd.h"
#include "game_manager.h"
#include "button.h"

int main() {
    LCDconfigure();
    restartGame();
    keypadTimerConfigure();
    gameTimerConfigure();
    keypadConfigure();
    setupButtons();
    
    while (1) {}

    return 0;
}