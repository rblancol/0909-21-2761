#include <iostream>
#include <cstdlib>

using namespace std;
int main()

{
	//opciones para elegir en el departamento en el que vive
	int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        int g1;
    float r1, r2, r3, r4, r5, r6;
	cout << "En que departamento vive para enviar su mercaderia" << endl;
	cout << "1. Guatemala" <<endl;
	cout << "2. Izabal" <<endl;
	cout << "3. Peten" <<endl;
	cout << "4. Chiquimula" <<endl;
	cout << "5. Retalhuleu" <<endl;
	cin >> g1;
	switch(g1){	
		case 1:
		
		    r1= 10;
		break;
		case 2:
		
		    r2= 300;
		break;
		case 3:
		   
		    r3= 460;
		break;
		case 4:
		
		    r4= 178;
		break;
	    case 5:
	    
	    	r5= 200;
	    break;
	    	
		
	}
	
	r6= r1+r2+r3+r4+r5;
	    cout << "La distancia del departamento es: " << r6 << endl;
        
        
        // Texto del menú que se verá cada vez
        cout << "Que tipo de mercaderia desea enviar: " << endl;
        cout << "1. Doumentos" << endl;
        cout << "2. Paqueteria" << endl;
        cout << "3. Mobiliario" << endl;
        cout << "4. Repuestos" << endl;
        cout << "5. art. Electronicos" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
	   
	   int documentos, tarifa=40, letra2, pesovol;
	   float resultado, peso=2.5, largo, ancho, alto, resultado2;
        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1                
				cout <<"Conoce el peso del articulo 1.s/2.n " << endl;
                cin>>letra2;
                switch (letra2)
                {
                	case 1:
					cout <<"De cuanto es el peso real maximo del producto"<< endl;
                    cin >> documentos;
					if (documentos > 35)
					{
						cout <<"El paquete es muy pesado"<<endl;
					}
					else
					{
						resultado = documentos * peso + tarifa;
					    cout << "La tarifa es de: " << resultado << endl;
						cout << "Gracias por preferirnos" <<endl;		
					}
					system("pause>nul"); // Pausa
                    break;
				    
					case 2:
				    cout << "Ingrese el largo del articulo" << endl;
                	cin >> largo;
                	cout << "Ingrese el ancho del articulo" << endl;
                	cin >> ancho;
                	cout << "Ingrese el alto del articulo" << endl;
                	cin >> alto;
                	resultado = largo * ancho * alto / 2272;
					cout << "El peso volumetrico es de: " << resultado << endl;
					resultado2 = resultado * peso + tarifa;
					cout << "La tarifa es de: " << resultado2 << endl;
					cout << "Gracias por preferirnos" <<endl;		
				}
				system("pause>nul"); // Pausa
                break;
				
				
                int paqueteria, letra;
			    float resultado2, resultado3, largo, ancho, alto, resultado4;   
			case 2:
                // Lista de instrucciones de la opción 2                
                cout <<"Conoce el peso del articulo 1.s/2.n " << endl;
                cin>>letra;
                
                switch (letra)
                
                {
                	case 1:
					cout <<"De cuanto es el peso real maximo del producto"<< endl;
                    cin >> paqueteria;
					if (paqueteria > 35)
					{
						cout <<"El paquete es muy pesado"<<endl;
					}
					else
					{
					    resultado3 = paqueteria * peso + r6;
					    cout << "La tarifa es de: " << resultado3 << endl;
					    cout << "Gracias por preferirnos" <<endl;	
					}
				    system("pause>nul"); // Pausa
                    break;
					
					case 2:
				    cout << "Ingrese el largo del articulo" << endl;
                	cin >> largo;
                	cout << "Ingrese el ancho del articulo" << endl;
                	cin >> ancho;
                	cout << "Ingrese el alto del articulo" << endl;
                	cin >> alto;
                	resultado3 = largo * ancho * alto / 2272;
                	cout << "El peso volumetrico es de: " << resultado3 << endl;
					resultado4 = resultado3 * peso + r6;
					cout << "La tarifa es de: " << resultado4 << endl;
					cout << "Gracias por preferirnos" <<endl;		
				}
				system("pause>nul"); // Pausa
                break;
                
                int mobiliario, letra2, largo1;
			    float resultado5, ancho1, alto1, resultado6;   
            case 3:
                // Lista de instrucciones de la opción 3                
                cout <<"Conoce el peso del articulo 1.s/2.n " << endl;
                cin>>letra2;
                
                switch (letra2)
                
                {
                 case 1:
					cout <<"De cuanto es el peso real maximo del producto"<< endl;
                    cin >> mobiliario;
					if (mobiliario > 35)		
				    {
				    	cout <<"El paquete es muy pesado"<<endl;
					}
				    else
				    {
				        resultado5 = mobiliario * peso + r6;
					    cout << "La tarifa es de: " << resultado5 << endl;
					    cout << "Gracias por preferirnos" <<endl;		
					}
				    system("pause>nul"); // Pausa
                    break;
				  
				 case 2:
				    cout << "Ingrese el largo del articulo" << endl;
                	cin >> largo;
                	cout << "Ingrese el ancho del articulo" << endl;
                	cin >> ancho;
                	cout << "Ingrese el alto del articulo" << endl;
                	cin >> alto;
                	resultado5 = largo * ancho * alto / 2272;
                	cout << "El peso volumetrico es de: " << resultado5 << endl;
					resultado6 = resultado5 * peso + r6;
					cout << "La tarifa es de: " << resultado6 << endl;
					cout << "Gracias por preferirnos" <<endl;
				    system("pause>nul"); // Pausa
                    break;  
				}
                system("pause>nul"); // Pausa
                break;
                
                int repuestos, letra3, largo2;
			    float resultado7, ancho2, alto2, resultado8;  
            case 4:
                // Lista de instrucciones de la opción 4                
                cout <<"Conoce el peso del articulo 1.s/2.n " << endl;
                cin>>letra3;
                
                switch (letra3)
                
                {
                 case 1:	
                	cout <<"De cuanto es el peso real maximo del producto"<< endl;
                    cin >> repuestos;
					if (repuestos > 35)
                	{
                		cout <<"El paquete es muy pesado"<<endl;
					}
                	else
                	{
                	    resultado7 = repuestos * peso + r6;
					    cout << "La tarifa es de: " << resultado7 << endl;
					    cout << "Gracias por preferirnos" <<endl;			
					}
                    system("pause>nul"); // Pausa
                    break;
			        
			     case 2:
			        cout << "Ingrese el largo del articulo" << endl;
                	cin >> largo;
                	cout << "Ingrese el ancho del articulo" << endl;
                	cin >> ancho;
                	cout << "Ingrese el alto del articulo" << endl;
                	cin >> alto;
                	resultado7 = largo * ancho * alto / 2272;
                	cout << "El peso volumetrico es de: " << resultado7 << endl;
					resultado8 = resultado7 * peso + r6;
					cout << "La tarifa es de: " << resultado8 << endl;
					cout << "Gracias por preferirnos" <<endl;
				    system("pause>nul"); // Pausa
                    break; 	
				}
                system("pause>nul"); // Pausa                
                break;
            
                int artElectronicos, letra4, largo3;
			    float resultado9, ancho3, alto3, resultado10;  
            case 5:
            	// Lista de instrucciones de la opción 5
            	cout <<"Conoce el peso del articulo 1.s/2.n " << endl;
                cin>>letra4;
                
                switch (letra4)
            	
            	{
            	 case 1: 	
            	    cout <<"De cuanto es el peso real maximo del producto"<< endl;
                    cin >> artElectronicos;
					if (artElectronicos > 35)	
            		{
            	        cout <<"El paquete es muy pesado"<<endl;	
					}
            		else
            		{
            		resultado9 = artElectronicos * peso + r6;
					    cout << "La tarifa es de: " << resultado9 << endl;
					    cout << "Gracias por preferirnos" <<endl;		
					}
            		system("pause>nul"); // Pausa
                    break;
            		
            	 case 2:	
            	    cout << "Ingrese el largo del articulo" << endl;
                	cin >> largo;
                	cout << "Ingrese el ancho del articulo" << endl;
                	cin >> ancho;
                	cout << "Ingrese el alto del articulo" << endl;
                	cin >> alto;
                	resultado9 = largo * ancho * alto / 2272;
                	cout << "El peso volumetrico es de: " << resultado9 << endl;
					resultado10 = resultado9 * peso + r6;
					cout << "La tarifa es de: " << resultado10 << endl;
					cout << "Gracias por preferirnos" <<endl;
				    system("pause>nul"); // Pausa
                    break; 		
				}
            	system("pause>nu1"); // Pausa
            	break;
            	
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir); //para repetir la opción
	 
    return 0;
}