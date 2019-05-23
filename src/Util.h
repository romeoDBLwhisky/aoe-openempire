#pragma once

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#define UTIL_ALLOC(type, count) (type*) calloc(count, sizeof(type));

#define UTIL_REALLOC(pointer, type, count) ((type*) realloc(pointer, sizeof(type) * count))

#define UTIL_CHECK(pointer) if(pointer == NULL) printf("Pointer was NULL: file %s: line %d", __FILE__, __LINE__), exit(1)

#define UTIL_LEN(array) ((int32_t) (sizeof(array) / sizeof(*array)))

#define UTIL_FREAD(pointer, count, fp) (fread(pointer, sizeof(*pointer), count, fp))

#define UTIL_MIN(a, b) ((a) < (b) ? (a) : (b))

void Util_Bomb(const char* const message, ...);

char* Util_StringJoin(const char* const a, const char* const b);

char* Util_StringDup(const char* s);

bool Util_StringEqual(const char* const a, const char* const b);

int32_t Util_SquareRoot(const int32_t value);

uint16_t Util_Rand(void);

int32_t Util_Time(void);