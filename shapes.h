#pragma once // linking shapes.h to main.c

#define PI            3.14159265358979
#define DEG_TO_RAD    (PI / 180.0)

// Only typedef + function names (no body)

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



double rect_area(Rectangle r);


double rect_perimeter(Rectangle r);

double rect_diagonal(Rectangle r);

void print_rect_info(Rectangle r);


double square_area(Square s);

double square_perimeter(Square s);

double square_diagonal(Square s);

void print_square_info(Square s);


double circle_area(Circle c);

double circle_circumference(Circle c);

double circle_diameter(Circle c);

void print_circle_info(Circle c) ;



double triangle_area(Triangle t);

double triangle_perimeter(Triangle t);

/* Area of a triangle given three sides (Heron's formula) */
double triangle_area_heron(double a, double b, double c);

/* Hypotenuse of a right-angled triangle */
double triangle_hypotenuse(double a, double b);

void print_triangle_info(Triangle t);



double cuboid_volume(Cuboid c);

double cuboid_surface_area(Cuboid c);

double cuboid_diagonal(Cuboid c);

void print_cuboid_info(Cuboid c);



double sphere_volume(Sphere s);

double sphere_surface_area(Sphere s);

void print_sphere_info(Sphere s);


double cylinder_volume(Cylinder c);

double cylinder_surface_area(Cylinder c);

void print_cylinder_info(Cylinder c);



double cone_volume(Cone c);

double cone_slant_height(Cone c);

double cone_surface_area(Cone c);

void print_cone_info(Cone c);




