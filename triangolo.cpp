#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;

class triangle
{
    public:
        float catetoa, catetob, ipotenusa, alfa, sinalfa, cosalfa;
        int ele, x;
        void get_func(), cal_a(), cal_b(), cal_ipo();
        void cal2_a(), cal2_b();
};

void triangle::cal2_a()
{   
    cout << "inserisci angolo alfa: ";
    cin >> triangle::alfa;
    triangle::sinalfa = sin(triangle::alfa*PI/180);
    triangle::catetoa = triangle::ipotenusa * triangle::sinalfa;
    cout << "cateto a = " << triangle::catetoa << endl;
    system("pause");
}

void triangle::cal_a()
{
    cout << "Inserisci cateto b: ";
    cin >> triangle::catetob;
    cout << "inserisci ipotenusa: ";
    cin >> triangle::ipotenusa;
    if(triangle::ipotenusa == 0)
        cout << "errore(ipotenusa mancante)" << endl;
    else if(triangle::catetob == 0)
        {
        cout << "cateto b mancante" << endl;
        triangle::cal2_a();
        }
    triangle::catetoa = sqrt((triangle::ipotenusa*triangle::ipotenusa)-(triangle::catetob*triangle::catetob));
    cout << "cateto a = " << triangle::catetoa << endl;
}

void triangle::cal2_b()
{
    cout << "inserisci angolo alfa: ";
    cin >> triangle::alfa;
    triangle::cosalfa = cos(triangle::alfa*PI/180);
    triangle::catetob = triangle::cosalfa * triangle::ipotenusa;
    cout << "cateto b = " << triangle::catetob << endl;
    system("pause");
}

void triangle::cal_b()
{
    cout << "inserisci cateto a: ";
    cin >> triangle::catetoa;
    cout << "inserisci ipotenusa: ";
    cin >> triangle::ipotenusa;
    if(triangle::catetoa == 0)
        {
        cout << "cateto a mancante" << endl;
        triangle::cal2_b();
        }
    else if(triangle::ipotenusa == 0)
        cout << "errore(ipotenusa mancante)";
    triangle::catetob = sqrt((triangle::ipotenusa*triangle::ipotenusa)-(triangle::catetoa*triangle::catetoa));
    cout << "cateto b = " << triangle::catetob << endl;
}

void triangle::cal_ipo()
{
    cout << "inserisci cateto a: ";
    cin >> triangle::catetoa;
    cout << "inserisci cateto b: ";
    cin >> triangle::catetob;
    if(triangle::catetoa == 0)
        cout << "errore(cateto a mancante)";
    else if(triangle::catetob == 0)
        cout << "errore(cateto b mancante)";
    triangle::ipotenusa = sqrt((triangle::catetoa*triangle::catetoa)+(triangle::catetob*triangle::catetob));
    cout << "ipotenusa = " << triangle::ipotenusa << endl;
}

void triangle::get_func()
{
    cout << "che elemento del triangolo vuoi trovare?" << endl;
    cout << "1. Cateto a" << endl;
    cout << "2. Cateto b" << endl;
    cout << "3. Ipotenbusa" << endl;
    cin >> triangle::ele;
}

int main()
{
    triangle triangolo;
    triangolo.get_func(); 
    if(triangolo.ele == 1)
        triangolo.cal_a();
    else if(triangolo.ele == 2)
        triangolo.cal_b();
    else if(triangolo.ele == 3)
        triangolo.cal_ipo();
}