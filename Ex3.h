#ifndef EX3_H
#define EX3_H

class Complex {
private:
    int real, imgr;
public:
    Complex()
        :   real(0), imgr(0){
    }
    Complex(int r, int i)
        :   real (r), imgr (i) {

    }
void Set();
void Display();
friend Complex Add(Complex, Complex);
};

#endif // EX3_H
