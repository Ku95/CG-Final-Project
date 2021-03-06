#pragma once

#include "../Include/lib.h"
#include <string>

#define TITLE "CG-Final-Project Kurt Kuehnert"
#define WIN_POS_X                 0
#define WIN_POS_Y                 0
#define WIN_WIDTH              1280
#define WIN_HEIGHT              800
#define FOV                    60.0
#define NEAR                    0.1
#define FAR                  1200.0
#define DISPLAY_MODE    GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE

#define MENU_TEXT_WIREFRAME   "Toggle Wireframe on/off"
#define MENU_TEXT_LIGHTING    "Toggle Lighting on/off"
#define MENU_TEXT_CULLING     "Toggle Culling on/off"
#define MENU_TEXT_TEXTURING   "Toggle Texturing on/off"
#define MENU_TEXT_BLENDING    "Toggle Blending on/off"
#define MENU_TEXT_EXIT        "Exit"

enum {
    MENU_WIREFRAME,
    MENU_LIGHTING,
    MENU_CULLING,
    MENU_TEXTURING,
    MENU_BLENDING,
    MENU_EXIT
};

void idleFunc();

void displayFunc();

void reshapeFunc(int, int);

void menuFunc(int);

void init(int argc, char **argv);

struct GlobalState {
    static float screenSize[2];
    static bool wireframe;
    static bool lighting;
    static bool culling;
    static bool texturing;
    static bool blending;
};
