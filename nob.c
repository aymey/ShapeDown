#define NOBUILD_IMPLEMENTATION
#include "nob.h"

#define CFLAGS "-Wall", "-Wextra", "-ggdb"
#define LFLAGS "-I./include/raylib-5.0_linux_amd64/include",\
    "-L./include/raylib-5.0_linux_amd64/lib", "-lraylib",   \
    "-Wl,-rpath=./include/raylib-5.0_linux_amd64/lib",      \
    "-lm"

// TODO: build deps (raylib)?

int main(int argc, char *argv[]) {
    GO_REBUILD_URSELF(argc, argv);

    CMD("cc", CFLAGS, LFLAGS, "-o", "ShapeDown", "src/main.c", "src/object.c", "src/helper.c", "src/gui.c");

    return 0;
}
