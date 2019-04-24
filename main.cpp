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

    // Q2) Modificar a descrição do Menu do game para “Neverwinter Nights Simple Menu”
    MenuA.Title = "\t\tNeverwinter Nights Simple Menu";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor("> ");
    MenuA.setCursorLength( MenuA.getCursor().length() );

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

    cout << "Menu Key: " << MenuA.displayGetName() << endl;
    cout << "Cursor String type: " << MenuA.getCursor() << endl;
    cout << "Cursor Length: " << MenuA.getCursorLength() << endl;
}
