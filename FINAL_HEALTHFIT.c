#include <stdio.h>
#include <string.h>

char Introduccion();
int Opciones();
int Recetas();
int Desayunos();
int Ensaladas();
int Fitness();
int Pastas();
int Pizzas();
int Postres();
int Minutos();
int Calculadora();
int Ejercicios();

struct Registro{
	char nombre[20];
	char apellidos[30];
	int edad;
	char usuario1[20];
	int password,contra;
};
struct Usuario{
	char usuario2[20];
	int contrasenia;
};

struct Calculadora{
	float peso, altura, imc;
	int edad,  opcion80;
	float qH,qM;
};

struct Alimentos{
	char alimento[20];
};

int main(){
	system("color 3F");
	struct Registro personas[50];
	struct Usuario personas1[1];
	struct Calculadora n;
	struct Alimentos mis_recetas[25] = {{"cebolla"}, {"ajo"}, {"pimiento"}, {"chocolate"}, 
	{"pollo"}, {"limon"}, {"brocoli"}, {"frambuesa"}, {"yogurt"}, {"jamon"}, {"platano"}, 
	{"aguacate"}, {"atun"}, {"arroz"}, {"lentejas"}, {"naranja"}, {"manzana"}, {"nueces"},
    {"judias"}, {"espaguetis"}, {"champiñon"}, {"miel"}};
	int i=0;
	int x;
	int contador=0;
	int chivato=0, chivato1=0, chivato2=0;
	int valor;
	char intento;
	char masUsuarios;
	char usuario[10];
	int longUsuario1=0, longUsuario2=0;
	char opcion1;
	int opcion2;
	int opcion3;
	int opcion4;
	int opcion5;
	int opcion6;
	int opcion7;
	int opcion8;
	int opcion9;
	int opcion10;
	int opcion11;
	int opcion12;
	int opcion13;
	int opcion14;
	int opcion15;
	char linea [80000];
	char name[100];
	int iContador, iEncontrado;
	do{
	opcion1=Introduccion();
	
	switch(opcion1){
	
		case 'A': {
	    	system("cls");
	    	printf("\n");
	    	printf("INICIO SESI%CN\n",224);
	    	printf("\n");
			  
			do{
			

			fflush(stdin);    
		  	printf("Nombre de usuario: ");
			scanf("%s", personas1[1].usuario2);
			longUsuario2=strlen(personas1[1].usuario2);
		    	if(longUsuario2<4)
		  		printf("Al menos tiene que tener 4 caracteres\n");	  
			}while(longUsuario2<4);
			
			for(i=0;i<=contador;i++){
				if(strcmp(personas[i].usuario1,personas1[1].usuario2)==0){
					chivato1=1;
				
					break;
				}
			}
			
			if(chivato1==1){
		
				fflush(stdin);
				printf("contrase%ca: ",164);
				scanf("%i",&personas1[1].contrasenia);
				
				for(i=0;i<=contador;i++){
					if(strcmp(personas[i].usuario1,personas1[1].usuario2)==0){
						if(personas[i].password == personas1[1].contrasenia){
						chivato2=1;
					}
				}
			}
				if(chivato2==1){
					printf("\n");
					fflush(stdin);
					
					
					do{
					
					opcion2=Opciones();
					
					switch (opcion2){
						case 1:{
							
								do{
									
							opcion3=Recetas();
							
							switch (opcion3){
								case 1:{
									do{
								
										
									printf("\n");
									opcion4=Desayunos();
									
									switch (opcion4){
										case 1:{
											
										
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("CREPES1.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
	                                            
		                                	
											break;
								       	}
										case 2 :{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("TORTITAS2.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
	                                                
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
                                                          
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                  	
	                                                    	
		
											break;
							     		}
										case 3:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("Tostadas3.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
                                                          
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                        
											break;
									    }
										case 4:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("Bowl4.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%CMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                     	
											
										    break;
										}
										case 5: {
											printf("Salir\n");
											
											break;
										}
								
									}
						
								}while(opcion4!=5);
									
								break;
					        	}
					 	
								
							
						
						
						
								case 2:{
									do{
									
									opcion5=Ensaladas();
									
									switch (opcion5){
										case 1:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("ENARANJA1.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
                                                          
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                  	
	                                                    	
											break;
										}
										case 2:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("EATUN2.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                     	
											
											break;
										}
										case 3:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("EPOLLO3.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                        printf("\n");
		                                    printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                    scanf("%i",&x);
		                                 
											
											break;
										}
										case 4:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("ELENTEJAS4.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                  	
											break;
										}
										case 5:{
											printf("Salir\n");
											break;
										}	
									}
							
								
								}while(opcion5!=5);
								break;
							}
								case 3:{
								
									do{
									
									opcion6=Fitness();
										
										switch (opcion6){
											case 1:{
												system("cls");
												FILE * pfichero;
                                             	pfichero = fopen("judias1.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
                                                          
                                                          return 0;
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                    	
												break;
											}
											case 2:{
												system("cls");
												FILE * pfichero;
                                             	pfichero = fopen("pollo2.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
												break;
											}
											case 3:{
												system("cls");
												FILE * pfichero;
                                            	pfichero = fopen("galletas3.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                   	
												break;
											}
											case 4:{
												system("cls");
												FILE * pfichero;
                                            	pfichero = fopen("batido4.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                       	
												break;
											}	
											case 5:{
												printf("Salir\n");
												break;
											}
											}	
												
						
									}while(opcion6!=5);
									break;	
								}
								case 4:{
									
									do{
									
									opcion7=Pastas();
									
									switch (opcion7){
										case 1:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("ESPAGUETIS1.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      
											break;
										}
										case 2:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("TALLARINES2.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                     	
											
											break;
										}
										case 3:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("ESPAGUETIS3.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                        
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											break;
										}
										case 4:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PASTA4.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											
											break;
											
										}	
										case 5:{
									        printf("Salir\n");
											break;
										}
										}	
								 }while(opcion7!=5);
									break;
								}
								case 5:{
									do{
										
								   opcion8=Pizzas();
									
									switch(opcion8){
										case 1:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PMINI1.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											break;
										}
											
										case 2:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PCOLIFLOR2.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                  	
											break;
										}
										case 3:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PCALABACIN3.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                    	
											break;
										}
										case 4:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PPAN4.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n",233);
		                                      scanf("%i",&x);
		                                                                                     	
											break;
										}	
										case 5:{
											printf("Salir\n");
											break;
										} 
										}	
										
							        	}while(opcion8!=5);
									break;
									
									}
								case 6:{
									do{
									
									opcion9=Postres();
									
									switch(opcion9){
										case 1:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PMUG1.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                       	
											break;
										}
										case 2	:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("RMOUSSE4.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                       	
											
											break;
										}
										case 3:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PTRUFAS2.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                     	
											
											break;
										}
										case 4:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PVASO3.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											
											break;
										}
										case 5: {
											printf("Salir\n");
											break;
										}	
										}	
								}while(opcion9!=5);
									break;
								}
								case 7:{
									do{
									
									opcion10=Minutos();
									
									switch(opcion10){
										case 1:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("RHAMBURGUESAS1.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											break;
										}
										case 2:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("RSALTEADO2.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											break;
										}
										case 3:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("RPECHUGAS3.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											break;
										}
										case 4:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("RMOUSSE4.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                                      	
											break;
										}	
										case 5: {
											printf("Salir\n");
											break;
										}
										}	
									}while(opcion10!=5);
									break; 
									
								}
								case 8:{
									printf("Usted ha salido\n");
									break;
								}	
								
							}
									
									
						}while( opcion3!=8);
						break;
									
						}
								
						    case 2: {	
								system("cls");
	                              printf("\n");
			                      printf("******BUSCADOR DE RECETAS******\n");
			                      printf("\n");
			                      printf("Este buscador te informara sobre que alimentos son utilizados en nuestras recetas\n");
			                      printf("\n");
                                  printf("Introduzca el alimento a buscar:\n");
                                  fflush(stdin);
                                  scanf("%s", name);
				                  printf("\n");
                                  iEncontrado = 0;
                                  for(iContador = 0 ; (strcmp(mis_recetas[iContador].alimento, "") !=0) ; iContador++)
                                   {
		                          if (strstr(mis_recetas[iContador].alimento,name) != NULL){
			                      iEncontrado ++;
			                      if (iEncontrado == 1)
				                   {
				                   	printf("\n");
				                  printf("HAY RECETAS DISPONIBLES!!!!!!\n");
			                      printf("Te animamos a ojear la secci%cn de recetas", 162);	
			                        }	
				                    }
				                   	}
	                              if (iEncontrado == 0){
		                          printf("\nNo hay recetas que tengan el alimento.\n\n");
				                
				                  }
			                    
							
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                   						
								break;
							}
						
							case 3: {
								do{
								
								opcion11=Calculadora();
								
								switch (opcion11){
									
									case 1:{
										    system("cls");
											printf("Introduce tu peso, sin mentir, en kg: \n");
                                         	scanf("%f", &n.peso);
                            	
                                           	printf("Ahora introduce tu altura en metros: \n");
                            	            scanf("%f", &n.altura);
                                        		n.imc =n.peso/ (n.altura*n.altura);
	
	                                         printf("Tu indice de masa corporal es: %.2f \n", n.imc);
	
                                                    	if(n.imc<= 18.5){
	                                                      	printf("Su imc indica delgadez\n");
	                                            }                  
	                                                     else if ( n.imc>=18.5 && n.imc<=25){ 
                                                           	printf("Su imc es saludable\n");
                                         	    }
                                                      	else if (n.imc>=25){
                                                        	printf("Su imc indica sobrepeso\n");
                                        	    }
                                        	    
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                                                       	    
                                        
										break;
								    	}
										case 2:{
											    system("cls");
												printf("Introduzca su peso en kgs:\n");
                                               	scanf("%f", &n.peso);
	
                                              	printf("Introduzca su altura en cm:\n");
                                             	scanf("%f", &n.altura);
	
	                                        	printf("Introduzca su edad:\n");
	                                            scanf("%d", &n.edad);
	
	                                        	printf("Introduzca su sexo (2-Mujer o 1-Hombre):\n");
	                                            scanf("%d", &n.opcion80);
	                                        	fflush(stdin);
	
                                             	switch(n.opcion80) {
	                                            	case 1: { 
	                                             	n.qH = 66+(13.7*n.peso)+(5*n.altura)-(6.5*n.edad);
	                                            	printf("Tu quema calorica diaria es de: %.2f cal \n", n.qH);
		                                       	break;
		
	                                            	case 2: { 
	                                            	n.qM = 655+(9.6*n.peso)+(1.8*n.altura)-(4.7*n.edad);
	                                             	printf("Tu quema calorica diaria es de: %.2f cal \n", n.qM);
		                                    	break;
	                                                	}
	                                                 }
                                             	}
                                             	
       	                                      printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                   
											break;
										}
										case 3:{
											printf("Salir\n");
											break;
										}
									}
									
							
	                        }while(opcion11!=3);
								break;
							}
							case 4:{
								do{
								
								opcion15=Ejercicios();
								
								switch (opcion15){
									
									case 1:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PLANCHA.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                          printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      fflush(stdin);
		                                      scanf("%i",&x);
		                                   	
											
											break;
										}	
									case 2:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("LUNGES.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                    	
											break;
										}
										
									case 3:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("JUMPINGJACK.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                   
											break;
										}
									
									case 4:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("SENTADILLAS.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
		                                            
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                      	 	
											break;
										}
									
									case 5:{
											system("cls");
											FILE * pfichero;
                                           	pfichero = fopen("PUSHUPS.txt", "r");
	                                            if (pfichero == NULL) {
	                                            	printf("No se encuentra el fichero\n");
                                              
		                                   			                                            
	                                          }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
                                              printf("\n");
		                                      printf("PARA SALIR PULSE CUALQUIER N%cMERO\n", 233);
		                                      scanf("%i",&x);
		                                 	   	                                                	
											
											break;
									}
									case 6: {
										printf("Salir\n");
										break;
									}
										
										
							}
								
								
							}while(opcion15!=6);
								break;
							}
							case 5: {
								printf("salir\n");
								break;
							}
							
				 }
			}while(opcion2!=5);
					
	
	             
		            
				} else{
					printf("contrase%ca incorrecta, vuelva a intentar iniciar sesi%cn\n", 164, 162);
					printf("Pulse cualquier tecla para intentar iniciar sesi%cn de nuevo\n", 162);
				fflush(stdin);
				scanf("%s", &intento);
				chivato1=0;
				chivato2=0;
				
				}
				

				
		    	} else{
				printf("usuario incorrecto, vuelva a iniciar sesi%cn\n", 162);
				printf("Pulse cualquier tecla para intentar iniciar sesi%cn de nuevo\n", 162);
				fflush(stdin);
				scanf("%s", &intento);
				chivato1=0;
				
		    	}	
	    	
		       
		        
    	break;
    	}
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
		case 'B':{
		
			system("cls");
			
			do{
			
			
			printf("\n");
		    printf("REGISTRO\n");
		    printf("\n");
		    
		    printf("Nombre: ");
		    fflush(stdin);
		    scanf("%s",personas[contador].nombre);
		    
		    
		    fflush(stdin);
		    printf("Apellidos: ");
		    gets(personas[contador].apellidos);
		   
		    do{
		    printf("Edad: ");
		    scanf("%d",&personas[contador].edad);
		    if(personas[contador].edad<10)
		        printf("No admite menor de 10 anios\n");
		        fflush(stdin);
		     
		   	}while(personas[contador].edad<10);
		   	
		    do{
			
		    do{
		    	chivato=0;
		    printf("Usuario: ");
		    gets(personas[contador].usuario1);
		    longUsuario1=strlen(personas[contador].usuario1);
		    if(longUsuario1<4)
		      printf("tiene que tener al menos 4 caracteres\n");
		    
		    }while(longUsuario1<4);
		    
		     for(i=0;i<contador;i++){
		    	if(strcmp(personas[contador].usuario1,personas[i].usuario1)==0){
		    		chivato=1;
		    		printf("El usuario introducido ya existe, introduzca otro nombre de usuario:\n");
		    		break;
				}
		    	
			}
		} while(chivato==1);
		    
		    printf("Contrase%ca num%crica: ",164,130);
		    scanf("%i", &personas[contador].password);
		    do{
		    printf("verificar contrase%ca: ",164);
		    scanf("%i", &personas[contador].contra);
		    
		    if(personas[contador].password==personas[contador].contra){
		    	system("cls");
		   
			}else{
				printf("contrase%ca no v%clida\n",164,160);
			}
	    	}while(personas[contador].contra!=personas[contador].password);
	    	contador++;
	    	
         	fflush(stdin);
	    	printf("¿Quiere a%cadir m%cs usuarios? escribe S para si o cualquier tecla para volver al inicio\n",164,160);
	    	scanf("%c",&masUsuarios);
	    	
	        }while(masUsuarios=='S'||masUsuarios=='s');
		      
            
        	
		
		break;

     	}
		case 'C': {
			printf("Ha salido del programa correctamente.");
			break;
		}
		
      } //cerramos switch
	
    }while(opcion1!='C'); 
    return 0;
 }

