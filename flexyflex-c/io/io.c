#include "../flexyflex.h"

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

void menu(menu_option options[], size_t options_length)
{
	clear();
	drawHeader(HEADER_LABEL);
	for(int i = 0; i < options_length; i++)
	{
		printf("%d) %s\n",i+1,options[i].label);
	}
	printf("%s\n","0) Exit");
	drawFooter(HEADER_LABEL);
	printf("%s","Option: ");
	int selected = ask();
	if(selected == 0) 
	{
		return;
	}
	else
	{
		if(selected >= 0 && selected <= options_length)
		{
			options[selected-1].callback();
			printf("\n%s\n","Press any key to continue.");							
			ask();
		}
	}
	menu(options,options_length);
}
