#pragma once

#define MOVEUP(x)    do{ if((x) != 0) printf("\e[%dA", (x)); }
#define MOVEDOWN(x)  do{ if((x) != 0) printf("\e[%dB", (x)); }
#define MOVERIGHT(x) do{ if((x) != 0) printf("\e[%dC", (x)); }
#define MOVELEFT(x)  do{ if((x) != 0) printf("\e[%dD", (x)); }

#define FORECOLOR_BLACK  30
#define FORECOLOR_RED    31
#define FORECOLOR_GREEN  32
#define FORECOLOR_YELLOW 33


