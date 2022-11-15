#include <stdio.h>

int    main(void)
{
    int    a;
    int*    ptr;

    a = 10;
    printf("\n\na = 10;\n\n");
    printf("a = %d, the address of a is = %p\n", a, &a);
    printf("*ptr = %d, the address that ptr pointed to is = %p\n", *ptr, ptr);
    printf("The address of ptr itself is %p\n\n", &ptr);
    *ptr = a;
    printf("*ptr = a;\n\n");
    printf("*ptr = %d, the address that ptr pointed to is = %p\n\n", *ptr, ptr);
    a = 15;
    ptr = &a;
    printf("a = 15;\n");
    printf("ptr = &a;\n\n");
    printf("*ptr = %d, the address that ptr pointed to is = %p\n", *ptr, ptr);
    printf("The address of ptr is still %p\n\n", &ptr);
    return (0);
}
