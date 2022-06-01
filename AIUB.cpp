#include <windows.h>
 
#include <math.h>
 
#include <GL/glut.h>
 
#include<iostream>
 
using namespace std;
 
 
int xc=0, yc=0;
int radius=300;
 
 
void plot_point(int x, int y)
 
{
glPointSize(5);
glBegin(GL_POINTS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2i(xc+x, yc+y);
 
glVertex2i(xc+x, yc-y);
 
glVertex2i(xc+y, yc+x);
 
glVertex2i(xc+y, yc-x);
 
glVertex2i(xc-x, yc-y);
 
glVertex2i(xc-y, yc-x);
 
glVertex2i(xc-x, yc+y);
 
glVertex2i(xc-y, yc+x);
 
glEnd();
 
}
 
 
void midpoint_circle(int r)
 
{
 
int x=0,y=r;
 
float pk=1-r;
 
 
plot_point(x,y);
 
int k;
 
while(x < y)
 
{
 
x = x + 1;
 
if(pk < 0)
 
pk = pk + 2*x+1;
 
else
 
{
 
y = y - 1;
 
pk = pk + 2*(x - y) + 1;
 
}
 
plot_point(x,y);
 
}
 
glFlush();
 
}
 
 
void display()
 
{
 
glClear(GL_COLOR_BUFFER_BIT);
 
midpoint_circle(radius);
 
 
glLineWidth(1);
 
glBegin(GL_LINES);
glColor3f(0.6, 0.6, 0.6);
glVertex2f(200,-300);
glVertex2f(-200, -300);
 
glVertex2f(-200,-225);
glVertex2f(-200, -300);
 
    glVertex2f(200,-225);
glVertex2f(200, -300);
    glEnd();
 
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(55, 300);
glVertex2f(165, 250);
glVertex2f(-165, 250);
glVertex2f(-55, 300);
    glEnd();
 
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(165, 250);
glVertex2f(220, 200);
glVertex2f(-220, 200);
glVertex2f(-165, 250);
    glEnd();
 
 
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(220, 200);
glVertex2f(250, 160);
glVertex2f(-250, 160);
glVertex2f(-220, 200);
    glEnd();
 
glBegin(GL_QUADS);
 
glColor3f(0.0f, 0.5f, 1.0f);
 
glVertex2f(250, 160);
glVertex2f(268, 130);
glVertex2f(-268, 130);
glVertex2f(-250, 160);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(268, 130);
glVertex2f(280, 100);
glVertex2f(-280, 100);
glVertex2f(-268, 130);
    glEnd();
 
glBegin(GL_QUADS);
 
glColor3f(0.0f, 0.5f, 1.0f);
 
 
glVertex2f(280, 100);
glVertex2f(290, 70);
glVertex2f(-290, 70);
glVertex2f(-280, 100);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(295, 70);
glVertex2f(301, 40);
glVertex2f(-301, 40);
glVertex2f(-295, 70);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.0f, 0.5f, 1.0f);
 
glVertex2f(295,40);
glVertex2f(300, 10);
glVertex2f(-300,10);
glVertex2f(-295,40);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(300,10);
glVertex2f(298,-20);
glVertex2f(-298,-20);
glVertex2f(-300,10);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.0f, 0.5f, 1.0f);
 
glVertex2f(298,-20);
glVertex2f(295,-50);
glVertex2f(-295,-50);
glVertex2f(-298,-20);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(295,-50);
glVertex2f(290,-80);
glVertex2f(-290,-80);
glVertex2f(-295,-50);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.0f, 0.5f, 1.0f);
glVertex2f(290,-80);
glVertex2f(275,-110);
glVertex2f(-275,-110);
glVertex2f(-290,-80);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(275,-110);
glVertex2f(265,-140);
glVertex2f(-265,-140);
glVertex2f(-275,-110);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.0f, 0.5f, 1.0f);
 
glVertex2f(265,-140);
glVertex2f(242,-170);
glVertex2f(-242,-170);
glVertex2f(-265,-140);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(242,-170);
glVertex2f(200,-230);
glVertex2f(-200,-230);
glVertex2f(-242,-170);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.0f, 0.5f, 1.0f);
 
glVertex2f(200,-230);
glVertex2f(200,-270);
glVertex2f(-200,-270);
glVertex2f(-200,-230);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0.6, 0.6, 0.6);
 
glVertex2f(200,-270);
glVertex2f(200,-300);
glVertex2f(-200,-300);
glVertex2f(-200,-270);
    glEnd();
 
glBegin(GL_QUADS);
glColor3f(0,0,0);
 
glVertex2f(25,-270);
glVertex2f(25,-305);
glVertex2f(-25,-305);
glVertex2f(-25,-270);
    glEnd();
 
