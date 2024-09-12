// clang -fsyntax-only test.c -I./a -I./b -I./c
// clang -fsyntax-only test.c -fmodules -fmodules-cache-path=/tmp/mods.noindex -I./a -I./b -I./c

#include <one.h>

void test(void) {
    c_func();
}
