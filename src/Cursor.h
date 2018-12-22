#pragma once

#define MOVEUP(x)    do{ if((x) != 0) printf("\e[%dA", (x)); }while(0)
#define MOVEDOWN(x)  do{ if((x) != 0) printf("\e[%dB", (x)); }while(0)
#define MOVERIGHT(x) do{ if((x) != 0) printf("\e[%dC", (x)); }while(0)
#define MOVELEFT(x)  do{ if((x) != 0) printf("\e[%dD", (x)); }while(0)

#define MOVETO(x, y) printf("\e[%d;%dH", (y), (x))

#define FORECOLOR_BLACK     30
#define FORECOLOR_RED       31
#define FORECOLOR_GREEN     32
#define FORECOLOR_YELLOW    33
#define FORECOLOR_BLUE      34
#define FORECOLOR_PURPLE    35
#define FORECOLOR_DARKGREEN 36
#define FORECOLOR_WHITE     37

#define BGCOLOR_BLACK       40
#define BGCOLOR_RED         41
#define BGCOLOR_GREEN       42
#define BGCOLOR_YELLOW      43
#define BGCOLOR_BLUE        44
#define BGCOLOR_PURPLE      45
#define BGCOLOR_DARKGREEN   46
#define BGCOLOR_WHITE       47

#define SET_COLOR(color) printf("\e[%dm", (color))

