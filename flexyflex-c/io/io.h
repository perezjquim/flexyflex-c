

typedef void (*function)();

typedef struct menu_option
{
	char label[256];
	function callback;
} menu_option;

void clear();
void drawHeader(char * label);
void drawFooter(char * label);
int ask();
void menu(menu_option options[], size_t options_length);


