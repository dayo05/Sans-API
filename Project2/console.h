#ifndef CONSOLE_H
#define CONSOLE_H

#include "util.h"

#define MAX_PRINT_BUF 500000

STRING ob;
int ob_length;
BOOL initialize_buffer();
BOOL print(STRING);
BOOL print_long(long long);
BOOL print_int(int);
BOOL print_char(char);

BOOL println(STRING);
BOOL println_long(long long);
BOOL println_int(int);
BOOL println_char(char);

BOOL set_color(BYTE);
BOOL set_text_color_rgb(BYTE, BYTE, BYTE);
BOOL set_background_color_rgb(BYTE, BYTE, BYTE);
void flush_all();

#define CONSOLE_TEXT_BLACK          set_color(30);
#define CONSOLE_TEXT_RED            set_color(31);
#define CONSOLE_TEXT_GREEN          set_color(32);
#define CONSOLE_TEXT_YELLOW         set_color(33);
#define CONSOLE_TEXT_BLUE           set_color(34);
#define CONSOLE_TEXT_MAGENTA        set_color(35);
#define CONSOLE_TEXT_CYAN           set_color(36);
#define CONSOLE_TEXT_WHITE          set_color(37);

#define CONSOLE_TEXT_GRAY           set_color(90);
#define CONSOLE_TEXT_BRIGHT_RED     set_color(91);
#define CONSOLE_TEXT_BRIGHT_GREEN   set_color(92);
#define CONSOLE_TEXT_BRIGHT_YELLOW  set_color(93);
#define CONSOLE_TEXT_BRIGHT_BLUE    set_color(94);
#define CONSOLE_TEXT_BRIGHT_MAGENTA set_color(95);
#define CONSOLE_TEXT_BRIGHT_CYAN    set_color(96);
#define CONSOLE_TEXT_BRIGHT_WHITE   set_color(97);


#define CONSOLE_BACKGROUND_BLACK          set_color(40);
#define CONSOLE_BACKGROUND_RED            set_color(41);
#define CONSOLE_BACKGROUND_GREEN          set_color(42);
#define CONSOLE_BACKGROUND_YELLOW         set_color(43);
#define CONSOLE_BACKGROUND_BLUE           set_color(44);
#define CONSOLE_BACKGROUND_MAGENTA        set_color(45);
#define CONSOLE_BACKGROUND_CYAN           set_color(46);
#define CONSOLE_BACKGROUND_WHITE          set_color(47);

#define CONSOLE_BACKGROUND_GRAY           set_color(100);
#define CONSOLE_BACKGROUND_BRIGHT_RED     set_color(101);
#define CONSOLE_BACKGROUND_BRIGHT_GREEN   set_color(102);
#define CONSOLE_BACKGROUND_BRIGHT_YELLOW  set_color(103);
#define CONSOLE_BACKGROUND_BRIGHT_BLUE    set_color(104);
#define CONSOLE_BACKGROUND_BRIGHT_MAGENTA set_color(105);
#define CONSOLE_BACKGROUND_BRIGHT_CYAN    set_color(106);
#define CONSOLE_BACKGROUND_BRIGHT_WHITE   set_color(107);

#endif