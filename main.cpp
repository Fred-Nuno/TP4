#include <iostream>
#include <Ex1.h>
#include <Ex2.h>
#include <Ex3.h>


int main()
{
    //______ Exercise 1_________

//    double len = 10;
//    double wd = 7;
//    RectangleArea rect;
//    double A = rect.Rec_Area(len,wd);
//    std::cout<<"The Area of my Rectangle is : " << A << "\n";


    //______ Exercise 2_________

//    int n1,n2;

//    std::cout<<"Enter the 1st Number: \n";
//    std::cin>>n1;
//    std::cout<<"Enter the 2nd Number: \n";
//    std::cin>>n2;

//    NumbAdd mine (n1, n2);
//    int res = mine.Addition();
//    std::cout<<"The sum of 2 Numbers is : " << res <<"\n";

    //______ Exercise 3_________


    Complex num1, num2;
    num1.Set();
    num2.Set();
    Complex Ans;
    Ans = Add(num1,num2);
    Ans.Display();

    return 0;
}
