#ifndef MAIN_H		
#define MAIN_H
char *str_concat(char *s1, char *s2);		
int **alloc_grid(int width, int height);
		
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);		
int _putchar(char c);
char *argstostr(int ac, char **av);
		
char *_strdup(char *str);
#endif
