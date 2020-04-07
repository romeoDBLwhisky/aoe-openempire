#pragma once

#include "Color.h"
#include "Status.h"
#include "Motive.h"
#include "Bits.h"

typedef struct
{
    Status status;
    Motive motive;
    Bits bits;
    Bits busy;
    int32_t select_count;
}
Share;
