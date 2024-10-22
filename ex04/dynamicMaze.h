//
// Created by asbpo on 17-09-2024.
//

#ifndef INC_02393DTU_DYNAMICMAZE_H
#define INC_02393DTU_DYNAMICMAZE_H



    typedef enum { wood, stone } material;
    struct player;

    struct tile;
    struct playground;
    void initPlayground(playground& playground);
    void printBoard(playground& playground, player player);

#endif //INC_02393DTU_DYNAMICMAZE_H
