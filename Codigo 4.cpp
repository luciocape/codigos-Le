#include <iostream>

using namespace std;
class pizza{
    private:
    int kilos_harina;
    int gramos_queso;
    int gramos_cebolla;
    
    public:
    pizza (int,int,int);
    int cant_pizzas(int,int,int);
};

pizza::pizza(int harina,int queso,int cebolla){
    kilos_harina = harina;
    gramos_queso = queso;
    gramos_cebolla = cebolla;
}

int pizza::cant_pizzas(int cant_h,int cant_q, int cant_c){
    
    int pizzasXh = this->kilos_harina/cant_h;
    int pizzasXq = this->gramos_queso/cant_q;
    int pizzasXc = this->gramos_cebolla/cant_c;
    
    cout<<"\npizzasXh: "<<pizzasXh<<"\tpizzasXq: "<<pizzasXq<<"\tpizzasXc: "<<pizzasXc<<endl;
    
    if (pizzasXh<pizzasXq && pizzasXh<pizzasXc){
        cout<<"se pueden hacer "<<pizzasXh<<" pizzas"<<endl;
    }
    else if(pizzasXq<pizzasXc){
        cout<<"se pueden hacer "<<pizzasXq<<" pizzas"<<endl;
    }
    else cout<<"se pueden hacer "<<pizzasXc<<" pizzas"<<endl;
}

int main()
{
    int a,b,c,d,e,f;
    
    cout<<"introduce la cantidad de kilos de harina:\n";
    cin>>a;
    cout<<"introduce la cantidad de gramos de queso:\n";
    cin>>b;
    cout<<"introduce la cantidad de gramos de cebolla:\n";
    cin>>c;
    
    pizza ronda1(a,b,c);
    cout<<"introduce cuantos kilos de harina se necesitan:\n";
    cin>>d;
    cout<<"introduce cuantos gramos de queso se necesitan:\n";
    cin>>e;
    cout<<"introduce cuantos gramos de cebolla se necesitan:\n";
    cin>>f;
    
    ronda1.cant_pizzas(d,e,f);

    return 0;
}
