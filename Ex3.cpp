#include <Ex3.h>
#include <iostream>

void Complex::Set() {
   std::cout << "Enter Real part: ";
   std::cin >> real;
   std::cout << "Enter Imaginary Part: ";
   std::cin >> imgr;
}

Complex Add(Complex c1, Complex c2) {
   Complex res;
   res.real = c1.real + c2.real;//addition for real part
   res.imgr = c1.imgr + c2.imgr;//addition for imaginary part
   return res;//the result after addition
}

void Complex::Display() {
    if(imgr < 0)
        if(imgr == -1)
            std::cout << "The Result is: "<< real << "-i \n";
        else
            std::cout << "The Result is: "<< real << imgr << "i\n";
    else
        if(imgr == 1)
            std::cout << "The Result is: "<< real << " + i\n";
        else
            std::cout << "The Result is: "<< real << " + " << imgr << "i\n";
}