char Introduccion(){
	system("cls");
	char opcion1;
	printf("\n");
	
	printf("_______________________________________\n");
	printf("|**************************************|\n");
	printf("|********BIENVENIDO A HEALTHFIT********|\n");
	printf("|**************************************|\n");
	printf("|______________________________________|\n");
	printf("\n");
	printf("INTRODUZCA UNA DE LAS SIGUIENTES OPCIONES, POR FAVOR: \n");
	printf("\n");
	
	printf("A-Iniciar sesi%cn.\n", 162);
	printf("B-Registrar como usuario nuevo.\n");
	printf("C-Salir de la aplicaci%cn.\n",162);
	fflush(stdin);
	scanf("%c", &opcion1);
	return opcion1;
}
int Opciones(){
	system("cls");
	int opcion2;
	            	printf("\n");
					printf("******************BIENVENIDO A HEALTHFIT********************");
					printf("\n");
					printf("\n");
					printf("\n");
					
					printf("ELIGE UNA DE ESTAS OPCIONES:\n");
					printf("\n");
					printf("\n");
					printf("1. Conoce nuevas recetas seg%cn tus gustos\n",163);
					printf("2. Aprovecha alimentos de tu despensa\n");
					printf("3. Calculadora ideal\n");
					printf("4. Descubre ejercicios efectivos para ti\n");
					printf("5. Salir\n");
					scanf("%d", &opcion2);
					return opcion2;
}
int Recetas(){
	int opcion3;
    	system("cls");
					printf("\n");		
					printf("Has seleccionado conocer nuevas recetas\n");
					printf("Aqu%c te dejamos algunas categor%cas para que te inspires buscando recetas:\n",161,161);
					printf("1. Desayunos\n");
					printf("2. Ensaladas\n");
					printf("3. Fitness\n");
					printf("4. Pastas\n");
					printf("5. Pizzas\n");
					printf("6. Postres\n");
					printf("7. 20 min o menos\n");
					printf("8. Salir\n");
							
							
					printf("Elige la que mas te guste:\n");
                	scanf("%d", &opcion3);
                	return opcion3;
}
int Desayunos(){
	int opcion4;
	int x;
		system("cls");
					printf("\n");				
					printf("Has seleccionado desayunos\n");
					printf("Aqu%c te dejamos algunas de las recetas mas deliciosas :)\n",161);
					printf("\n");
					printf("1.  Crepes de avena con jam%cn y queso\n",162);
					printf("\n");
					printf("2.  Tortitas de avena y pl%ctano\n",160);
				    printf("\n");
					printf("3.  Tostada de huevos revueltos con aguacate\n");
					printf("\n");
					printf("4.  Bowl de frambuesas con avena y ch%ca\n",161);
					printf("\n");
					printf("5. Salir\n");
									
					scanf("%d", &opcion4);
					return opcion4;
					
					
}
int Ensaladas(){
	int opcion5;
    	system("cls");
    	            printf("\n");
					printf("Has seleccionado ensaladas\n");
					printf("Aqu%c te dejamos algunas de las recetas mas deliciosas :)\n",161);
					printf("\n");
					printf("1.  Ensalada de naranja, manzana y queso fresco\n");
					printf("\n");
					printf("2.  Ensalada de arroz y at%cn\n",163);
					printf("\n");
					printf("3.  Ensalada de pasta, pollo y cebolla\n");
					printf("\n");
					printf("4.  Ensalada fr%ca de lentejas\n",161);
					printf("\n");
					printf("5. Salir\n");
												
					scanf("%d", &opcion5);
					return opcion5;				
									
}
int Fitness(){
	int opcion6;
    	system("cls");
    	            printf("\n");
					printf("Has seleccionado fitness\n");
					printf("Sabes bien que el 70 porciento del resultado depende de tu alimentaci%cn.\n",162);
				    printf("As%c que, s%ccale el m%cximo provecho a tu esfuerzo!\n",161,160,160);
				    printf("Encuentra aqu%c recetas fitness para antes de entrenar, \n",161);
				    printf("recetas fitness para despu%cs de entrenar, recetas fitness para hidratarte...\n",130);
			        printf("descubre en este apartado las recetas fitness que necesitas. :)\n");
					printf("\n");
					printf("1.  Pavo con jud%cas verdes y pur%c de patata\n",161,130);
					printf("\n");
					printf("2.  Pollo con calabacines\n");
					printf("\n");
					printf("3.  Galletas de avena, pl%ctano y canela\n",160);
					printf("\n");
					printf("4.  Batido de fresas y avena \n");
					printf("\n");
					printf("5. Salir\n");				
					scanf("%d", &opcion6);
					return opcion6;
	
}
int Pastas(){
	int opcion7;
    	system("cls");
    	            printf("\n");
					printf("Has seleccionado pastas\n");
					printf("La pasta es un alimento muy socorrido, pero sabes bien que es f%ccil caer en lo mismo de siempre.\n",160);
					printf("Encuentra aqu%c la inspiraci%cn para combinar tu pasta de mil maneras:\n",161,162);
					printf("recetas con pasta y verduras, originales salsas para recetas de espaguetis, ensaladas de pasta variadas... \n");
					printf("si repites, es porque quieres.\n");
					printf("\n");
					printf("1. (13) Espaguetis con crema de queso \n");
					printf("\n");
					printf("2. (14) Tallarines chinos con verduras\n");
					printf("\n");
					printf("3. (15) Espaguetis con br%ccoli y parmesano\n",162);
					printf("\n");
					printf("4. (16) Pasta estilo oriental\n");
					printf("\n");
					printf("5. Salir\n");
					
					scanf("%d", &opcion7);
					return opcion7;
}
int Pizzas(){
	int opcion8;
    	system("cls");
    	            printf("\n");
					printf("Has seleccionado pizzas\n");
					printf("Encuentra inspiraci%cn para tus pizzas caseras y convierte esta comida r%cpida en su versi%cn m%cs sana y deliciosa.\n",162,160,162,160);
					printf("Divi%crtete experimentando con nuevos ingredientes y combinaciones, y olv%cdate de las pizzas congeladas y precocinadas.\n",130,161);
					printf("\n");
					printf("1. (17) Minipizzas de berenjena\n");
					printf("\n");
					printf("2. (18) Pizza de coliflor\n");
					printf("\n");
					printf("3. (19) Pizza de calabac%cn\n",161);
					printf("\n");
					printf("4. (20) Pan Pizza de champi%cones y cebolla\n",164);
					printf("\n");
					printf("5. Salir\n");
									
					scanf("%d", &opcion8);
					return opcion8;
}
int Postres(){
	int opcion9;
    	system("cls");
    	            printf("\n"); 
					printf("Has seleccionado postres\n");
					printf("Acept%cmoslo, nos encantan los postres!\n",130);
	                printf("Encuentra aqu%c la mejor selecci%cn de postres f%cciles y r%cpidos.\n",161,162,160,160);
	                printf("Postres sin horno, recetas de bizcocho, tortitas caseras... todos en sus versiones m%cs sanas, as%c que olvida el cargo de conciencia.\n",160,161);
	                printf("\n");
					printf("1.  Mug Cake de chocolate\n");
				    printf("\n");
					printf("2.  Mousse de chocolate\n");
					printf("\n");
					printf("3.  Trufas de chocolate, pl%ctano y avena veganas\n",160);
					printf("\n");
					printf("4.  Vaso de tarta de queso con ar%cndanos\n",160);
					printf("\n");
					printf("5. Salir\n");
									
					scanf("%d", &opcion9);
					return opcion9;
}
int Minutos(){
	int opcion10;
    	system("cls");
    	            printf("\n");
			    	printf("Has seleccionado 20 min o menos\n");
					printf("Tienes poco tiempo?\n");
					printf("No renuncies a comer algo rico y sano. Encuentra aqu%c recetas de cocina r%cpidas, cenas r%cpidas, postres f%cciles...\n",161,160,160,160);
					printf("Para cualquier momento del d%ca, especialmente para la cena.\n",161);
					printf("\n");
					printf("\n");
					printf("1.  Hamburguesas de garbanzos\n ");
					printf("\n");
				    printf("2.  Salteado de pollo y br%ccoli\n",162);
					printf("\n");
				    printf("3.  Pechugas de pollo con espinacas y salsa de lim%cn\n",162);
					printf("\n");
					printf("4.  Mousse de chocolate\n");
					printf("\n");
					printf("5. Salir\n");	
					
					scanf("%d", &opcion10);
					return opcion10;
}
int Calculadora(){
	int opcion11;
    	system("cls");
    	
					printf("\n");
					printf("\n");
					printf("HAS SELECCIONADO LA CALCULADORA IDEAL\n");
					printf("\n");
					printf("Aqu%c te dejamos las opciones:\n",161);
					printf("\n");
					printf("1. Conoce tu imc\n");
					printf("2. Conoce tu quema cal%crica diaria\n",162);
					printf("3. Salir\n");
					
					scanf("%d", &opcion11);
					return opcion11;
	
}

int Ejercicios(){
	int opcion15;
	system("cls");
	
	             printf("\n");
	             printf("\n");
	             printf("BIENVENIDO A LA SECCI%cN DE EJERCICIOS",224);
	             printf("\n");
	             printf("¿Preparado para hacer retos de ejercicio?");
	             printf("\n");
	             printf("\n");
	             printf("1. Reto 1 min.de plancha.");
	             printf("\n");
	             printf("2. Reto 1 min de lunges.");
	             printf("\n");
	             printf("3. Reto 1 min. de jumping jacks.");
	             printf("\n");
	             printf("4. Reto 1 min. de sentadillas.");
	             printf("\n");
	             printf("5. Reto 10 repeticiones m%cnimo de push-ups.",161);
	             printf("\n");
	             printf("6. Salir\n");
	             
	             	scanf("%d", &opcion15);
					return opcion15;
}
				
