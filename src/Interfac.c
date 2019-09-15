#include "Interfac.h"

const char* Interfac_GetString(const Interfac interfac)
{
    switch(interfac)
    {
#define FILE_X(name, file, prio, walkable, type, max_speed, health, attack, width, rotatable, single_frame, multi_state, expire, building, dimensions) case name: return #name;
        FILE_X_INTERFAC
#undef FILE_X
    }
    return 0;
}

uint8_t Interfac_GetHeight(const Interfac interfac)
{
    switch(interfac)
    {
#define FILE_X(name, file, prio, walkable, type, max_speed, health, attack, width, rotatable, single_frame, multi_state, expire, building, dimensions) case name: return prio;
        FILE_X_INTERFAC
#undef FILE_X
    }
    return 0;
}
