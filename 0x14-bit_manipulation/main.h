#ifndef Main_h
#define Main_h

int get_bit(unsigned long int n, unsigned int index);
int _atoi(const char *s);
int _putchar(char c);
unsigned int binary_to_uint(const char *d);
int get_endianness(void);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void print_binary(unsigned long int k);

#endif

