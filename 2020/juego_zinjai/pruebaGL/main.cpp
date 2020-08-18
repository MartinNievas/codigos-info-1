#ifdef __APPLE__
# include <OpenGL/gl.h>
# include <OpenGL/glu.h>
# include <GLUT/glut.h>
#else
# include <GL/gl.h>
# include <GL/glu.h>
# include <GL/glut.h>
#endif

#include<stdio.h> 
#include<math.h> 
#define pi 3.142857

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 320 

// Global Declaration 
// c and d tracks the number of time 'b' and 'n' pressed respectively 
// left and right indicates leftmost and rightmost index of movable rectangle 

// Esto esta mal 
int c = 0, d = 0, left = 0, right = 0; 
int m = 0, j = 1, flag1 = 0, l = 1, flag2 = 0, n = 0, score = 0, count = 1; 
// Convertir a locales con punteros

void draw_circle (int x, int y){
	glBegin(GL_LINE_STRIP); 
	// i keeps track of angle 
	float i = 0; 
	// change in m denotes motion in vertical direction and 
	// change in n denotes motion in horizontal direction 
	m = m + 6; 
	n = n + 4; 
	// drawing of circle centre at (0, 12) iterated up to 2*pi, i.e., 360 degree 
	while (i <= 2 * pi) 
	{ 
		y = 12 + 20 * cos(i); 
		x = 20 * sin(i); 
		i = i + 0.1; 
		// flag1 is 0 to show motion in upward direction and is 1 for downward direction 
		if (m == 288 && flag1 == 0) 
		{ 
			j = -1; 
			m = -288; 
			flag1 = 1; 
			score++; 
		} 
		if (m == 288 && flag1 == 1) 
		{ 
			j = 1; 
			m = -288; 
			flag1 = 0; 
		} 
		// flag2 is 0 to show motion in rightward direction and is 1 for leftward direction 
		if (n == 580 && flag2 == 0) 
		{ 
			l = -1; 
			n = -580; 
			flag2 = 1; 
		} 
		if (n == 580 && flag2 == 1) 
		{ 
			l = 1; 
			n = -580; 
			flag2 = 0; 
		} 
		// equation for desired motion of ball 
		glVertex2i((x - l * n), (y - j * m)); 
	} 
	glEnd(); 
}

void draw_windows_borders(void){
	
	// these four points draws outer rectangle which determines window 
	glBegin(GL_LINE_LOOP); 
	glVertex2i(-WINDOW_WIDTH, -WINDOW_HEIGHT); 
	glVertex2i(-WINDOW_WIDTH, WINDOW_HEIGHT); 
	glVertex2i(WINDOW_WIDTH, WINDOW_HEIGHT); 
	glVertex2i(WINDOW_WIDTH, -WINDOW_HEIGHT); 
	glEnd(); 
	
}

void draw_bottom_pad(){

	// these four points draws smaller rectangle which is for catching ball 
	glBegin(GL_LINE_LOOP); 
	
	int center_pad_pos_x = 200 * (d - c);
	left = -200 + center_pad_pos_x; 
	right = 200 + center_pad_pos_x; 
	
	glVertex2i(left, -315); 
	glVertex2i(left, -295); 
	glVertex2i(right, -295); 
	glVertex2i(right, -315); 
	glEnd(); 
	
}


void display_cb() {
	// x and y keeps point on circumference of circle 
	int x, y, k; 
	// outer 'for loop' is to for making motion in ball 

	for (k = 0; k <= 200; k += 5) 
	{     
		glClear(GL_COLOR_BUFFER_BIT); 
		
		draw_circle(x, y);
		
		draw_windows_borders();
		
		draw_bottom_pad();
		
		// following condition checks if falling ball is catched on rectangle or not 
		if ((j * m) == 276) 
		{ 
			if ((left > ((-1 * l * n) + 20)) || (right < (-1 * l * n) - 20)) 
			{ 
				printf("Game Over !!!\nYour Score is :\t%d\n", score); 
				int algo;
				scanf("%d", &algo);
				exit(0); 
			} 
		} 
		glutSwapBuffers(); 
	} 
}

// keyboard function : it gets active when button pressed 
void keyboard(unsigned char key, int x, int y) 
{ 
	int center_pad_pos_x = 200 * (d - c);
	left = -200 + center_pad_pos_x; 
	right = 200 + center_pad_pos_x; 
	
	if (left <= -WINDOW_WIDTH)	{ 
		// '110' -> Ascii value of 'n' 
		if (key == 110) 
			d++; 
	} else if (right >= 600){ 
		// '98' -> Ascii value of 'b' 
		if (key == 98) 
			c++; 
	} else { 
		if (key == 98) 
			c++;     
		if (key == 110) 
			d++; 
	} 
	glutPostRedisplay(); 
} 


void initialize() {
	// Para elegir el color del fondo de pantalla (Red, Green, Blue, alpha)
	// van de 0.0 a 1.0
	glClearColor(.0, .0, 1.0, 0.0); 
	
	// Set picture color to red (in RGB model) 
	// as only argument corresponding to R (Red) is 1.0 and rest are 0.0 
	glColor3f(1.0f, 0.0f, 0.0f); 
	
	// Set width of point to one unit 
	glPointSize(1.0); 
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	
	// Set window size in X- and Y- direction 
	gluOrtho2D(-620.0, 620.0, -340.0, 340.0); 
}

//No tocar
int main (int argc, char **argv) {
	glutInit(&argc, argv); 
	
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); 
	// Declares window size 
	glutInitWindowSize(1100, 600); 
	
	// Declares window position which is (0, 0) 
	// means lower left corner will indicate position (0, 0) 
	glutInitWindowPosition(0, 0); 
	
	// Name to window 
	glutCreateWindow("Game"); 
	
	// keyboard function 
	glutKeyboardFunc(keyboard); 
	// Call to myInit() 
	initialize(); 
	glutDisplayFunc(display_cb); 
	glutMainLoop(); 
	return 0;
}
