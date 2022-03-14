#include <time.h>
#include <windows.h>

#include "console.h"

#pragma warning(disable:4996)

main()
{
	initialize_buffer();

	int t = time(NULL);
	int f = 0;
	BYTE i, j;
	while(++f)
	{
		print("\033[1J\033[0;0H\033[1;32m");
		for (i = 1; i <= 50; i++) {
			for (j = 50; j >= 1; j--) {
				set_background_color_rgb(0, j, i);
				print("   ");
			}
			CONSOLE_BACKGROUND_BLACK
			print_char('\n');
		}
		if (GetKeyState('A') & 0x8000)
			set_text_color_rgb(0, 0, 0);
			//print("\033[38;5;195m");
		//for (i = 1; i <= 20; i++)
			//println_int(f % i);
		set_color(40);
		println_int(f);
		println_int(time(NULL) - t);
		t = time(NULL);
		flush_all();
		Sleep(100);
	}
}