#ifndef UTIL_H
#define UTIL_H

#pragma warning(disable:4996)

#define BOOL int
#define STRING char*
#define BYTE unsigned char
#define FALSE 0
#define TRUE 1
#define RETURN_TRUE return TRUE;
#define RETURN_FALSE return FALSE;

int get_int_length(int);
int get_long_length(long long);
int get_byte_length(BYTE);
#endif