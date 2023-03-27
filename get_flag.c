#include "main.h"
/**
 * get_flag - entry point
 * @s: the char
 * @f: ptr to struct flags
 * Return: 1 or 0
 */
int get_flag(char s, flags_t *f)
{
int check = 0;
switch (s)
{
case '+':
f->plus = 1;
check++;
break;
case ' ':
f->space = 1;
check++;
break;
case '#':
f->hash = 1;
check++;
break;
}
return (check);
}
