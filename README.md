# Game Menu
This is a Game Sample Menu based on MenuTemplate project available on [Hasenfresser](https://github.com/Hasenfresser/MenuTemplate). This is 
an easy template for simple menus in Linux and Windows terminals.


# Download and Compilation

First, clone the repository using the command line below:
> git clone https://github.com/aceiro/GameMenu.git

To compile this project you should use the command line below:

> g++ main.cpp MenuTemplate/MenuTemplate.cpp MenuTemplate/Entry.cpp MenuTemplate/ExternFunctions/getChar.cpp -o GameMenu

# Linux directive

if you use Linux system operation you must use the ``#define LINUX`` to be abble to compile using C++. In other case (using Windows) you must not change anyone directive because the original project is compile with this strategy.

## Actual version 2.00 (2019-04-24):

First commit to be eable to use in lessons and C++ course in the year 2019.

## Actual version 1.04 (2017-12-28):
Changed Doxygen comments to C++ style.
Removed old include guards and replaced them with #pragma once.

### Version 1.03:
Changed all parameters to references. Fixed some small issues in Doxygen file.

### Version 1.02:
Data types normalized. Fixed small issues at WINDOWS build in function getChar().

### Version 1.01:
MenuTemplate now works at Linux and Windows terminals! You just have to set the preprocessor directive to "LINUX" or "WINDOWS" in the source code.

### Version 1.00:
Initial version. MenuTemplate only works in Linux terminal.


## Installation:
Just copy the folder "MenuTemplate" into your project (main folder) and include "MenuTemplate\MenuTemplate.hpp" in your source code.


## Bug reports:
I'm happy if you'll send some helpful bug reports to improve the software.


## Wiki
For more informations, you can have a look at the official wiki! (under construction, stay tuned)


Greetings,
Hasenfresser