#include <iostream>

#ifdef _WIN32
    #include <windows.h> // Para Windows
#elif defined(linux) || defined(unix)
    #include <cstdlib>   // Para Linux y Unix
#elif defined(APPLE)
    #include <unistd.h>  // Para macOS
#endif
using namespace std;

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls"); // Para Windows
    #elif defined(linux) || defined(unix)
        system("clear"); // Para Linux y Unix
    #elif defined(APPLE)
        system("clear"); // Para macOS
    #endif
}

void mostrarMenu()
{
cout << "------------------\"SPORT-MARKET\"--------------------" << endl;
cout << "\t 1)Bienvenida" << endl;
cout << "\t 2)Buscador/comprar" << endl;
cout << "\t 3)Categorias" << endl;
cout << "\t 4)ADMINISTRADOR" << endl;
cout << "\t 5)Manual de usuario" << endl;
cout << "\t 6)Salir" << endl;
cout << "-------------------------------------------------------" << endl;
}
void Bienvenida()
{
cout<<"--------------BIENVENIDOS A SPORT-MARKET-----------"<<endl;
cout<<"Somos una tienda de productos deportivos que te ofrece"<<endl;
cout<<"productos de la mas alta calidad y con promociones de acuerdo"<<endl;
cout<<"a tus necesidades, desde zapatos, hasta prendas deportivas."<<endl;
cout<<"Puedes navegar sin necesidad de suscribirte a nuestra empresa"<<endl;
cout<<"pero si deseas hacer una reserva o una compra, se solicitara "<<endl;
cout<<"datos para tu servicio. Esperamos tengas la mejor experiencia"<<endl;
cout<<"y agradecemos tu preferencia sobre todo,"<<endl;
cout<<"QUE TENGAS UN MARAVILLOSO DIA!!!"<<endl;
cout<<"-Equipo administrativo de Sport-Market."<<endl;
cout<<endl;
cout<<"0) Volver."<<endl;
cout<<"1) Salir del programa."<<endl;
}
void Categoria()
{
cout<<"-----------------------------------------------------"<<endl;
cout << "    ELIGE LA CATEGORIA QUE TE INTERESA:" << endl;
cout << "    1: CAMISETAS" << endl;
cout << "    2: JEAN" << endl;
cout << "    3: ZAPATOS" << endl;
cout << "    4: ACCESORIOS"<<endl;
cout << "    0: VOLVER AL MENU INICIAL" << endl;
cout << "-----------------------------------------------------"<<endl;
}
void articulo(string nombre,int stock,double precio_Bs,double precio_dolar,int serie){
cout<<endl;
cout<<" __________________________________________"<<endl;
cout<<endl;
cout<<" 	Nombre: "<<nombre<<endl;
cout<<" 		Stock: "<<stock<<endl;
cout<<" 		Bs. "<<precio_Bs<<endl;
cout<<" 		$. "<<precio_dolar<<endl;
cout<<"	    	codigo: "<<serie<<endl;
cout<<" __________________________________________"<<endl;
cout<<endl;

}
void contacto(int serie){
cout<<"Para la adquisicion del producto, pongase en contacto con nuestra"<<endl;
cout<<"Tienda ESTILO SPORT para la adquisicion del producto"<<endl;
cout<<"Contacto: +591 78425610 Whatsapp"<<endl;
cout<<"Codigo de serie del producto seleccionado: "<<serie<<endl;
}
int evalua (int x, int y, int opcion){
    while((opcion<x) || (opcion>y)){
        cout<<"Opcion NO disponible, vuelve a ingresar: "<<endl;
        cin>>opcion;}
        return opcion;}

//--------------------------------------PRINCIPAL------------------------------------------------------------

