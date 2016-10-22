#include <iostream>
#include <math.h>
#define pi 3.14

using namespace std;

/* ----------------------------------
--------------Tseg-------------------
------------------------------------*/
class dot {
private:
    int x, y;
public:
    void set_coord(int a, int b);
    int get_coord(char a);
};
void dot::set_coord(int a, int b){
    x = a;
    y = b;
}
int dot::get_coord(char a){
    if(a == 88 || a == 120){
        return x;
    }
    else if(a == 89 || a == 121){
        return y;
    }
}

/* ----------------------------------
--------------Shuluun----------------
------------------------------------*/
class line {
private:
    int x1, y1, x2, y2;
public:
    void set_coord(int a1, int b1, int a2, int b2);
    int get_coord(char a, int b);
    float length();
};
void line::set_coord(int a1, int b1, int a2, int b2){
    x1 = a1;
    y1 = b1;
    x2 = a2;
    y2 = b2;
}
int line::get_coord(char m, int n){
    if(m == 88 || m == 120){
        if(n==1) return x1;
        else if(n==2) return x2;
    }
    else if(m == 89 || m == 121){
        if(n==1) return y1;
        else if(n==2) return y2;
    }
}
float line::length(){
    return (float)sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

/* ----------------------------------
--------------Gurvaljin--------------
------------------------------------*/
class tri {
private:
	int check=0;
    int x1, x2, x3, y1, y2, y3; // Coordinat
    float a, b, c; // Taluudiin urt
public:
    void set_coord(int a1, int b1, int a2, int b2, int a3, int b3);
    int get_coord(char a, int b);
    int is_triangle();
    float perimeter();
    float area();
};
void tri::set_coord(int a1, int b1, int a2, int b2, int a3, int b3){
    x1 = a1;
    x2 = a2;
    x3 = a3;
    y1 = b1;
    y2 = b2;
    y3 = b3;
    a = (float)sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	b = (float)sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	c = (float)sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	check = 1;
}
int tri::get_coord(char m, int n){
	if(check==1){
	    if(m == 88 || m == 120){
	        if(n==1) return x1;
	        else if(n==2) return x2;
	        else if(n==3) return x3;
	    }
	    else if(m == 89 || m == 121){
	        if(n==1) return y1;
	        else if(n==2) return y2;
	        else if(n==3) return y3;
	    }
	}
	else return 0;
}
int tri::is_triangle(){
	if(check==1){
		if(a+b>c && b+c>a && a+c>b){
			return 1;
		}
		else {
			return 0;
		}
	}
	else return 0;
}
float tri::perimeter(){
	if(check == 1){
		return a+b+c;
	}
	else
		return 0;
}
float tri::area(){
	if(check==1){
		float s;
		float phalf = perimeter()/2;
		s = sqrt(phalf*(phalf-a)*(phalf-b)*(phalf-c));
		return s;
	}
	else
		return 0;
}

/* ----------------------------------
----------4 Untsugt yurunhii---------
------------------------------------*/
class four {
protected:
	int check=0;
    int x1, x2, x3, x4, y1, y2, y3, y4; // Coordinat
    int a, b, c, d, diag1, diag2; // Taluudiin urt
public:
    void set_coord(int a1, int b1, int a2, int b2, int a3, int b3, int a4, int b4);
    int get_coord(char a, int b);
    float perimeter();
};
void four::set_coord(int a1, int b1, int a2, int b2, int a3, int b3, int a4, int b4){
    x1 = a1;
    x2 = a2;
    x3 = a3;
    x4 = a4;
    y1 = b1;
    y2 = b2;
    y3 = b3;
    y4 = b4;
    a = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	b = ((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	c = ((x4-x3)*(x4-x3) + (y4-y3)*(y4-y3));
	d = ((x1-x4)*(x1-x4) + (y1-y4)*(y1-y4));
	diag1 = ((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	diag2 = ((x2-x4)*(x2-x4) + (y2-y4)*(y2-y4));
	check=1;
}
int four::get_coord(char m, int n){
	if(check==1){
	    if(m == 88 || m == 120){
	        if(n==1) return x1;
	        else if(n==2) return x2;
	        else if(n==3) return x3;
	        else if(n==4) return x4;
	    }
	    else if(m == 89 || m == 121){
	        if(n==1) return y1;
	        else if(n==2) return y2;
	        else if(n==3) return y3;
	        else if(n==4) return y4;
	    }
	}
	else return 0;
}
float four::perimeter(){
	if(check==1)
		return sqrt(a)+sqrt(b)+sqrt(c)+sqrt(d);
	else return 0;
}

/* ----------------------------------
--------------Tegsh untsugt----------
------------------------------------*/
class rect : public four{
public:
    int is_rect();
    float area();
};
int rect::is_rect(){
	if(check==1){
		if(a==c && b==d){
			if(diag1==diag2){
				return 1;
			}
			else return 0;
		}
		else return 0;
	}
	else
		return 0;
}
float rect::area(){
	if(check==1 && is_rect()==1){
		return sqrt(a)*sqrt(b);
	}
	else
		return 0;
}

/* ----------------------------------
--------------Trapez----------------
------------------------------------*/
class trap : public four {
private:
	float h;
	int sh=0;
public:
    int is_trap();
    float area();
};
int trap::is_trap(){
	if(check==1){
		// -- Yazguur avch jinhene utgiig olno
		float q = sqrt(a);
		float w = sqrt(b);
		float e = sqrt(c);
		float r = sqrt(d);
		// -- Suuriudiin zuruu
		int t = q-e;
		t = t<0 ? (-1)*t : t;
		// -- Uussen jijig gurvaljnii suuri
		float f = (b-d-c-a+2*q*e)/(2*q-2*e);
		float g = e-f-q;
		// -- Gurvaljin tus buriin undur
		float hf = sqrt(d-f*f);
		float hg = sqrt(b-g*g);
		h = hf;
		// -- Unduruudiin yalgavar
		float diff = hf-hg;
		diff = diff<0 ? (-1)*diff : diff;
		// -- hervee undruudiin yalgavar 0 tei tentsuu bol trapez mun ugui bol uur oroi deer shalgana
		if(diff < 0.00001){
			sh=0; // Trapeziin suuri ali tal gedgiig yalgah
			return 1;
		}
		else {
			f = (c-a-d-b+2*w*r)/(2*w-2*r);
			f = f<0 ? (-1)*f : f;
			g = r-f-w;
			g = g<0 ? (-1)*g : g;
			hf = sqrt(a-f*f);
			hg = sqrt(c-g*g);
			h = hf;
			diff = hf-hg;
			diff = diff<0 ? (-1)*diff : diff;
			if(diff < 0.00001){
				sh=1; // Trapeziin suuri ali tal gedgiig yalgah
				return 1;
			}
			else return 0;
		}
	}
	else return 0;
}
float trap::area(){
	if (check==1 && is_trap()==1)
	{
		if(sh==0)
			return (sqrt(a)+sqrt(c))/2*h;
		else 
			return (sqrt(b)+sqrt(d))/2*h;
	}
	else return 0;
}
/* ----------------------------------
--------------Rombo------------------
------------------------------------*/
class rom : public four {
public:
    int is_rom();
    float area();
};
int rom::is_rom(){
	if(check==1)
	{
		if(a==b && b==c && c==d && (diag1/4)+(diag2/4) == a){
			return 1;
		}
		else return 0;
	}
	else return 0;
}
float rom::area(){
	if (check==1)
	{
		return (sqrt(diag1)*sqrt(diag2))/2;
	}
	else return 0;
}

/* ----------------------------------
--------------Kvadrat----------------
------------------------------------*/
class sqr : public four {
public:
    int is_sqr();
    float area();
};
int sqr::is_sqr(){
    if(check==1){
		if(a==b && b==c && c==d && diag1 == diag2){
			return 1;
		}
		else return 0;
	}
	else
		return 0;
}
float sqr::area(){
	if(check==1 && is_sqr()==1){
		return sqrt(a)*sqrt(a);
	}
	else
		return 0;
}

/* ----------------------------------
--------------Toirog-----------------
------------------------------------*/
class cyr {
private:
	int check=0;
    int x, y, r;
public:
    void set_coord(int a, int b, int c);
    int get_coord(char a);
    int get_r();
    int is_cyr();
    float perimeter();
    float area();
};
void cyr::set_coord(int a, int b, int c){
    x = a;
    y = b;
    r = c;
    check = 1;
}
int cyr::get_coord(char a){
	if (check==1)
	{
		if(a == 88 || a == 120){
	        return x;
	    }
	    else if(a == 89 || a == 121){
	        return y;
	    }
	}
    else
    	return 0;
}
int cyr::get_r(){
	if(check==1)
    	return r;
    else return 0;
}
int cyr::is_cyr(){
    if(r < 0 || check==0){
        return 0;
    }
    return 1;
}
float cyr::perimeter(){
	if(check==1){
		return 2*r*pi;
	}
	else
		return 0;
}
float cyr::area(){
	if(check==1)
		return r*r*pi;
	else
		return 0;
}


int main(){
    dot dot1;
    line line1;
    tri triangle;
    rect rectangle;
    sqr square;
    rom rombo;
    trap trapez;
    cyr cyrcle;
    // dot1.set_coord(1,4);
    // line1.set_coord(1,4,5,3);
    // triangle.set_coord(0,0,0,4,3,0);
    // rectangle.set_coord(0,3,2,5,5,2,3,0);
    // square.set_coord(0,0,0,4,4,4,4,0);
    // rombo.set_coord(0,2,1,4,2,2,1,0);
    // trapez.set_coord(3,8,7,4,6,0,0,6);
    // cyrcle.set_coord(4,3,4);
    dot1.set_coord(1,4);
    line1.set_coord(1,4,5,3);
    triangle.set_coord(1,1,2,4,4,1);
    rectangle.set_coord(1,5,3,6,4,4,2,3);
    square.set_coord(5,5,6,6,7,5,6,4);
    rombo.set_coord(2,6,3,8,4,6,3,4);
    // trapez.set_coord(6,9,8,8,8,6,4,8);
    // trapez.set_coord(8,8,8,6,4,8,6,9);
    trapez.set_coord(4,8,6,9,8,8,8,6);
    cyrcle.set_coord(4,3,4);
    cout << "Dot: x=" << dot1.get_coord('x') << " y=" << dot1.get_coord('y') << endl;
    cout << "Line: x1=" << line1.get_coord('x',1) << " y1=" << line1.get_coord('y',1) << " x2=" << line1.get_coord('x',2) << " y2=" << line1.get_coord('y',2) << " Length=" << line1.length() << endl;
    cout << "Triangle: x1=" << triangle.get_coord('x',1) << " y1=" << triangle.get_coord('y',1) << " x2=" << triangle.get_coord('x',2) << " y2=" << triangle.get_coord('y',2) << " x3=" << triangle.get_coord('x',3) << " y3=" << triangle.get_coord('y',3) << endl;
    cout << '\t' << "Is triangle: " << triangle.is_triangle() << " P=" << triangle.perimeter() << " S=" << triangle.area() << endl;
    cout << "Rectangle: x1=" << rectangle.get_coord('x',1) << " y1=" << rectangle.get_coord('y',1) << " x2=" << rectangle.get_coord('x',2) << " y2=" << rectangle.get_coord('y',2) << " x3=" << rectangle.get_coord('x',3) << " y3=" << rectangle.get_coord('y',3) << " x4=" << rectangle.get_coord('x',4) << " y4=" << rectangle.get_coord('y',4) << endl;
    cout << '\t' << "Is rectangle: " << rectangle.is_rect() << " P=" << rectangle.perimeter() << " S=" << rectangle.area() << endl;
    cout << "Square: x1=" << square.get_coord('x',1) << " y1=" << square.get_coord('y',1) << " x2=" << square.get_coord('x',2) << " y2=" << square.get_coord('y',2) << " x3=" << square.get_coord('x',3) << " y3=" << square.get_coord('y',3) << " x4=" << square.get_coord('x',4) << " y4=" << square.get_coord('y',4) << endl;
    cout << '\t' << "Is square: " <<square.is_sqr() << " P=" << square.perimeter() << " S=" << square.area() << endl;
    cout << "Rombo: x1=" << rombo.get_coord('x',1) << " y1=" << rombo.get_coord('y',1) << " x2=" << rombo.get_coord('x',2) << " y2=" << rombo.get_coord('y',2) << " x3=" << rombo.get_coord('x',3) << " y3=" << rombo.get_coord('y',3) << " x4=" << rombo.get_coord('x',4) << " y4=" << rombo.get_coord('y',4) << endl;
    cout << '\t' << "Is rombo: " << rombo.is_rom() << " P=" << rombo.perimeter() << " S=" << rombo.area() << endl;
    cout << "Trapez: x1=" << trapez.get_coord('x',1) << " y1=" << trapez.get_coord('y',1) << " x2=" << trapez.get_coord('x',2) << " y2=" << trapez.get_coord('y',2) << " x3=" << trapez.get_coord('x',3) << " y3=" << trapez.get_coord('y',3) << " x4=" << trapez.get_coord('x',4) << " y4=" << trapez.get_coord('y',4) << endl;
    cout << '\t' << "Is trapez: " << trapez.is_trap() << " P=" << trapez.perimeter() << " S=" << trapez.area() << endl;
    cout << "Cyrcle: x=" << cyrcle.get_coord('x') << " y=" << cyrcle.get_coord('y') << " r=" << cyrcle.get_r() << endl;
    cout << '\t' << "Is cyrcle: " << cyrcle.is_cyr() << " P=" << cyrcle.perimeter() << " S=" << cyrcle.area() << endl;
    return 0;
}
