#ifndef __FUNCHEADS__
#define __FUNCHEADS__

typedef size_t unsigned int;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
