#include "flexyflex.h"

void bosta() { printf("bosta"); }
void bosta2() { printf("bosta2"); }
menu_option options[] = 
{
	{ .label="ola", .callback=&bosta },
	{ .label="ola2", .callback=&bosta2 }  
};

int main()
{
	size_t options_length = sizeof(options)/sizeof(menu_option);
	menu(options,options_length);
	getchar();
	return 0;
}
