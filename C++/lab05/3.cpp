#include <iostream>
#include <math.h>
#include <stdlib.h>
#define pi 3.14

using namespace std;

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

int main(int argc, char const *argv[])
{
	system("title Dursiin P S");
	int select=10000;
	while(select != 0){
		cout << "------------------------------------------------" << endl;
		cout << "-----Dursiin talbai, perimeter oloh program-----" << endl;
		cout << "------------------------------------------------" << endl << endl;
		cout << "\t Songoltiinhoo ehnii dugaariig oruulna uu" << endl;
		cout << "\t 1. Tseg /*_*/" << endl;
		cout << "\t 2. Shuluun" << endl;
		cout << "\t 3. Gurvaljin" << endl;
		cout << "\t 4. Tegsh untsugt" << endl;
		cout << "\t 5. Kvadrat" << endl;
		cout << "\t 6. Rombo" << endl;
		cout << "\t 7. Trapez" << endl;
		cout << "\t 8. Toirog" << endl;
		cout << "\t 0. Garah" << endl;
		cin >> select;
		system("cls");
		if(select >=0 && select <=8){
			if(select==1){
				cout << "------------------------------------------------" << endl;
				cout << "-----------------------Tseg---------------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				dot dot1;
				int x, y;
				cout << "x y >> ";
				cin >> x >> y;
				dot1.set_coord(x,y);
				cout << "x=" << dot1.get_coord('x') << "\ty=" << dot1.get_coord('y') << endl << endl;
			}
			else if(select==2){
				cout << "------------------------------------------------" << endl;
				cout << "----------------------Shuluun-------------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				line line1;
				int x1, y1, x2, y2;
				cout << "x1 y1 x2 y2 >> ";
				cin >> x1 >> y1 >> x2 >> y2;
				line1.set_coord(x1,y1,x2,y2);
				cout << "x1=" << line1.get_coord('x',1) << "\ty1=" << line1.get_coord('y',1) << endl;
				cout << "x2=" << line1.get_coord('x',2) << "\ty2=" << line1.get_coord('y',2) << endl;
				cout << "Urt=" << line1.length() << endl << endl;
			}
			else if(select==3){
				cout << "------------------------------------------------" << endl;
				cout << "---------------------Gurvaljin------------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				tri tri1;
				int x1, y1, x2, y2, x3, y3;
				cout << "x1 y1 x2 y2 x3 y3 >> ";
				cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
				tri1.set_coord(x1,y1,x2,y2,x3,y3);
				cout << "x1=" << tri1.get_coord('x',1) << "\ty1=" << tri1.get_coord('y',1) << endl;
				cout << "x2=" << tri1.get_coord('x',2) << "\ty2=" << tri1.get_coord('y',2) << endl;
				cout << "x3=" << tri1.get_coord('x',3) << "\ty3=" << tri1.get_coord('y',3) << endl;
				cout << "Perimeter=" << tri1.perimeter() << endl;
				if(tri1.is_triangle()==1)
					cout << "Area=" << tri1.area() << endl << endl;
				else cout << "--Ene durs gurvaljin bish baina!--" << endl << endl;
			}
			else if(select==4){
				cout << "------------------------------------------------" << endl;
				cout << "------------------Tegsh untsugt-----------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				rect rect1;
				int x1, y1, x2, y2, x3, y3, x4, y4;
				cout << "x1 y1 x2 y2 x3 y3 x4 y4 >> ";
				cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
				rect1.set_coord(x1,y1,x2,y2,x3,y3,x4,y4);
				cout << "x1=" << rect1.get_coord('x',1) << "\ty1=" << rect1.get_coord('y',1) << endl;
				cout << "x2=" << rect1.get_coord('x',2) << "\ty2=" << rect1.get_coord('y',2) << endl;
				cout << "x3=" << rect1.get_coord('x',3) << "\ty3=" << rect1.get_coord('y',3) << endl;
				cout << "x4=" << rect1.get_coord('x',4) << "\ty4=" << rect1.get_coord('y',4) << endl;
				cout << "Perimeter=" << rect1.perimeter() << endl;
				if(rect1.is_rect()==1){
					cout << "Area=" << rect1.area() << endl << endl;
				}
				else {
					cout << "--Ene durs tegsh untsugt bish baina!--" << endl << endl;
				}
			}
			else if(select==5){
				cout << "------------------------------------------------" << endl;
				cout << "----------------------Kvadrat-------------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				sqr sqr1;
				int x1, y1, x2, y2, x3, y3, x4, y4;
				cout << "x1 y1 x2 y2 x3 y3 x4 y4 >> ";
				cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
				sqr1.set_coord(x1,y1,x2,y2,x3,y3,x4,y4);
				cout << "x1=" << sqr1.get_coord('x',1) << "\ty1=" << sqr1.get_coord('y',1) << endl;
				cout << "x2=" << sqr1.get_coord('x',2) << "\ty2=" << sqr1.get_coord('y',2) << endl;
				cout << "x3=" << sqr1.get_coord('x',3) << "\ty3=" << sqr1.get_coord('y',3) << endl;
				cout << "x4=" << sqr1.get_coord('x',4) << "\ty4=" << sqr1.get_coord('y',4) << endl;
				cout << "Perimeter=" << sqr1.perimeter() << endl;
				if(sqr1.is_sqr()==1){
					cout << "Area=" << sqr1.area() << endl << endl;
				}
				else {
					cout << "--Ene durs kvadrat bish baina!--" << endl << endl;
				}
			}
			else if(select==6){
				cout << "------------------------------------------------" << endl;
				cout << "----------------------Rombo---------------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				rom rom1;
				int x1, y1, x2, y2, x3, y3, x4, y4;
				cout << "x1 y1 x2 y2 x3 y3 x4 y4 >> ";
				cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
				rom1.set_coord(x1,y1,x2,y2,x3,y3,x4,y4);
				cout << "x1=" << rom1.get_coord('x',1) << "\ty1=" << rom1.get_coord('y',1) << endl;
				cout << "x2=" << rom1.get_coord('x',2) << "\ty2=" << rom1.get_coord('y',2) << endl;
				cout << "x3=" << rom1.get_coord('x',3) << "\ty3=" << rom1.get_coord('y',3) << endl;
				cout << "x4=" << rom1.get_coord('x',4) << "\ty4=" << rom1.get_coord('y',4) << endl;
				cout << "Perimeter=" << rom1.perimeter() << endl;
				if(rom1.is_rom()==1){
					cout << "Area=" << rom1.area() << endl << endl;
				}
				else {
					cout << "--Ene durs rombo bish baina!--" << endl << endl;
				}
			}
			else if(select==7){
				cout << "------------------------------------------------" << endl;
				cout << "----------------------Trapez--------------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				trap trap1;
				int x1, y1, x2, y2, x3, y3, x4, y4;
				cout << "x1 y1 x2 y2 x3 y3 x4 y4 >> ";
				cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
				trap1.set_coord(x1,y1,x2,y2,x3,y3,x4,y4);
				cout << "x1=" << trap1.get_coord('x',1) << "\ty1=" << trap1.get_coord('y',1) << endl;
				cout << "x2=" << trap1.get_coord('x',2) << "\ty2=" << trap1.get_coord('y',2) << endl;
				cout << "x3=" << trap1.get_coord('x',3) << "\ty3=" << trap1.get_coord('y',3) << endl;
				cout << "x4=" << trap1.get_coord('x',4) << "\ty4=" << trap1.get_coord('y',4) << endl;
				cout << "Perimeter=" << trap1.perimeter() << endl;
				if(trap1.is_trap()==1){
					cout << "Area=" << trap1.area() << endl << endl;
				}
				else {
					cout << "--Ene durs trapez bish baina!--" << endl << endl;
				}
			}
			else if(select==8){
				cout << "------------------------------------------------" << endl;
				cout << "----------------------Toirog--------------------" << endl;
				cout << "------------------------------------------------" << endl << endl;
				cyr cyr1;
				int x, y, r;
				cout << "x y r >> ";
				cin >> x >> y >> r;
				cyr1.set_coord(x,y,r);
				cout << "x1=" << cyr1.get_coord('x') << "\ty1=" << cyr1.get_coord('y') << "\tr=" << cyr1.get_r() << endl;
				cout << "Perimeter=" << cyr1.perimeter() << endl;
				if(cyr1.is_cyr()==1){
					cout << "Area=" << cyr1.area() << endl << endl;
				}
				else {
					cout << "--Ene durs toirog bish baina!--" << endl << endl;
				}
			}
			else if(select==0){
				cout << "Exitting..." << endl;
			}
			else {
				cout << endl << "Dahin oruulna uu" << endl;
			}
			system("pause");
			system("cls");
		}
		if(select == 0) break;
	}
	return 0;
}
