/* If the declaration is not a definition, 
 * write a definition for it. If the declaration
 * is a definition, write a declaration for it that
 * is not also a definition.*/
#include <iostream>
#include <string>
#include <complex>

    char ch;//Definition
    extern char ch2;
    std::string s;//D
    extern std::string s2;
    int count = 1;//D
    extern int count2;
    const double pi = 3.1415926535897932385;//D
    extern const double pi2;
    extern int error_number;
    int error_number2;//D
    char* name = "Njal";//D
    extern char* name2;
    char* season[] = { "spring", "summer", "fall", "winter" };//D
    extern char* season2[];
    struct Date { int d, m, y; };//D
    struct Date2;
    int day(Date* p) { return p->d; } //D
    int day2(Date* );
    double sqrt(double);
    double sqrt2(double p){return p;}//D
    template<class T> T abs(T a) { return a<0 ? -a : a; }//D
    template<class T> T abs2(T);
    typedef std::complex<short> ;
    typedef std::complex<short> Point;//D
    struct User;
    struct User2 { int a;};//D
    enum Beer { Carlsberg, Tuborg, Thor };//D
    extern enum Beer B;
    namespace NS { int a; }//D

