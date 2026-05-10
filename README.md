# Tic Tac Toe - Console-Based Mini Game in C++

A console-based **Tic Tac Toe** game built in C++ that demonstrates core programming concepts such as **loops**, **arrays**, and **conditional logic**.

---

## 📌 Project Overview

This project is a two-player Tic Tac Toe game that runs in the terminal. It showcases:

- Use of **2D arrays** to represent the game board
- **Loops** for game flow and move validation
- **Conditional statements** for win/draw detection
- **Functions and classes** for modular, clean code
- **Replay functionality** to play multiple rounds

---

## 🗂️ Project Structure

```
TicTacToe/
├── main.cpp         # Entry point - handles replay loop
├── TicTacToe.h      # Class declaration and interface
├── TicTacToe.cpp    # Class implementation (game logic)
├── Makefile         # Build instructions
└── README.md        # Project documentation
```

---

## 🎯 Key Features

- ✅ Dynamic board display after every move
- ✅ Win detection (rows, columns, diagonals)
- ✅ Draw detection when the board is full
- ✅ Input validation (out-of-range, already taken, non-numeric)
- ✅ Replay option after each game ends
- ✅ Clean, readable board layout with position guide

---

## 🖥️ How to Compile & Run

### Using Makefile (Linux/macOS)

```bash
make        # Compile the project
make run    # Compile and run
make clean  # Remove compiled files
```

### Using g++ directly

```bash
g++ -std=c++11 -Wall main.cpp TicTacToe.cpp -o tictactoe
./tictactoe
```

### On Windows (using MinGW)

```bash
g++ -std=c++11 main.cpp TicTacToe.cpp -o tictactoe.exe
tictactoe.exe
```

---

## 🎮 How to Play

1. The game is played between **Player X** and **Player O**.
2. Players take turns entering a number **(1–9)** corresponding to the board position:

```
  +---+---+---+
  | 1 | 2 | 3 |
  +---+---+---+
  | 4 | 5 | 6 |
  +---+---+---+
  | 7 | 8 | 9 |
  +---+---+---+
```

3. The first player to get **3 in a row** (horizontally, vertically, or diagonally) wins.
4. If all 9 cells are filled and no one wins, it's a **draw**.
5. After the game ends, you can choose to **play again**.

---

## 📷 Sample Output

```
==============================
   Welcome to Tic Tac Toe!   
==============================

Game Start! X goes first.

  +---+---+---+
  | 1 | 2 | 3 |
  +---+---+---+
  | 4 | 5 | 6 |
  +---+---+---+
  | 7 | 8 | 9 |
  +---+---+---+

Player X, enter your move (1-9): 5

  +---+---+---+
  | 1 | 2 | 3 |
  +---+---+---+
  | 4 | X | 6 |
  +---+---+---+
  | 7 | 8 | 9 |
  +---+---+---+
```

---

## 🧠 Concepts Demonstrated

| Concept              | Where Used                                      |
|----------------------|-------------------------------------------------|
| Arrays (2D)          | `board[3][3]` to store game state               |
| Loops (`for`, `while`) | Game loop, board display, move validation     |
| Conditional Logic    | Win/draw detection, input validation            |
| Functions            | `initBoard()`, `checkWin()`, `checkDraw()`, etc.|
| Classes & Objects    | `TicTacToe` class encapsulating all game logic  |
| Input Validation     | Checks for invalid, out-of-range, repeated moves|

---

## 👨‍💻 Author

- **Name:** [Your Name]  
- **Course:** [Your Course Name]  
- **Submission:** Mini Game Project — Tic Tac Toe in C++