glFlush();
 
 
glBegin(GL_LINES);
glColor3f(0, 0, 0);
 
 
glVertex2f(-50,300);
glVertex2f(-50, -300);z
 
glVertex2f(-100,285);
glVertex2f(-100, -300);
 
    glVertex2f(-150,263);
glVertex2f(-150, -300);
 
    glVertex2f(-200,225);
glVertex2f(-200, -300);
 
    glVertex2f(-250,170);
glVertex2f(-250, -175);
 
glVertex2f(0,300);
glVertex2f(0, -270);
 
glVertex2f(50,300);
glVertex2f(50, -300);
 
glVertex2f(100,285);
glVertex2f(100, -300);
 
    glVertex2f(150,263);
glVertex2f(150, -300);
 
    glVertex2f(200,225);
glVertex2f(200, -300);
 
    glVertex2f(250,170);
glVertex2f(250, -170);
 
 
    glEnd();
 
 
glBegin(GL_LINES);
 
glColor3f(0, 0, 0);
 
glVertex2f(220,210);
glVertex2f(-220,210);
 
glVertex2f(250,160);
glVertex2f(-250,160);
 
glVertex2f(270,130);
glVertex2f(-270,130);
 
glVertex2f(285,100);
glVertex2f(-285,100);
 
    glVertex2f(295,70);
glVertex2f(-295,70);
 
glVertex2f(295,40);
glVertex2f(-295,40);
 
glVertex2f(300, 10);
glVertex2f(-300,10);
 
glVertex2f(298,-20);
glVertex2f(-298,-20);
 
glVertex2f(295,-50);
glVertex2f(-295,-50);
 
glVertex2f(290,-80);
glVertex2f(-290,-80);
 
glVertex2f(280,-110);
glVertex2f(-280,-110);
 
glVertex2f(265,-140);
    glVertex2f(-265,-140);
 
    glVertex2f(242,-170);
glVertex2f(-242,-170);
 
    glVertex2f(200,-230);
glVertex2f(-200,-230);
 
glVertex2f(200,-270);
glVertex2f(-200,-270);
 
 
glEnd();
 
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(220,-300);
glVertex2f(220,-350);
glVertex2f(-220,-350);
glVertex2f(-220,-300);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(400,-380);
glVertex2f(400,-500);
glVertex2f(-400,-500);
glVertex2f(-400,-380);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(-360,40);
glVertex2f(-360,-380);
glVertex2f(-370,-380);
glVertex2f(-370,40);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 1.2);
 
glVertex2f(-370,40);
glVertex2f(-370,-50);
glVertex2f(-490,-50);
glVertex2f(-490,40);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(-220,40);
glVertex2f(-220,-380);
glVertex2f(-230,-380);
glVertex2f(-230,40);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 1.2, 0);
 
glVertex2f(-230,40);
glVertex2f(-230,-50);
glVertex2f(-350,-50);
glVertex2f(-350,40);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(-80,90);
glVertex2f(-80,-380);
glVertex2f(-90,-380);
glVertex2f(-90,90);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
 
glVertex2f(-90,90);
glVertex2f(-90,-10);
glVertex2f(-210,-10);
glVertex2f(-210,90);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(50, 150);
glVertex2f(50,-380);
glVertex2f(60,-380);
glVertex2f(60,150);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
 
glVertex2f(50, 150);
glVertex2f(50, 50);
glVertex2f(-70, 50);
glVertex2f(-70, 150);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(190,40);
glVertex2f(190,-380);
glVertex2f(200,-380);
glVertex2f(200,40);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
 
glVertex2f(190, 40);
glVertex2f(190,-50);
glVertex2f(70,-50);
glVertex2f(70,40);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
 
glVertex2f(330,40);
glVertex2f(330,-380);
glVertex2f(340,-380);
glVertex2f(340,40);
    glEnd();
 
 
    glBegin(GL_QUADS);
    glColor3f(1, 1, 0);
 
glVertex2f(330,40);
glVertex2f(330,-50);
glVertex2f(210,-50);
glVertex2f(210,40);
    glEnd();
 
 
 
glFlush();
}
 
 
void Init()
 
{
 
 
glColor3f(1.0,1.0,1.0);
 
 
gluOrtho2D(-640 , 640 , -480 , 480);
 
}
 
 
int main(int argc, char **argv)
 
{
 
 
glutInit(&argc,argv);
 
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 
glutInitWindowPosition(0,0);
 
glutInitWindowSize(640,480);
 
glutCreateWindow("AIUB DIM");
 
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
Init();
 
glutDisplayFunc(display);
 
glutMainLoop();
 
}
