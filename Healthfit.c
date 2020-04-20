#include <stdio.h>
#include <string.h>

struct Registro{
	char nombre[20];
	char apellidos[30];
	int edad;
	char correo[50];
	char usuario1[20];
	int password,contra;
};
struct Usuario{
	char usuario2[20];
	int contrasenia;
};
int main(){
	struct Registro persona;
	struct Usuario persona1;
	int i;
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
	
	char linea [80000];
	do{
	
	printf("\n");
	printf("INTRODUZCA UNA DE LAS SIGUIENTES OPCIONES, POR FAVOR: \n");
	printf("\n");
	
	printf("A-Iniciar sesi%cn.\n", 162);
	printf("B-Registrar como usuario nuevo.\n");
	printf("C-Salir de la aplicaci%cn.\n",162);
	scanf("%c",&opcion1);
	fflush(stdin);
	
	switch(opcion1){
	
		case 'A': {
	    	system("cls");
	    	printf("Inicio sesion\n");
			do{
			
		  	do{	  
		  	printf("Nombre de usuario: ");
			scanf("%s",&persona1.usuario2);
			longUsuario2=strlen(persona1.usuario2);
		    	if(longUsuario2<4)
		  		printf("Al menos tiene que tener 4 caracteres\n");	  
			}while(longUsuario2<4);
			if(strcmp(persona.usuario1,persona1.usuario2)==0){
		        do{
				
				printf("contrasenia: ");
				scanf("%i",&persona1.contrasenia);
				if(persona.password==persona1.contrasenia){
					printf("\n");
					
					printf("\n");
					printf("BIENVENIDO A HEALTHFIT!!!");
					printf("\n");
					printf("Elige una de estas opciones:\n");
					printf("1. Conoce nuevas recetas segun tus gustos!!\n");
					printf("2. Aprovecha alimentos de tu despensa\n");
					printf("3. Calculadora ideal\n");
					printf("4. Descubre ejercicios efectivos para ti\n");
					scanf("%d", &opcion2);
					
					switch (opcion2){
						case 1:{
							//switch (opcion3){
							
							printf("Has seleccionado conocer nuevas recetas!!!\n");
							printf("Aqui te dejamos algunas categorias para que te inspires buscando recetas\n");
							printf("1. Desayunos\n");
							printf("2. Ensaladas\n");
							printf("3. Fitness\n");
							printf("4. Pastas\n");
							printf("5. Pizzas\n");
							printf("6. Postres\n");
							printf("7. 20 min o menos\n");
							
							printf("Elige la que mas te guste:\n");
							scanf("%d", &opcion3);
							
							switch (opcion3){
								case 1:{
								//	switch (opcion4){
									
									
									
									printf("Has seleccionado desayunos!!!\n");
									printf("Aqui te dejamos algunas de las recetas mas deliciosas :)\n");
									printf("\n");
									printf("\n");
									printf("1. Crepes de Avena con Jamón y Queso\n");
									printf("\n");
									printf("2. Tortitas de Avena y Plátano\n");
									printf("\n");
									printf("3. Tostada de Huevos Revueltos con Aguacate\n");
									printf("\n");
									printf("4. Bowl de Frambuesas con Avena y Chía\n");
									printf("\n");
									
									scanf("%d", &opcion4);
									
									switch (opcion4){
										case 1:{
											FILE * pfichero;
                                           	pfichero = fopen("CREPES1.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
		
											break;
											
										case 2 :{
												FILE * pfichero;
                                           	pfichero = fopen("TORTITAS2.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
		
											break;
										case 3:{
											FILE * pfichero;
                                           	pfichero = fopen("Tostadas3.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
										case 4:{
												FILE * pfichero;
                                           	pfichero = fopen("Bowl4.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
										
											
											
										}
											break;
										}
										}
										}	
										}
									}
								
									
								break;
							
						
								
							
						//	}
							break;
						
								case 2:{
									printf("Has seleccionado ensaladas:\n");
									printf("\n");
									printf("Aqui te dejamos algunas de las recetas mas deliciosas :)\n");
									printf("\n");
									printf("1. Ensalada de Naranja, Manzana y Queso Fresco\n");
									printf("\n");
									printf("2. Ensalada de Arroz y Atún\n");
									printf("\n");
									printf("3. Ensalada de Pasta, Pollo y Cebolla\n");
									printf("\n");
									printf("4. Ensalada Fría de Lentejas\n");
									printf("\n");
									scanf("%d", &opcion5);
									
									switch (opcion5){
										case1:{
											FILE * pfichero;
                                           	pfichero = fopen("ENARANJA1.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 2:{
											FILE * pfichero;
                                           	pfichero = fopen("EATUN2.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
										case 3:{
											FILE * pfichero;
                                           	pfichero = fopen("EPOLLO3.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
										case 4:{
											FILE * pfichero;
                                           	pfichero = fopen("ELENTEJAS4.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										}	
										}
											
										}
										}
								}
								
									
									break;
								case 3:{
									printf("Has seleccionado fitness\n");
									printf("\n");
									printf("Sabes bien que “el 70% del resultado depende de tu alimentación”. Así que, ¡sácale el máximo provecho a tu esfuerzo! Encuentra aquí recetas fitness para antes de entrenar, recetas fitness para después de entrenar, recetas fitness para hidratarte... descubre en este apartado las recetas fitness que necesitas. :)\n");
									printf("\n");
									printf("1. Pavo con Judías Verdes y Puré de Patata\n");
									printf("\n");
									printf("2. Pollo con Calabacines\n");
									printf("\n");
									printf("3. Galletas de Avena, Plátano y Canela\n");
									printf("\n");
									printf("4. Batido de Fresas y Avena \n");
									
									scanf("%d", &opcion6);
										
										switch (opcion6){
											case 1:{
												FILE * pfichero;
                                           	pfichero = fopen("judias1.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
												break;
											case 2:{
												FILE * pfichero;
                                           	pfichero = fopen("pollo2.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
												break;
											case 3:{
												FILE * pfichero;
                                           	pfichero = fopen("galletas3.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
												break;
											case 4:{
												FILE * pfichero;
                                           	pfichero = fopen("batido4.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
												break;
											}	
											}	
											}	
											}
										}
										break;
								case 4:{
									printf("Has seleccionado pastas\n");
									printf("\n");
									printf("La pasta es un alimento muy socorrido, pero sabes bien que es fácil caer en lo mismo de siempre. Encuentra aquí la inspiración para combinar tu pasta de mil maneras: recetas con pasta y verduras, originales salsas para recetas de espaguetis, ensaladas de pasta variadas… ¡si repites, es porque quieres!\n");
									printf("\n");
									printf("1. Espaguetis con Crema de Queso \n");
									printf("\n");
									printf("2. Tallarines Chinos con Verduras\n");
									printf("\n");
									printf("3. Espaguetis con Brócoli y Parmesano\n");
									printf("\n");
									printf("4. Pasta Estilo Oriental\n");
									scanf("%d", opcion7);
									
									
									switch (opcion7){
										case 1:{
												FILE * pfichero;
                                           	pfichero = fopen("ESPAGUETIS1.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 2:{
												FILE * pfichero;
                                           	pfichero = fopen("TALLARINES2.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
										case 3:{
												FILE * pfichero;
                                           	pfichero = fopen("ESPAGUETIS3.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 4:{
												FILE * pfichero;
                                           	pfichero = fopen("PASTA4.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
											
										}	
										}	
										}	
										}
									}
									break;
								case 5:{
									printf("Has seleccionado pizzas\n");
									printf("\n");
									printf("Encuentra inspiración para tus pizzas caseras y convierte esta “comida rápida” en su versión más sana y deliciosa. Diviértete experimentando con nuevos ingredientes y combinaciones, ¡y olvídate de las pizzas congeladas y precocinadas!\n");
									printf("\n");
								
									printf("1. Minipizzas de berenjena\n");
									printf("\n");
									printf("2. Pizza de Coliflor\n");
									printf("\n");
									printf("3. Pizza de Calabacín\n");
									printf("\n");
									printf("4. Pan Pizza de Champiñones y Cebolla\n");
									printf("\n");
									scanf("%d", &opcion8);
									
									switch(opcion8){
										case 1:{
												FILE * pfichero;
                                           	pfichero = fopen("PMINI1.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
											
										case 2:{
												FILE * pfichero;
                                           	pfichero = fopen("PCOLIFLOR2.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 3:{
												FILE * pfichero;
                                           	pfichero = fopen("PCALABACIN3.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 4:{
												FILE * pfichero;
                                           	pfichero = fopen("PPAN4.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										}	
										}	
										}	
										}
									}
									break;
								case 6:{
									printf("Has seleccionado postres\n");
									printf("\n");
									printf("¡Aceptémoslo, nos encantan los postres! Encuentra aquí la mejor selección de postres fáciles y rápidos, postres sin horno, recetas de bizcocho, tortitas caseras… todos en sus versiones más sanas, así que ¡olvida el cargo de conciencia!\n");
			
									printf("\n");
									printf("1. Mug Cake de Chocolate\n");
									printf("\n");
									printf("2. Mousse de Chocolate\n");
									printf("\n");
									printf("3. Trufas de Chocolate, Plátano y Avena Veganas\n");
									printf("\n");
									printf("4. Vaso de Tarta de Queso con Arándanos\n");
									scanf("%d", &opcion9);
									
									switch(opcion9){
										case 1:{
												FILE * pfichero;
                                           	pfichero = fopen("PMUG1.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 2	:{
												FILE * pfichero;
                                           	pfichero = fopen("RMOUSSE4.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
										case 3:{
												FILE * pfichero;
                                           	pfichero = fopen("PTRUFAS2.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
										case 4:{
												FILE * pfichero;
                                           	pfichero = fopen("PVASO3.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											
											break;
										}	
										}	
										}
										}
									}
									break;
								case 7:{
									printf("Has seleccionado 20 min o menos\n");
									printf("\n");
									printf("¿Tienes poco tiempo? No renuncies a comer algo rico y sano. Encuentra aquí recetas de cocina rápidas, cenas rápidas, postres fáciles… y en general, recetas fáciles y sanas para cualquier momento del día, especialmente para la cena.\n");
									printf("\n");
									printf("1. Hamburguesas de Garbanzos\n ");
									printf("\n");
									printf("2. Salteado de Pollo y Brócoli\n");
									printf("\n");
									printf("3. Pechugas de Pollo con Espinacas y Salsa de Limón\n");
									printf("\n");
									printf("4. Mousse de Chocolate\n");
									scanf("%d", &opcion10);
									
									switch(opcion10){
										case 1:{
												FILE * pfichero;
                                           	pfichero = fopen("RHAMBURGUESAS1.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 2:{
												FILE * pfichero;
                                           	pfichero = fopen("RSALTEADO2.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 3:{
												FILE * pfichero;
                                           	pfichero = fopen("RPECHUGAS3.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										case 4:{
												FILE * pfichero;
                                           	pfichero = fopen("RMOUSSE.txt", "r");
	                                            if (pfichero == NULL) {
	                                                           }
			                                     while(fgets(linea, 80000, (FILE*) pfichero)) {
                                                        printf("%s", linea);
                                                   }
                                                          fclose(pfichero);
		
	                                                    	return 0;
											break;
										}	
										}	
										}	
										}
									}
									break; 
									
								}	
								}	
								}	
								}		
									}
								}
									break;
								}
							}
							break;
						}
				//	}
	//	}
	//	}
					
				} else{
					printf("contrasenia incorrecta\n");
				}
				
				}while(persona.password!=persona1.contrasenia);
				
			} else{
				printf("usuario incorrecto\n");
			}	
	    
		   }while(strcmp(persona.usuario1,persona1.usuario2)!=0);
    	
    	
    	
    	break;
    	
    	
    
    	}
		case 'B':{
		
		
		
			system("cls");
		    printf("registrar\n");
		    printf("Nombre: ");
		    scanf("%s",persona.nombre );
		    fflush(stdin);
		    printf("Apellidos: ");
		    gets(persona.apellidos);
		   
		    do{
		    printf("Edad: ");
		    scanf("%d",&persona.edad);
		    if(persona.edad<10)
		        printf("No admite menor de 10 anios\n");
		     
		   	}while(persona.edad<10);
		   	
		    
		    fflush(stdin);
		    printf("Correo: ");
		    gets(persona.correo);
		    
		    do{
		    printf("usuario: ");
		    gets(persona.usuario1);
		    longUsuario1=strlen(persona.usuario1);
		    if(longUsuario1<4)
		      printf("tiene que tener al menos 4 caracteres");
		    
		    }while(longUsuario1<4);
		    
		    printf("Contrasenia numerica: ");
		    scanf("%i", &persona.password);
		    do{
		    printf("verificar contrasenia: ");
		    scanf("%i", &persona.contra);
		    
		    if(persona.password==persona.contra){
		    	system("cls");
		   
			}else{
				printf("contrasenia no valida\n");
			}
	    	}while(persona.contra!=persona.password);
		    
		
		break;

     	}
		case 'C': printf("salir");
		break;
	
	}
    }while(opcion1!='C' && opcion1!='A'); 
	}


