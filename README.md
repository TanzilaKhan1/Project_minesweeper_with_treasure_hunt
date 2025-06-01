# Minesweeper with Treasure Hunt

**Minesweeper with Treasure Hunt** is a solo puzzle game built with C++ and the Qt framework, inspired by the classic Minesweeper but enhanced with a story mode and treasure-hunting twist. 

## Game Objective

Reveal all non-mine tiles on a grid without triggering any mines. Use number clues to deduce mine locations and flag them. In Story Mode, players must complete sequential difficulty levels to win.

## Game Modes

### Normal Mode
- **Easy**: 10×10 grid, 10 mines  
- **Medium**: 15×15 grid, 40 mines  
- **Hard**: 25×25 grid, 80 mines  
- **Custom**: Set your own rows, columns, and mines (75% of total blocks ≥ mines ≥ 12% of total blocks)

### Story Mode
Progress through Easy → Medium → Hard levels in a continuous journey. Fail at any level and the story ends.

## Key Features

- Timer and flag counter
- Mine flagging mechanism
- High Score tracking per level
- Custom board validation with user-friendly prompts


## Project Structure

- **Main Window**: Launch point with navigation to game modes and information
- **Game Board**: Grid-based tile system with mine logic
- **Menu & UI Windows**: Controls for New Game, High Scores, About, and Quit
- **Dialogs**: Pop-ups for instructions, win/loss messages, and invalid inputs

## Built With

- **Language**: C++
- **Framework**: Qt (for GUI and cross-platform support)

## Requirements

- Qt 5.x or 6.x
- C++ Compiler (e.g., GCC or MSVC)
- Unix-based OS recommended (tested environments)

## How to Run

1. Clone the repository:
   git clone https://github.com/yourusername/Project_minesweeper_with_treasure_hunt.git

2. Open the project in Qt Creator or build using qmake and make:
   qmake  
   make  
   ./minesweeper

## Educational Value

This game encourages:

- Logical reasoning  
- Pattern recognition  
- Spatial awareness  
- Problem-solving  

## Credits

This project was developed collaboratively by:

- [**Tanzila Khan**] : Designed and implemented the core game engine (`game_model`), high score functionality, and custom level configuration system.
- [**Taif Ahmed Turjo**] : Developed key gameplay interfaces including the main game screen, resource integration, and story mode functionality.
- [**Amio Rashid**] : Created and interconnected all primary UI windows, including main menu, level selection, and about sections; authored `main.cpp` and handled application flow.

GUI and functionality powered by the Qt Framework.


## Contributors

[![Tanzila Khan](https://img.shields.io/badge/GitHub-TanzilaKhan1-blue?logo=github)](https://github.com/TanzilaKhan1)
[![Taif Ahmed Turjo](https://img.shields.io/badge/GitHub-taifONduty-blue?logo=github)](https://github.com/taifONduty)
[![Amio Rashid](https://img.shields.io/badge/GitHub-Flamy--A-blue?logo=github)](https://github.com/Flamy-A)


## License

This project is for educational and recreational purposes combining classic Minesweeper logic with an engaging treasure-hunt experience. You may adapt it under an open-source license of your choice.

---

Enjoy the challenge of Minesweeper, now with a treasure-hunting twist!
