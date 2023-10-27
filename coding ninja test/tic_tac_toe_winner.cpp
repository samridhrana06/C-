#include <bits/stdc++.h>
using namespace std;

// function to check if a player has won the game
string checkRes(vector<vector<char>> &grid, int i, int j, char ch, int n){

    // Check diagonal
    if( (grid[0][0]==ch && grid[1][1]==ch && grid[2][2]==ch) || (grid[0][2]==ch && grid[1][1]==ch && grid[2][0]==ch) ){
        // if the current player has won, return the name of the player
        if(ch=='X'){
            return "player1";
        }else{
            return "player2";
        }
    }

    // check row
    if(grid[i][0]==ch && grid[i][1]==ch && grid[i][2]==ch){
        // if the current player has won, return the name of the player
        if(ch=='X'){
            return "player1";
        }else{
            return "player2";
        }
    }

    // check col
    if(grid[0][j]==ch && grid[1][j]==ch && grid[2][j]==ch){
        // if the current player has won, return the name of the player
        if(ch=='X'){
            return "player1";
        }else{
            return "player2";
        }
    }

    // check if whole grid is full
    if(n<9){
        // if the game is not yet over, return "uncertain"
        return "uncertain";
    }else{
        // if the game is a draw, return "draw"
        return "draw";
    }
}

// function to determine the winner of a Tic Tac Toe game
string ticTacToeWinner(vector<vector<int>> moves, int n) {

    // create a 3x3 grid to represent the Tic Tac Toe board
    vector<vector<char>> grid(3, vector<char> (3, '@'));

    int cnt = 1;

    // loop over the moves vector and update the grid with the moves played by each player
    // Create a 3x3 grid to represent the Tic Tac Toe board
vector<vector<char>> grid(3, vector<char>(3, '@'));

// Initialize a counter to keep track of moves
int cnt = 1;

// Loop over the moves vector and update the grid with the moves played by each player
for (int i = 0; i < n; i++) {
    // Extract the row and column indices from the moves vector
    int row = moves[i][0];
    int col = moves[i][1];

    // Check if it's player1's (X) turn or player2's (O) turn
    if (cnt % 2 == 1) {
        // Update the grid with 'X' for player1's move
        grid[row][col] = 'X';
    } else {
        // Update the grid with 'O' for player2's move
        grid[row][col] = 'O';
    }

    // Increment the move counter
    cnt++;
}

// Determine the current player's symbol
char ch = 'X';
if (cnt % 2 == 1) {
    ch = 'O';
}

// Call the checkRes function to determine the game result based on the last move
return checkRes(grid, moves[n - 1][0], moves[n - 1][1], ch, n);

    char ch = 'X';

    // determine which player's turn it is
    if(cnt%2==1) {
        ch = 'O';
    }

    // check if the current player has won or if the game is a draw
    return checkRes(grid, moves[n-1][0], moves[n-1][1], ch, n);
}