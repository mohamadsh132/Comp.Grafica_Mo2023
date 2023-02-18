#include "Cola.h"

void Cola::DibujarCola(float Angulo, int n, float x, float y, float z)
{
	glPushMatrix();
	  glTranslatef(x, y, z);

	  //Aqui reutilizado y modificado de: http://www.glprogramming.com/red/chapter03.html

	  glPushMatrix();
	  glTranslatef(-0.25, 0.0, 0.0);
	  glRotatef(Angulo, 0.0, 0.0, 1.0); //angulo=45, define cuanto rota 
	  glTranslatef(0.25, 0.0, 0.0);

	  glPushMatrix();
	  glScalef(0.5, 0.4, 1.0);
	  glutSolidCube(1.0);
	  glPopMatrix();



	  for (int i = 0; i < n; i++) {

		glTranslatef(0.25, 0.0, 0.0);
		glRotatef(Angulo, 0.0, 0.0, 1.0);
		glTranslatef(0.25, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.5, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

	  }

	  for (int i = 0; i < 10; i++) {

		  glTranslatef(0.15, 0.0, 0.0);
		  glRotatef(Angulo, 0.0, 0.0, 0.5);
		  glTranslatef(0.15, 0.0, 0.0);
		  glPushMatrix();
		  glScalef(0.5, 0.4, 1.0);
		  glutSolidCube(0.7);
		  glPopMatrix();

	  }
	  for (int i = 0; i < 5; i++) {

		  glTranslatef(0.1, 0.0, 0.0);
		  glRotatef(Angulo, 0.0, 0.0, 0.5);
		  glTranslatef(0.1, 0.0, 0.0);
		  glPushMatrix();
		  glScalef(0.5, 0.4, 1.0);
		  glutSolidCube(0.7);
		  glPopMatrix();

	  }
	  glPopMatrix();


	glPopMatrix();
}
