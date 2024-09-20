// clang -fsyntax-only transitive_error.c -I./a -I./b -I./c
// clang -fsyntax-only transitive_error.c -fmodules -fmodules-cache-path=/tmp/mods.noindex -I./a -I./b -I./c

// This is an example of a known failure with "no_undeclared_includes". If you
// expect a transitive include two.h -> one.h to resolve to c/two.h -> a/one.h
// and have access to declarations in a/one.h, "no_undeclared_includes" in a
// modular build prevents it from happening.

#include <two.h>

void test(void) {
    a_func();
}
