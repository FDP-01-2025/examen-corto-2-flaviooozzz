#include <iostream>
using namespace std;
int main(){
    cout<<"Porfavor ingrese su edad ";
    int edad;
    cin>>edad;
    if(edad>=16){
    cout<<"ingrese su tipo de usuario(ingrese el numero)\n1. Estudiante\n2. Profesional\n3. Ver todos"<<endl;
    int usuario, producto;
    int saldo=1000;
    cin>> usuario;
    if(usuario==1){
        cout<<"Seleccione el producto que desea obtener(ingrese el numero)\n1. Laptop Basica: $900\n2. Tablet Estudiantil: $600\n3. Chromebook: $700 "<<endl;
        cin>>producto;
        switch (producto){
            case 1:
            if(saldo>=900){
                cout<<"usted adquirio una Laptop basica y su saldo restante es de: $"<<saldo-900*0.8;
            }
            break;
            case 2: 
            if(saldo>=600){
                cout<<"usted adquirio Table Estudiantil y su saldo restante es de: $"<<saldo-600*0.8;
            }
            break;
            case 3:
            if(saldo>=700){
                 cout<<"usted adquirio Chromebook y su saldo restante es de: $"<<saldo-700*0.8;
            }
            
        }
        
    }
    else if(usuario==2){
        cout<<"Seleccione el producto que desea obtener\n1. Laptop Avanzada: $1500\n2. Tablet Pro: $1200\n3. Estacion de Trabajo: $2000 "<<endl;
        cin>>producto;
        switch (producto){
            case 1:
            if(saldo>=1500){
                cout<<"compra exitosa";
            }
            else{
                cout<<"Usted selecciono el articulo Laptop avanzada, sin embargo tiene saldo insuficiente, le hacen falta: "<<1500*0.9-saldo;
            }
            break;
            case 2:
            if(saldo>=1200){
                cout<<"compra exitosa";
            }
            else{
                cout<<"Usted selecciono el articulo Tablet Pro, sin embargo tiene saldo insuficiente, le hacen falta: "<<1200*0.9-saldo;
            }
            break;
            case 3:
            if(saldo>=1500){
                cout<<"compra exitosa";
            }
            else{
                cout<<"Usted selecciono el articulo Estacion de Trabajo, sin embargo tiene saldo insuficiente, le hacen falta: "<<2000*0.9-saldo;
            }
            break;
            
            
            
        }
        
    }
    else if(usuario==3){
        cout<<"Seleccione el producto que desea obtener(ingrese el numero)\n1. Laptop Basica: $900\n2. Tablet Estudiantil: $600\n3. Chromebook: $700\n4. Laptop Avanzada: $1500\n5. Tablet Pro: $1200\n6. Estacion de Trabajo: $2000 ";
        cin>>producto;
        switch (producto){
            case 1:
            if(saldo>=900){
                cout<<"usted adquirio una Laptop basica y su saldo restante es de: $"<<saldo-900;
            }
            break;
            case 2: 
            if(saldo>=600){
                cout<<"usted adquirio Table Estudiantil y su saldo restante es de: $"<<saldo-600;
            }
            break;
            case 3:
            if(saldo>=700){
                 cout<<"usted adquirio Chromebook y su saldo restante es de: $"<<saldo-700;
            }
            break;
            case 4:
            if(saldo>=1500){
                cout<<"compra exitosa";
            }
            else{
                cout<<"Usted selecciono el articulo Laptop avanzada, sin embargo tiene saldo insuficiente, le hacen falta: "<<1500-saldo;
            }
            break;
            case 5:
            if(saldo>=1200){
                cout<<"compra exitosa";
            }
            else{
                cout<<"Usted selecciono el articulo Tablet Pro, sin embargo tiene saldo insuficiente, le hacen falta: "<<1200-saldo;
            }
            break;
            case 6:
            if(saldo>=1500){
                cout<<"compra exitosa";
            }
            else{
                cout<<"Usted selecciono el articulo Estacion de Trabajo, sin embargo tiene saldo insuficiente, le hacen falta: "<<2000-saldo;
            }
            break;
            
        }
            
    }
}
    else{
        cout<<"menores a 16 años no pueden proceder";
    }

}