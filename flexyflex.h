#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "layout.h"

#define STRING "%s\n"

void clear();
void drawHeader(char * label);
void drawFooter(char * label);
int ask();

typedef void (*function)();

typedef struct menu_option
{
	char label[256];
	function callback;
} menu_option;
