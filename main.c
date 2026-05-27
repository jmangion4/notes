//gcc main.c shapes.c -o usingshapes.exe -lm

#include <stdio.h>
#include "shapes.h"

int main(void) {

    Rectangle door   = { .width = 0.9,  .height = 2.1  };
    Square    tile   = { .side  = 0.3                   };
    Circle    wheel  = { .radius = 0.35                 };
    Triangle  ramp   = { .base = 3.0, .height = 1.5, .side_a = 1.803, .side_b = 3.0 };
    Cuboid    room   = { .width = 4.0, .height = 2.8, .depth = 5.5 };
    Sphere    ball   = { .radius = 0.11                 };
    Cylinder  pipe   = { .radius = 0.05, .height = 2.0  };
    Cone      funnel = { .radius = 0.08, .height = 0.15 };

    puts("=== Shape Information ===\n");

    print_rect_info(door);      putchar('\n');
    print_square_info(tile);    putchar('\n');
    print_circle_info(wheel);   putchar('\n');
    print_triangle_info(ramp);  putchar('\n');
    print_cuboid_info(room);    putchar('\n');
    print_sphere_info(ball);    putchar('\n');
    print_cylinder_info(pipe);  putchar('\n');
    print_cone_info(funnel);

    return 0;
}
