#include <gl/glut.h>
#include <math.h>

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float aspect = (float)w / (float)h;

    if (w >= h)
        gluOrtho2D(-aspect, aspect, -1.0, 1.0);
    else
        gluOrtho2D(-1.0, 1.0, -1.0/aspect, 1.0/aspect);

    glMatrixMode(GL_MODELVIEW);
}

void carrr(){
//	kubah luar	
	float bx = -0.8f;
	float by = -0.7f;
	float rd = 0.2f;
	float rb = 0.172;
	
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(bx, by);
		
		for(int i = 0; i <= 180; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float ix = bx + rd * cos(angle);
			float iy = by + rd * sin(angle);
			glColor3f(1.0f, 0.0f, 0.0f);
			glVertex2f(ix, iy);
		}

		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(bx, by);
//	kubah dalem	
		for(int i = 0; i <= 180; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float jx = bx + rb * cos(angle);
			float jy = by + rb * sin(angle);
			
			glVertex2f(jx, jy);
		}
	glEnd();
	
//	tengah mobil	
	glLineWidth(7.0f);
	glBegin(GL_LINES);
		
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(-0.8f, -0.7f);
		glVertex2f(-0.8f, -0.5f);
	glEnd();

glPushMatrix();	
	glTranslatef(-0.8f, -0.75f, 0.0f);
//	bawah
	glPushMatrix();
	float tx = -0.2f;
	float ty = 0.0f;
	float rc = 0.1f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(tx, ty);
		for(int i = 0; i<= 360; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float ix = tx + rc * cos(angle);
			float iy = ty + rc * sin(angle);
			glColor3f(1.0f, 0.0f, 0.0f);
			glVertex2f(ix, iy);
		}
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	
	glRotated(180.0, 0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(tx, ty);
		for(int i = 0; i<= 360; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float ix = tx + rc * cos(angle);
			float iy = ty + rc * sin(angle);
			glColor3f(1.0f, 0.0f, 0.0f);
			glVertex2f(ix, iy);
		}
	glEnd();
	glPopMatrix();
	glRectf(-0.2f, 0.1f, 0.2f, -0.1f);
	
//	lampu	
	glPointSize(15.0f);
	glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 0.0);
		glVertex3f(-0.3, 0.0, 0.0);
		
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(0.3, 0.0, 0.0);
	glEnd();

//	roda
	float rx = -0.13f;
	float ry = -0.09f;
	float rh = 0.08f;
	float rp = 0.03f;
	glBegin(GL_TRIANGLE_FAN);	
		glVertex2f(rx, ry);
		for(int i = 0; i <= 360; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float ix = rx + rh * cos(angle);
			float iy = ry + rh * sin(angle);
			glColor3f(0.0f, 0.0f, 0.0f);
			glVertex2f(ix, iy);
		}
		
		
		glVertex2f(rx, ry);
		for(int i = 0; i <= 360; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float ix = rx + rp * cos(angle);
			float iy = ry + rp * sin(angle);
			glColor3f(1.0f, 1.0f, 1.0f);
			glVertex2f(ix, iy);
		}
	glEnd();
	
	
	glPushMatrix();
	glRotated(180.0, 0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_FAN);
		glColor3f(0.0f, 0.0f, 0.0f);	
		glVertex2f(rx, ry);
		for(int i = 0; i <= 360; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float ix = rx + rh * cos(angle);
			float iy = ry + rh * sin(angle);
			
			glVertex2f(ix, iy);
		}
		
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(rx, ry);
		for(int i = 0; i <= 360; i++){
			float angle = i * 3.14159f / 180.0f;
			
			float ix = rx + rp * cos(angle);
			float iy = ry + rp * sin(angle);
			
			glVertex2f(ix, iy);
		}
	glEnd();
	glPopMatrix();
	glPopMatrix();	
}

