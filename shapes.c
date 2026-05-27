#define PI            3.14159265358979
#define DEG_TO_RAD    (PI / 180.0)

// No Main Function -> Only includes functions (defenitions)

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



double rect_area(Rectangle r) {
    return r.width * r.height;
}

double rect_perimeter(Rectangle r) {
    return 2.0 * (r.width + r.height);
}

double rect_diagonal(Rectangle r) {
    return sqrt(r.width * r.width + r.height * r.height);
}

void print_rect_info(Rectangle r) {
    printf("Rectangle  %.2f x %.2f\n", r.width, r.height);
    printf("  Area      : %.4f\n", rect_area(r));
    printf("  Perimeter : %.4f\n", rect_perimeter(r));
    printf("  Diagonal  : %.4f\n", rect_diagonal(r));
}



double square_area(Square s) {
    return s.side * s.side;
}

double square_perimeter(Square s) {
    return 4.0 * s.side;
}

double square_diagonal(Square s) {
    return s.side * sqrt(2.0);
}

void print_square_info(Square s) {
    printf("Square  side %.2f\n", s.side);
    printf("  Area      : %.4f\n", square_area(s));
    printf("  Perimeter : %.4f\n", square_perimeter(s));
    printf("  Diagonal  : %.4f\n", square_diagonal(s));
}



double circle_area(Circle c) {
    return PI * c.radius * c.radius;
}

double circle_circumference(Circle c) {
    return 2.0 * PI * c.radius;
}

double circle_diameter(Circle c) {
    return 2.0 * c.radius;
}

void print_circle_info(Circle c) {
    printf("Circle  radius %.2f\n", c.radius);
    printf("  Diameter      : %.4f\n", circle_diameter(c));
    printf("  Circumference : %.4f\n", circle_circumference(c));
    printf("  Area          : %.4f\n", circle_area(c));
}



double triangle_area(Triangle t) {
    return 0.5 * t.base * t.height;
}

double triangle_perimeter(Triangle t) {
    return t.base + t.side_a + t.side_b;
}

/* Area of a triangle given three sides (Heron's formula) */
double triangle_area_heron(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

/* Hypotenuse of a right-angled triangle */
double triangle_hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

void print_triangle_info(Triangle t) {
    printf("Triangle  base %.2f  height %.2f  sides %.2f, %.2f\n",
           t.base, t.height, t.side_a, t.side_b);
    printf("  Area      : %.4f\n", triangle_area(t));
    printf("  Perimeter : %.4f\n", triangle_perimeter(t));
}



double cuboid_volume(Cuboid c) {
    return c.width * c.height * c.depth;
}

double cuboid_surface_area(Cuboid c) {
    return 2.0 * (c.width * c.height +
                  c.width * c.depth  +
                  c.height * c.depth);
}

double cuboid_diagonal(Cuboid c) {
    return sqrt(c.width  * c.width  +
                c.height * c.height +
                c.depth  * c.depth);
}

void print_cuboid_info(Cuboid c) {
    printf("Cuboid  %.2f x %.2f x %.2f\n", c.width, c.height, c.depth);
    printf("  Volume       : %.4f\n", cuboid_volume(c));
    printf("  Surface Area : %.4f\n", cuboid_surface_area(c));
    printf("  Diagonal     : %.4f\n", cuboid_diagonal(c));
}



double sphere_volume(Sphere s) {
    return (4.0 / 3.0) * PI * s.radius * s.radius * s.radius;
}

double sphere_surface_area(Sphere s) {
    return 4.0 * PI * s.radius * s.radius;
}

void print_sphere_info(Sphere s) {
    printf("Sphere  radius %.2f\n", s.radius);
    printf("  Volume       : %.4f\n", sphere_volume(s));
    printf("  Surface Area : %.4f\n", sphere_surface_area(s));
}


double cylinder_volume(Cylinder c) {
    return PI * c.radius * c.radius * c.height;
}

double cylinder_surface_area(Cylinder c) {
    return 2.0 * PI * c.radius * (c.radius + c.height);
}

void print_cylinder_info(Cylinder c) {
    printf("Cylinder  radius %.2f  height %.2f\n", c.radius, c.height);
    printf("  Volume       : %.4f\n", cylinder_volume(c));
    printf("  Surface Area : %.4f\n", cylinder_surface_area(c));
}



double cone_volume(Cone c) {
    return (1.0 / 3.0) * PI * c.radius * c.radius * c.height;
}

double cone_slant_height(Cone c) {
    return sqrt(c.radius * c.radius + c.height * c.height);
}

double cone_surface_area(Cone c) {
    return PI * c.radius * (c.radius + cone_slant_height(c));
}

void print_cone_info(Cone c) {
    printf("Cone  radius %.2f  height %.2f\n", c.radius, c.height);
    printf("  Slant Height : %.4f\n", cone_slant_height(c));
    printf("  Volume       : %.4f\n", cone_volume(c));
    printf("  Surface Area : %.4f\n", cone_surface_area(c));
}