int main() {
int opcion, opcion2=0, opcion3;

while (opcion == 0){
mostrarMenu();
cin>>opcion;
opcion=evalua(1,6,opcion);
limpiarPantalla();
//---------------------------------inicio switch
switch(opcion){
    case 1: Bienvenida();cin>>opcion;
    opcion=evalua(0,1,opcion);break;
    //----------------------------------------------------caso 1
    case 2: cout<<"Ingrese el numero de serie (tambien puede ingresar una de las opciones abajo): "<<endl;
    cout<<"0) Volver."<<endl;
    cout<<"1) Salir del programa."<<endl;
    cin>>opcion;
    opcion=evalua(0,1,opcion);break;
    //-----------------------------------------------------caso 2
    case 3:
            while(opcion2==0){
            Categoria();cin>>opcion;
            opcion=evalua(0,4,opcion);
            limpiarPantalla();
            switch(opcion){
                case 0:
                    opcion2=5;
                    break;
                case 1:
                    articulo("2) AIR-JORDAN WORDMARK",50,700,100,10011);
                    articulo("3) NIKE DRI-FIT",50,1750,250,10012);
                    articulo("4) JORDAN JUMPMAN",50,350,50,10013);
                    cout<<"Selecciona un producto o elige una de las opciones "<<endl;
                    cout<<"0) Volver."<<endl;
                    cout<<"1) Salir del programa."<<endl;
                    cin>>opcion2;
                    opcion2=evalua(0,4,opcion2);
                    limpiarPantalla();
                    switch (opcion2){
                    case 2:
                        contacto(10011);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                        break;
                    case 3:
                        contacto(10012);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                    case 4:
                        contacto(10013);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                        break;}
                        opcion2=0;
                    break;
                case 2:
                    articulo("2) NIKECOURT",50,1400,200,10014);
                    articulo("3) JORDAN SPORT DRI-FIT",50,1750,250,10015);
                    articulo("4) JORDAN GOLF",50,2100,300,10016);
                    cout<<"0) Volver."<<endl;
                    cout<<"1) Salir del programa."<<endl;
                    cin>>opcion2;
                    opcion2=evalua(0,4,opcion2);
                    limpiarPantalla();
                    switch (opcion2){
                    case 2:
                        contacto(10014);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                        break;
                    case 3:
                        contacto(10015);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                    case 4:
                        contacto(10016);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                        break;}
                        opcion2=0;
                    break;
                case 3:
                    articulo("2) NIKE AIR MAX ALPHA TRAINER",50,2800,400,10017);
                    articulo("3) AIR JORDAN 1 LOW",50,1400,200,10018);
                    articulo("4) NIKE OFF-WHITE (GOLDEN DUNK)",50,2100,300,10019);
                    cout<<"0) Volver."<<endl;
                    cout<<"1) Salir del programa."<<endl;
                    cin>>opcion2;
                    opcion2=evalua(0,4,opcion2);
                    limpiarPantalla();
                        switch (opcion2){
                    case 2:
                        contacto(10017);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                        break;
                    case 3:
                        contacto(10018);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                    case 4:
                        contacto(10019);
                        cout<<"0) Volver."<<endl;
                        cout<<"1) Salir del programa."<<endl;
                        cin>>opcion3;
                        opcion2=evalua(0,1,opcion3);
                        limpiarPantalla();
                        break;}
                        opcion2=0;
                    break;
                case 4:
                    cout<<"MUY PRONTO"<<endl;
                    cout<<"0) Volver."<<endl;
                    cout<<"1) Salir del programa."<<endl;
                    cin>>opcion2;
                    opcion2=evalua(0,1,opcion2);
                    limpiarPantalla();
                    break;}}
                    opcion2=0;
                break;
    case 4: cout<<"muy pronto"<<endl;
        cout<<"0) Volver."<<endl;
        cout<<"1) Salir del programa."<<endl;
        cin>>opcion;
        opcion=evalua(0,1,opcion);limpiarPantalla();
        break;
    case 5: cout<<"muy pronto"<<endl;
        cout<<"0) Volver."<<endl;
        cout<<"1) Salir del programa."<<endl;
        cin>>opcion;
        opcion=evalua(0,1,opcion);limpiarPantalla();
        break;
    case 6: break;
 break;}
 limpiarPantalla();
}}
