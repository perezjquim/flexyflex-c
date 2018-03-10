#include "flexyflex.h"

void clear()
{
	for(int i = 0; i < CLEAR_SIZE; i++)
	{ printf("\n"); }
}

void drawHeader(char * label)
{
	for(int i = 0; i < PATTERN_LENGTH; i++)
	{	printf(PATTERN); 		}
	
	printf(" %s ",label);
	
	for(int i = 0; i < PATTERN_LENGTH; i++)
	{	printf(PATTERN); 		}
	
	printf("\n");
}

void drawFooter(char * label)
{
	for(int i = 0; i < 2*PATTERN_LENGTH + 2 + (sizeof(label)/2); i++)
	{	printf(PATTERN); 		}
	
	printf("\n");
}

int ask()
{
	char c[255];
	fgets(c,255,stdin);
	return atoi(c);
}

void bosta() { printf("bosta"); }
void bosta2() { printf("bosta2"); }
menu_option f[2] = 
{
	{ "ola", &bosta },
	{ "ola2", &bosta2 }  
};

void menu()
{
	clear();
	drawHeader(HEADER_LABEL);
	for(int i = 0; i < sizeof(f)/sizeof(menu_option); i++)
	{
		printf("%d) %s\n",i+1,f[i].label);
	}
	drawFooter(HEADER_LABEL);
	int selected = ask();
	if(selected > 0 && selected <= sizeof(f)/sizeof(menu_option))
	{
		f[selected-1].callback();
		getchar();
	}
	menu();
}
