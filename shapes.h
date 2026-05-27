#include <stdio.h>
#include <math.h>

#define PI            3.14159265358979
#define DEG_TO_RAD    (PI / 180.0)


typedef struct {
    double width;
    double height;
} Rectangle;

typedef struct {
    double radius;
} Circle;

typedef struct {
    double base;
    double height;
    double side_a;   /* left side  */
    double side_b;   /* right side */
} Triangle;

typedef struct {
    double side;
} Square;

typedef struct {
    double width;
    double height;
    double depth;
} Cuboid;

typedef struct {
    double radius;
} Sphere;

typedef struct {
    double radius;
    double height;
} Cylinder;

typedef struct {
    double radius;
    double height;
} Cone;

void print_rect_info(Rectangle r);
void print_square_info(Square s);
void print_circle_info(Circle c);
void print_triangle_info(Triangle t);
void print_cuboid_info(Cuboid c);
void print_sphere_info(Sphere s);
void print_cylinder_info(Cylinder c);
void print_cone_info(Cone c);
