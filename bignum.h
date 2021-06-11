/*
Universidad de Buenos Aires
Facultad de Ingenieria

Algoritmos y Programación II - Trabajo Practico N°0

Integrantes:
Berard, Lucıa Magdalena		101213  lberard@fi.uba.ar
Guglieri, Mariano Federico    	99573	mguglieri@fi.uba.ar
Rubin, Ivan Eric		100577  irubin@fi.uba.ar
Sandoval, Diego Ariel		101639  dsandoval@fi.uba.ar
*/
#include<iostream>
#include<string>
using namespace std;
/*
#ifndef BIGNUM_INCLUDED
#define BIGNUM_INCLUDED

#define ASCII_FIX 48*/
/*
class bignum
{
  private:
    unsigned short *digits;
    unsigned short len;
    bool signo; //True sea positivo y False sea Negativo

  public:

    bignum(void);
    bignum(const unsigned short);
    bignum(const string&);
    ~bignum();

    void set_signo(bool);
    bool get_signo();
    unsigned char get_len();
    void set_precision(const unsigned short);

    friend bignum operator+(const bignum&, const bignum&);
    friend bignum operator-(const bignum&, const bignum&);
    friend bignum operator-(const bignum&);
    friend bignum operator*(const bignum&, const bignum&);
    const bignum& operator=(const bignum&);
    const bignum& operator=(const string&);

    friend bool operator==(const bignum&, const bignum&);
    friend bool operator<(const bignum&, const bignum&);
    friend bool operator>(const bignum&, const bignum&);

    friend std::ostream& operator<<(std::ostream&, const bignum&);
    friend std::istream& operator>>(std::istream&, bignum&);
};
*/
class suma5{
private:
  int operacion;

public:
  suma5(int & x){
    operacion = x + 5;
  }
  istream& operator>>(istream& is, suma5& num)
  {
    string s;
    is >> s;
    while(!(s.find_first_not_of( "0123456789" ) == string::npos) && (s[0]!='-' && s[0]!='+'))
    {
      cerr << "El valor ingresado no es correcto. Intente nuevamente." << endl;
      is >> s;
    }
    num = s;
    return is;
  }
};

//#endif
