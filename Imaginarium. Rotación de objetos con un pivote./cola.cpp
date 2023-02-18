#include "Cola.h"

void Cola::DibujarCola(float p, int n, float x, float y, float z)
{
	glPushMatrix();
	glTranslatef(x, y, z);

	//Aqui reutilizado y modificado de: http://www.glprogramming.com/red/chapter03.html

	glPushMatrix();
	glTranslatef(0.30, 0.0, -1);
	glRotatef(p, 0.0, 0.0, 1.0); //angulo=45, define cuanto rota 
	glTranslatef(-0.25, 2, -2);

	glPushMatrix();
	glScalef(0.5, 0.1, 0.5); //0.5 altura del cubo
	glutSolidCube(0.8);
	glPopMatrix();
	float r = 0.2;
	float q = 0.6;

	for (int i = 0; i < 3; i++) {
		glTranslatef(0.10, 0.0, 0);
		glRotatef(p, 0.0, 0.0, -1.0);
		glTranslatef(0.25, 0.0, 0);
		glPushMatrix();
		glScalef(0.5, r, q);
		glutSolidCube(0.6);
		glPopMatrix();
		r += 0.2;
		q += 0.1;
	}

	for (int i = 0; i < (n - 3); i++) {

		glTranslatef(0.10, 0.0, 0.0);
		glRotatef(p, 0.0, 0.0, -1.0);
		glTranslatef(0.25, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.5, 0.4, 1.0);
		glutSolidCube(0.7);
		glPopMatrix();
		p = p - 0.9;
	}


	glPopMatrix();

	glPopMatrix();
}