#ifndef _main_h_
#define _main_h_

int _putchar(char ch);
unsigned int binary_to_uint(const char *b);
unsigned int powr(unsigned int num, unsigned int mul);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
