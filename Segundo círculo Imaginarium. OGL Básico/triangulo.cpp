#include "triangulo.h"

triangulo::triangulo() {}

void triangulo::dibujarTriangulos(float x, float y, float z)
{
    glPushMatrix();
      glTranslatef(0, 2, 0);
      glBegin(GL_TRIANGLES);
      glVertex3f(-0.5, 0, 0);
      glVertex3f(0, 0.5, 0);
      glVertex3f(0.5, 0, 0);
      glEnd();
    glPopMatrix();
}