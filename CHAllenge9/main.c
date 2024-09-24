#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
double x;
double y;
double z;
} Point3D;

double calculerDistance(Point3D p1, Point3D p2) {
return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) +  pow(p2.z - p1.z, 2));
}

int main(){
Point3D point1, point2, point3;

printf("entrez les coordonées du premier point :");
scanf("%lf %lf %lf", &point1.x, &point1.y, &point1.z);

printf("entrez les coordonées du deuxieme point :");
scanf("%lf %lf %lf", &point2.x, &point2.y, &point2.z);

printf("entrez les coordonées du troisieme point :");
scanf("%lf %lf %lf", &point3.x, &point3.y, &point3.z);


double distance = calculerDistance(point1, point2);

    // Affichage du résultat
    printf("La distance entre les points est : %.2f\n", distance);

    return 0;
}
