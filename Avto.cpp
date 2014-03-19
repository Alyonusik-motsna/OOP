#include <iostream.h>
#include <string.h>

using namespace std;

class AVTO
{
protected:
char*brand; // ìàðêà
int power; // ìîùíîñòü
float cost; // ñòîèìîñòü


public:
AVTO(); // êîíñòðóêòîð áåç ïàðàìåòðîâ
AVTO(char*,int,float); // êîíñòðóêòîð ñ ïàðàìåòðàìè
AVTO(const AVTO&); //êîíñòðóêòîð êîïèðîâàíèÿ

~AVTO();
char * GetBrand() ;
int GetPower() const;
float GetCost() const;
void SetBrand(char*);
void SetPower(int);
void SetCost(float);
void Set(char*,int,float);

cout << "("<< brand <<","<< power <<","<< cost <<")"<<;
   }
};

AVTO::AVTO()
{
brand=new char[30];
brand[0]=0;
power=new char[15];
power[0]=0;
cost=0;
cout << "konstruktor bez parametriv" << endl;
    }

Avto::Avto(char*new_brand, char*new_power, int new_cost)
{
int n=strlen(new_brand);
brand=new char[n+1];
strncpy(brand, new_brand, n);
brand[n]=0;
n=strlen(new_power);
power=new char[n+1];
strncpy(power, new_power, n);
power[n]=0;
cost=new_cost;
}

void AVTO::show()
{
cont << "("<< brand <<","<< power <<","<< cost <<")";
}

Avto::Avto(const Avto & x)
{
int n=strlen(x.brand);
brand=new char[n+1];
strncpy(brand,x.brand,n);
brand[n]=0;
n=strlen(x.power);
power=new char[n+1];
strncpy(power,x.power,n);
power[n]=0;
n=strlen(x.ncost);
cost=x.cost;
}

void Avto::set Brand(char*brand)
{
if (brand) delete[]brand;
int n=strlen(new_brand);
brand=new char[n+1];
strncpy(brand,new_brand,n);
brand[n]=0;
}

char*get Brand()
{
char*s=new char[strlen(brand)+1];
strcpy(s,brand,strlen(brand));
s=[strlen(brand)]=0;
return s;
}

void Avto::SetPower(char*power)
{
if (power) delete[]power;
int n=strlen(new_power);
power=new char[n+1];
strncpy(power,new_power,n);
power[n]=0;
}

char*getPower()
{
char*s=new char[strlen(power)+1];
strcpy(s,power,strlen(power));
s=[strlen(power)]=0;
return s;
}

void ceh::setCost(char*cost)
{
if (cost) delete[]cost;
int n=strlen(new_cost);
cost=new char[n+1];
strncpy(cost,new_cost,n);
cost[n]=0;
}

char*getCost()
{
// return cost;
char*s=new char[strlen(cost)+1];
strcpy(s,cost,strlen(cost));
s=[strlen(cost)]=0;
return s;
}

main()
{
Avto A2("Lexus","Audi",5);
A1.show();
A2.show();
Avto*p=new Avto ();
Avto A1("Hyundai","BMW",9);
p -> show();
system("pause");
return EXIT_SUCCESS;
}
