//
// Created by asbpo on 17-09-2024.
//

#include <iostream>
#define NROWS 12
#define NCOLS 16
typedef enum { wood, stone } material;
struct player {
    int x,y;
};

struct tile {
    int x, y;
    bool isWall;
    material type;

};


void printBoard(tile playground[NROWS][NCOLS], player player) {
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            if(playground[i][j].isWall){
                std::cout << "*";
            }else if(playground[i][j].x == player.x && playground[i][j].y == player.y){
                std::cout << "O";
            }else{
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

    int main() {
        tile playground[NROWS][NCOLS];
        for (int i = 0; i < NROWS; i++) {
            for (int j = 0; j < NCOLS; j++) {
                playground[i][j].x = j;
                playground[i][j].y = i;
                playground[i][j].isWall = (j == 0 || i == (NROWS - 1) || (i == 0 && j != 3) || j == (NCOLS - 1));
                if (playground[i][j].isWall) {
                    playground[i][j].type = stone;
                } else {
                    playground[i][j].type = wood;
                }
            }
        }
        int posx, posy;
        std::string txt;
        std::cin >> txt;
        player player1{posx = 5, posy = 5};
        printBoard(playground,player1);
        for(int s = 0; s < txt.length(); s++){
            char cmd;
            cmd = txt[s];
            if(cmd == 'q') return 0;
            else if(cmd == 'u'){
                if(posx-1 < 0 || playground[posx-1][posy].isWall);
                else{
                    posx = posx-1;
                }
            }
            else if(cmd == 'd'){
                if(posx+1 > NROWS || playground[posx+1][posy].isWall);
                else{
                    posx = posx+1;
                }
            }
            else if(cmd == 'l'){
                if(posy-1 < 0 || playground[posx][posy-1].isWall);
                else{
                    posy = posy-1;
                }
            }
            else if(cmd == 'r'){
                if(posy+1 > NCOLS || playground[posx][posy+1].isWall);
                else{
                    posy = posy+1;
                }
            }
            player1.x = posy;
            player1.y = posx;
            printBoard(playground,player1);
        }
        return 0;
        }

