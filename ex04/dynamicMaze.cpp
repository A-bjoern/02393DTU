//
// Created by asbpo on 17-09-2024.
//

#include <iostream>
#include <vector>
#include <math.h>

typedef enum { wood, stone } material;
struct player {
    int x,y;
};

struct tile {
    int x, y;
    bool isWall;
    material type;
};

struct playground {
    int rows = 5, cols = 5;
    std::vector<std::vector<tile>> playground;
};

void initPlayground(playground& playground){
    playground.playground.resize(playground.rows,std::vector<tile>(playground.cols));
    for (int i = 0; i < playground.rows; i++) {
        for (int j = 0; j < playground.cols; j++) {
            playground.playground[i][j].x = j;
            playground.playground[i][j].y = i;
            playground.playground[i][j].isWall = (j == 0 || i == (playground.rows - 1) || (i == 0 && j != 3) || j == (playground.cols - 1));
            if (playground.playground[i][j].isWall) {
                playground.playground[i][j].type = stone;
            } else {
                playground.playground[i][j].type = wood;
            }
        }
    }
}

void printBoard(playground& playground, player player) {
    for (int i = 0; i < playground.rows; i++) {
        for (int j = 0; j < playground.cols; j++) {
            if(playground.playground[i][j].isWall){
                std::cout << "*";
            }else if(playground.playground[i][j].x == player.x && playground.playground[i][j].y == player.y){
                std::cout << "O";
            }else{
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}
/*
int main() {
    playground playground;
    std::cin >> playground.rows >> playground.cols;
    initPlayground(playground);
    std::string txt;
    std::cin >> txt;
    player player1{(int) floor((playground.cols/2)), (int) floor(playground.rows/2)};
    printBoard(playground,player1);
    for(int s = 0; s < txt.length(); s++){
        char cmd;
        cmd = txt[s];
        switch(cmd){
            case 'q':
                return 0;
            case 'u':
                if(player1.x - 1 >= 0 && !playground.playground[player1.y-1][player1.x].isWall) player1.y--;
                break;
            case 'd':
                if(player1.x + 1 <= playground.rows && !playground.playground[player1.y+1][player1.x].isWall) player1.y++;
                break;
            case 'l': {
                if (player1.y - 1 >= 0 && !playground.playground[player1.y][player1.x - 1].isWall) player1.x--;
                break;
            }
            case 'r':
                if(player1.y + 1 <= playground.cols && !playground.playground[player1.y][player1.x+1].isWall) player1.x++;
                break;
            default:
                break;
        }
        printBoard(playground,player1);
    }
    return 0;
}

*/