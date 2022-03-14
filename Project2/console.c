#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "console.h"
#include "util.h"

#define DEF_APPEND const int append = 
#define VALIDATE_APPEND if(append + ob_length >= MAX_PRINT_BUF) RETURN_FALSE else ob_length += append;

BOOL initialize_buffer()
{
	ob = malloc(MAX_PRINT_BUF);
	*ob = NULL;
	ob_length = 0;
}

BOOL print(STRING o)
{
	DEF_APPEND strlen(o);
	VALIDATE_APPEND
	sprintf(ob, "%s%s", ob, o);
	RETURN_TRUE
}

BOOL print_long(long long a)
{
	DEF_APPEND get_long_length(a);
	VALIDATE_APPEND
	sprintf(ob, "%s%lld", ob, a);
	RETURN_TRUE
}

BOOL print_int(int a)
{
	DEF_APPEND get_int_length(a);
	VALIDATE_APPEND
	sprintf(ob, "%s%d", ob, a);
	RETURN_TRUE
}

BOOL print_char(char a)
{
	if (ob_length + 1 >= MAX_PRINT_BUF) return FALSE;
	sprintf(ob, "%s%c", ob, a);
	RETURN_TRUE
}

BOOL println(STRING o)
{
	DEF_APPEND strlen(o);
	VALIDATE_APPEND
	sprintf(ob, "%s%s", ob, o);
	CONSOLE_BACKGROUND_BLACK
	sprintf(ob, "%s\n", ob);
	RETURN_TRUE
}

BOOL println_long(long long a)
{
	DEF_APPEND get_long_length(a);
	VALIDATE_APPEND
	sprintf(ob, "%s%lld\n", ob, a);
	CONSOLE_BACKGROUND_BLACK
	sprintf(ob, "%s\n", ob);
	RETURN_TRUE
}

BOOL println_int(int a)
{
	DEF_APPEND get_int_length(a);
	VALIDATE_APPEND
	sprintf(ob, "%s%d\n", ob, a);
	CONSOLE_BACKGROUND_BLACK
	sprintf(ob, "%s\n", ob);
	RETURN_TRUE
}

BOOL println_char(char a)
{
	if (ob_length + 1 >= MAX_PRINT_BUF) return FALSE;
	sprintf(ob, "%s%c\n", ob, a);
	CONSOLE_BACKGROUND_BLACK
	sprintf(ob, "%s\n", ob);
	RETURN_TRUE
}

void flush_all()
{
	printf("%s", ob);
	fflush(stdout);
	*ob = NULL;
	ob_length = 0;
}

BOOL set_color(BYTE a)
{
	DEF_APPEND 7;
	VALIDATE_APPEND
	sprintf(ob, "%s\033[1;%dm", ob, a);
	RETURN_TRUE
}

BOOL set_text_color_rgb(BYTE r, BYTE g, BYTE b)
{
	DEF_APPEND 10 + get_byte_length(r) + get_byte_length(g) + get_byte_length(b);
	VALIDATE_APPEND
	sprintf(ob, "%s\033[38;2;%d;%d;%dm", ob, r, g, b);
	RETURN_TRUE
}

BOOL set_background_color_rgb(BYTE r, BYTE g, BYTE b)
{
	DEF_APPEND 10 + get_byte_length(r) + get_byte_length(g) + get_byte_length(b);
	VALIDATE_APPEND
	sprintf(ob, "%s\033[48;2;%d;%d;%dm", ob, r, g, b);
	RETURN_TRUE
}