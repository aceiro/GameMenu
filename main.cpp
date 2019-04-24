        //!
//! @file       main.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Main file of the project. Just for testing purposes.
//!

#include "MenuTemplate/MenuTemplate.hpp"
#include <iostream>

using std::cout;
using std::endl;

//!
//! @brief  Main function of MenuTemplate.
//!
//! @return int
//!
int main() {
    // Example menu for a game:
    MenuTemplate::MenuTemplate MenuA;

    MenuA.Title = "\t\tMenuTemplate 1.04";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor("> ");

    // Q1) Adicionar novos itens para o GameMenu
    MenuA.addEntry("GAME_NEW"     ,  "New game");
    MenuA.addEntry("GAME_LOAD"    ,  "Load save state");
    MenuA.addEntry("GAME_EXIT"    ,  "Exit game");
    MenuA.addEntry("GAME_OPTIONS" ,  "Game options");
    MenuA.addEntry("GAME_VIDEO"   ,  "Video options");
    MenuA.addEntry("GAME_SOUND"   ,  "Sound options");
    MenuA.addEntry("GAME_CONTROLS",  "Controls");

    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(2);

    cout << MenuA.displayGetName() << endl;
}
