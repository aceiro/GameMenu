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

    // Q5) Adicionar o "heart" para o cursor Passo [1/x]
    // Comentário:
    // ----------------------------------------------------
    // Nesse caso, o primeiro passo é incluir o código Hexadecimal
    // que representa a informação do coração para uma variável,
    // como abaixo.
    const string heart = "\xe2\x99\xa5 ";



    // Q2) Modificar a descrição do Menu do game para “Neverwinter Nights Simple Menu”
    // Comentário:
    // ----------------------------------------------------
    // como o objetvo é acesso via MenuA.[método ou atributo]
    // usamos o atributo "Title" para atribuir uma nova string do menu
    // observe que a forma de atribuição usa o operador "=" e não
    // o operador "."

    MenuA.Title = "\t\tNeverwinter Nights Simple Menu";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    
    // Q5)  (continua Passo [2/x])
    // é preciso alterar a chamada da rotina para incluir 
    // uma chamada parametrizada agora
    MenuA.setCursor(heart, true);


    MenuA.setCursorLength( MenuA.getCursor().length() );

    // Q1) Adicionar novos itens para o GameMenu
    // Comentário:
    // ----------------------------------------------------
    // As entradas novas foram adicionadas para o addEntry padrão
    // a variável MenuA contém os métodos e atributos da classe
    // portanto, usamos MenuA.[método ou atributo]

    // Q6)
    // ver alteração no método base addEntry em MenuTemplate.cpp
    MenuA.addEntry_Q6("GAME_NEW"     ,  "New game");
    MenuA.addEntry_Q6("GAME_LOAD"    ,  "Load save state");
    MenuA.addEntry_Q6("GAME_EXIT"    ,  "Exit game");
    MenuA.addEntry_Q6("GAME_OPTIONS" ,  "Game options");
    MenuA.addEntry_Q6("GAME_VIDEO"   ,  "Video options");
    MenuA.addEntry_Q6("GAME_SOUND"   ,  "Sound options");
    MenuA.addEntry_Q6("GAME_CONTROLS",  "Controls");

    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(2);

    // Comentário:
    // ----------------------------------------------------
    // Para as questões Q3) Q4)
    // adicionei o seguinte código para ilsutrar os métodos
    // getCursor() e também getCursorLength();
    // para entender como foram implementados, acesse a classe
    // MenuTemplate e suas funções membros
    cout << "Menu Key: " << MenuA.displayGetName() << endl;
    cout << "Cursor String type: " << MenuA.getCursor() << endl;
    cout << "Cursor Length: " << MenuA.getCursorLength() << endl;
}
