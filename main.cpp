#include <iostream>
using namespace std;
/*
long double pixi,pot;

int plusz(long double p,long double x) {
if (x==0) return 1;
else return p*plusz(p,x-1);
}
*/
/*
long double d,s,g;
int main() {

    cout << "licznik m3 drzewa" << endl;
    for (;;) {
cout << "Wprowadz szerokosc,dlugosc i grubosc"<<endl;
cin >> d >> s >> g;
cout << d*s*g << "m3" << endl;
    }
    return 0;
}
*/

/*
cin >> pixi >> pot;
cout << plusz(pixi,pot) << endl;
    }
return 0;
}

 adres zmienej
{
    int a = 2;
    int * b;
    b = & a;
    cout << "adres zmiennej " << & a;
    cout << "adres w wskaŸniku " << b;
}


float liczba;
float srednia;
main () {
cout << "wprowadz ocene";
cin >> liczba;
for(int i=0;i<=liczba;i++) {
    cout << i << endl;
}
return 0;
}

 szukanie adresu pamieci ram
int *d;
cout << &d;
return 0;
}


float dodaj;
float c;
dad(float d,float c) {
return d*c;
}
int main() {
cout << "pomnoz" << endl;
cin >> dodaj;
cin >> c;
cout << dad(dodaj,c);
return 0;
}

/*
// licznik wieku
int wiekasi,kol,lata;
int main()
{
cout << "Wprowadz swoj wiek" << endl;
cin >> wiekasi;
cout << "Podaj wiek 2 osoby" << endl;
cin >> kol;
cout << "Ile teraz masz lat?"<< endl;
cin >> lata;
if (wiekasi-kol<0) {
    cout << "Twoja starsza osoba ma " << ((wiekasi - kol) - lata) << " lata";
}
else {
cout << "Twoja mlodsza osoba ma " << ((wiekasi - kol) - lata) << " lata";
}
return 0;
}



*/
// kalkulator
/*
float liczba1,liczba2;
int wybranaopcja;
float wynik;
int main() {
          cout << "Policz z kapitanem"<< endl;
  for (;;) {
        cout << "*************************************************" << endl;
  cout <<"napisz liczby:" << endl;
  cout << "liczba 1:";
  if (!(cin >> liczba1)) {
    cerr << "to nie jest liczba!";
    exit (0);
  }
  cout << "liczba 2:";
    if (!(cin >> liczba2)) {
    cerr << "to nie jest liczba!";
    exit (0);
  }
  cout <<"---------------------------------------------------------"<< endl;
  cout << "legenda:" << endl;
  cout << "1. dodaj"<< endl;
  cout << "2. odejmij" << endl;
  cout << "3. pomnoz" << endl;
  cout << "4. podziel" << endl;
  cout << "5. zamknij" << endl;
  cout << "wybierz opcje nr:";
 cin >> wybranaopcja;
 cout <<"---------------------------------------------------------"<< endl;
   if (wybranaopcja == 1) {
     cout << "wynik dodawanie:" << liczba1+liczba2 << endl;
   }
   else if (wybranaopcja == 2) {
    cout << "wynik odejmowania:" << liczba1 - liczba2 << endl;
   }
   else if (wybranaopcja == 3) {
     cout << "wynik mnozenia:" << liczba1 * liczba2 << endl;
   }
   else if (wybranaopcja == 4) {
               if (liczba2==0) {
        cout << "Nie mozna dzielic przez 0!!!" << endl;
    }
    else if (liczba2==liczba2) cout << "wynik dzielenia:" << liczba1 / liczba2 << endl;
   }
      else if (wybranaopcja == 5){
    exit(0);
      }
   else {
    cout << "Wprowadzono nieprawidlowe dane!!!" <<endl ;
   }
    }
     return 0;
}
// kalkulator
*/
/*
int main() {
while (true) {
    cout << "pixi";
}
}
*/





float liczba1,liczba2;
int wybranaopcja;
float wynik;
int main() {
          cout << "Policz z kapitanem"<< endl;
  for (;;) {
        cout << "*************************************************" << endl;
  cout <<"napisz liczby:" << endl;
  cout << "liczba 1:";
  if (!(cin >> liczba1)) {
    cerr << "to nie jest liczba!";
    exit (0);
  }
  cout << "liczba 2:";
    if (!(cin >> liczba2)) {
    cerr << "to nie jest liczba!";
    exit (0);
  }
  cout <<"---------------------------------------------------------"<< endl;
  cout << "legenda:" << endl;
  cout << "1. dodaj"<< endl;
  cout << "2. odejmij" << endl;
  cout << "3. pomnoz" << endl;
  cout << "4. podziel" << endl;
  cout << "5. zamknij" << endl;
  cout << "wybierz opcje nr:";
 cin >> wybranaopcja;
 cout <<"---------------------------------------------------------"<< endl;

 switch(wybranaopcja) {
   case 1:
     cout << "wynik dodawanie:" << liczba1+liczba2 << endl;
     break;
   case 2:
    cout << "wynik odejmowania:" << liczba1 - liczba2 << endl;
    break;
   case 3:
     cout << "wynik mnozenia:" << liczba1 * liczba2 << endl;
     break;
   case 4:
        if (liczba2==0) cout << "Nie mozna dzielic przez 0!!!" << endl;
        if (liczba2==liczba2) cout << "wynik dzielenia:" << liczba1 / liczba2 << endl;
    break;
   case 5:
    exit(0);
    default:
    cout << "Wprowadzono nieprawidlowe dane!!!" <<endl ;
   }
    }
     return 0;
}
