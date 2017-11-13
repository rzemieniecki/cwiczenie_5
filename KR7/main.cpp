#include <iostream>

using namespace std;





class A {
public:
virtual void foo() { cout << "Jestem A" << endl; }
};

class B : public A {
public:
virtual void foo() { cout << "Jestem B" << endl; }
};

A* a = new A;
A* b = new B;
a­>foo();
b­>foo();

class Sygnal {
public:
virtual ~Sygnal() {}
virtual double x(double t) = 0;
virtual void wypisz(std::ostream& s) = 0;
friend std::ostream& operator<<(std::ostream& s, const Sygnal&
sygnal) {
sygnal.wypisz(s);
return s;
}
};

class SygnalSinusoidalny : public Sygnal {
public:
SygnalSinusoidalny(double a=1.0, double w=1.0, double psi=0.0) :
_a(a), _w(w), _psi(psi) {}
virtual ~SygnalSinusoidalny() {}
virtual double x(double t) {
return _A * sin(_w * t + _psi);
}
virtual void wypisz(std::ostream& s) {
s << "Sygnal sinusoidalny" << endl;
s << " ­ A= " << _A << endl;
s << " ­ w= " << _w << endl;
s << " ­ psi= " << _psi << endl;
}
private:
double _A;
double _w;
double _psi;
};

class A {
public:
virtual ~A();
virtual wypisz(std::ostream& strumien) = 0;
friend std::ostream& operator<<(std::ostream& strumien, const A&
a) {
a.wypisz(strumien);
return strumien;
}
};

class B : public A {
public:
B();
virtual ~B();
virtual wypisz(std::ostream& strumien) {
strumien << _zmienna << endl;
}
private:
string _zmienna;
};




    return 0;
}