void SegiEmpat(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

//	godzilla
//	segitiga
//	base
	glBegin(GL_QUAD_STRIP);
		glColor3f(0.188f, 0.302f, 0.247f);
		
//		bawah
		glVertex2f(0.2f, -0.2f);
		glVertex2f(0.8f, -0.2f);

//		tengah		
		glVertex2f(0.22f, 0.45f);
		glVertex2f(0.6f, 0.5f);
		
//		rada atas
		glVertex2f(0.2f, 0.75f);
		glVertex2f(0.45f, 0.77f);	
		
//		atas
		glVertex2f(0.25f, 0.81f);
		glVertex2f(0.35f, 0.83f);		
	glEnd();

//	mulut atas
	glBegin(GL_QUADS);
		glVertex2f(0.14f, 0.75f);
		glVertex2f(0.2f, 0.75f);
		glVertex2f(0.22f, 0.65f);
		glVertex2f(0.12f, 0.69f);
	glEnd();
//	mulut bawah
	float cx = (0.12 + 0.2 + 0.22 + 0.1)/4;
	float cy = (0.78 + 0.75 + 0.65 + 0.69)/4;
	glPushMatrix();
	
	glRotated(45.0, 1.0, 0.0, 0.0);  
	glTranslatef(0.0f, 0.1f, 0.0f); 
	glRotated(35.0, 0.0, 0.0, 1.0);  
	glTranslatef(0.42f, -0.22f, 0.0f);
	
	glBegin(GL_QUADS);
		glColor3f(0.188f, 0.302f, 0.247f);
		glVertex2f(0.12f, 0.78f);
		glVertex2f(0.23f, 0.75f);
		glVertex2f(0.25f, 0.65f);
		glVertex2f(0.10f, 0.69f);
	glEnd();
	glPopMatrix();

//	segitiga
	glPushMatrix();
	glTranslatef(0.6f, 0.6f, 0.0f);
	glRotated(-61.0, 0.0, 0.0, 1.0);

	
	glBegin(GL_TRIANGLES);
		glVertex3f(-0.1, -0.05, 0.0);
		glVertex3f(0.0, 0.06, 0.0);
		glVertex3f(0.1, -0.05, 0.0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.67f, 0.4f, 0.0f);
	glRotated(-75.0, 0.0, 0.0, 1.0);

	
	glBegin(GL_TRIANGLES);
		glVertex3f(-0.1, -0.05, 0.0);
		glVertex3f(0.0, 0.06, 0.0);
		glVertex3f(0.1, -0.05, 0.0);
	glEnd();
	glPopMatrix();

	
	
//	mata
	glPushMatrix();
	
//	glRotated(350.0, 0.0, 0.0, 1.0);
	glTranslatef(0.3f, -0.05f, 0.0f);
	glRotated(5.0, 0.0, 0.0, 1.0);
	glTranslatef(0.05f, 0.0f, 0.0f);
	
	glBegin(GL_TRIANGLES);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(-0.025, 0.8, 0.0);
		glVertex3f(0.025, 0.8, 0.0);
		glVertex3f(0.0, 0.78, 0.0);
	glEnd();	
	glPopMatrix();


//	jari 

//	laser luar
	glBegin(GL_TRIANGLES);
		glColor3f(0.52f, 1.0f, 0.99f);
		glVertex3f(-1, 0.9, 0.0);
		glVertex3f(0.1, 0.66, 0.0);
		glVertex3f(-1, 0.5, 0.0);

//	laser dalam		
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(-1, 0.82, 0.0);
		glVertex3f(0.1, 0.66, 0.0);
		glVertex3f(-1, 0.58, 0.0);
		
	glEnd();

	

//  building #1 abutuwa
    for(int i = 0; i < 4; i++){
    	glPushMatrix();
    	
    	glTranslatef(i * 0.5f, 0.0f, 0.0f);
    	glColor3f(0.424f, 0.455f, 0.463f);
    	glRectf(-0.9f, 0.2f, -0.7f, -0.2f);
    	
    	glPopMatrix();
    }

//	buildings #2 ijo lumut
    for(int i = 0; i < 4; i++){
    	glPushMatrix();
    	
    	glTranslatef(i * 0.65f, 0.0f, 0.0f);
    	glColor3f(0.620f, 0.729f, 0.592f);
    	glRectf(-1.1f, 0.3f, -0.85f, -0.2f);
    	
    	glPopMatrix();
    }  
    
//  building #5 
    for(int i = 0; i < 5; i++){
    	glPushMatrix();
    	
    	glTranslatef(i * 0.37f, 0.0f, 0.0f);
    	glColor3f(0.724f, 0.655f, 0.763f);
    	glRectf(-0.65f, 0.16f, -0.45f, -0.2f);
    	
    	glPopMatrix();
    }
 
//  building #3 rada mudaan
    for(int i = 0; i < 4; i++){
    	glPushMatrix();
    	
    	glTranslatef(i * 0.7f, 0.0f, 0.0f);
    	glColor3f(0.8f, 0.455f, 0.463f);
    	glRectf(-0.9f, 0.24f, -0.7f, -0.2f);
    	
    	glPopMatrix();
    }   
    
//	buildings # 4 
    for(int i = 0; i < 4; i++){
    	glPushMatrix();
    	
    	glTranslatef(i * 0.7f, 0.0f, 0.0f);
    	glColor3f(0.620f, 0.729f, 0.8f);
    	glRectf(-0.8f, 0.4f, -0.62f, -0.2f);
    	
    	glPopMatrix();
    } 


    
//	laut
	glColor3f(0.329f, 0.831f, 1.0f);
	glRectf(-1.0f, -0.2f, 1.0f, -1.0f);

//	jalan jembatan
	glColor3f(0.639f, 0.639f, 0.639f);
	glRectf(-1.0f, -0.6f, 1.0f, -1.0f);	
	
//	pager jembatan
	glLineWidth(4.0f);
	glBegin(GL_LINES);
		glColor3f(0.88f, 0.88f, 0.88f);
		glVertex3f(-1.0f, -0.4f, 1.0f);
		glVertex3f(1.0f, -0.4f, 1.0f);
	glEnd();
	
//	pager jembatan vertikal
	for(int i = 0; i < 23; i++){
		glPushMatrix();
		glTranslatef(i*0.09f, 0.0f, 0.0f);
		
		glBegin(GL_LINES);
			glColor3f(0.88f, 0.88f, 0.88f);
			glVertex3f(-0.98f, -0.4f, 1.0f);
			glVertex3f(-0.98f, -0.6f, 1.0f);
		glEnd();
		glPopMatrix();
	}
	
	for(int i = 0; i < 3; i++){
		glPushMatrix();
		glTranslatef(i * 0.74f, 0.0f, 0.0f);
		
		carrr();
		
		glPopMatrix();
	}
	
	glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("CarGodzilla");
    glutReshapeFunc(reshape);
    glutDisplayFunc(SegiEmpat);
	glClearColor(0.737f, 0.933f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
