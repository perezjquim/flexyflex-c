#include "../flexyflex.h"

void bosta() { printf("1 + 1 = %d",1+1); }

void bosta2() { printf("2 * 0 = %d",2*0); }

menu_option options[] = 
{
	{ .label="1 + 1 = ?", .callback=&bosta },
	{ .label="2 * 0 = ?", .callback=&bosta2 }  
};

size_t options_length = sizeof(options)/sizeof(menu_option);
