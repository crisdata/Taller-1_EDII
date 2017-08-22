/*
*NOMBRE:Taller No. 1
*AUTORES:Wadith Enrique Montenegro, Yuri Orfilia Sanchez, Cristhian David Giraldo T. 
*FECHA:Agosto/21/2017
*DESCRIPCION:Crear un Menu para el taller en C++ que permita acceder a las opciones de cada punto
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <ctime>

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void dibujarRectangulo(int altura, int ancho)
{
	int i;
	//columna
	for (i = 3; i < altura; i++)
	{
		gotoxy(2, i); printf ("\334");
		gotoxy(ancho, i); printf ("\334");
	}
	//fila
	for (i = 3; i < ancho; i++)
	{
		gotoxy(i, 2); printf ("\333");
		gotoxy(i, altura); printf ("\333");
	}
	gotoxy(2, 2); printf ("\333"); //esquina superior izquierda
	gotoxy(ancho, 2); printf ("\333"); //esquina superior derecha
	gotoxy(2, altura); printf ("\333"); //esquina inferior derecha
	gotoxy(ancho, altura); printf ("\333");  //esquina inferior izquierda
}

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];


struct Competidor{
	char nombre[20];
	int edad;
	char sexo;
	char club[20];
}competidor1;


struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno2{
	char nombre[30];
	char sexo;
	int edad;
	struct Promedio prom;
}alumno[100];


int main()
{
	system ("color 0A");
	
	int opcion = 1, opcion1 = 1, opcion2 = 1, opcion3 = 1, opcion4 = 1, opcion5 = 1, opcion6 = 1;
	
	while (opcion != 0)
	{
		system("CLS");
		dibujarRectangulo(22, 76);
		gotoxy(28, 5); printf ("M E N U");
		gotoxy(25, 7); printf ("1. Ciclo While");
		gotoxy(25, 8); printf ("2. Ciclo For");
		gotoxy(25, 9); printf ("3. Array");
		gotoxy(25, 10); printf ("4. Switch ");
		gotoxy(25, 11); printf ("5. Matrices ");
		gotoxy(25, 12); printf ("6. Estructuras ");
		gotoxy(25, 13); printf ("0. salir");
		gotoxy(25, 16); printf ("Seleccione Opcion: ");
		scanf ("%d", &opcion);
		switch (opcion)
		{
		case 1: { //while
			
				while (opcion1 != 4)
				{
				
					system("CLS");
					dibujarRectangulo(22, 76);
					gotoxy(28,7);printf ("CICLO WHILE");
					gotoxy(25,9);printf ("1. suma de numero de 1 a 100: ");
					gotoxy(25,10);printf("2. suma de numeros pares de 1 al 50: ");
					gotoxy(25,11);printf("3. suma de numeros impares de 1 al 50: ");
					gotoxy(25,12);printf("4. REGRESAR AL MENU: ");
					gotoxy(28,16);printf("Seleccione Opcion: "); 
					scanf("%d", &opcion1);
					switch(opcion1)
					{
						case 1: 
							{
								system("CLS");
								dibujarRectangulo(22,76);
								
								int num = 1 ;
								int suma = 0; 
								
								while (num <= 100)  //Ciclo para sumar 1 al 100
								{
									suma = suma + num;
									num++;
								}
								
								gotoxy(15,7);
								printf ("La suma de los 100 primeros numeros es: %d \n", suma);
								
								gotoxy(15,9);
								system("pause");
								break;
							}
						
						case 2:
							{
								system("CLS");
								dibujarRectangulo(22,76);
								
								int menor = 1;
								int mayor = 50;
								int suma =0;
								
								while (menor < mayor) 
								{
									// averiguamos si el numero es par
									if (menor %2 == 0) 
									{
										suma = suma + menor;
									}
									menor = menor + 1;
								}
								gotoxy(15,7);
								printf ("La suma de numeros pares del 1 al 50 es de: %d \n ", suma);
								
								gotoxy(15,9);
								system("pause");
								break;	
							}
							
						case 3:
							{   
								system("CLS");
								dibujarRectangulo(22,76);
								
								int i;
								int s;
								i = 1;
								s = 0;
								
								while (i<=49) //hallamos y sumamos los impares
								{
									s = s+i;
									i = i+2;
								}
								
								gotoxy(15,7);
								printf ("La suma de los numeros impares del 1 al 50 es de: %d \n" , s); 
								
								gotoxy(15,9);
								system("pause");
								break;	
							}
						
						case 4:
							{
								break;	
							}
					} 
					
				}
			break;
			}	
 
        case 2: { //for
			
				while(opcion2 != 4)
				{	
					
					system("CLS");
					dibujarRectangulo(22, 76);
					gotoxy(27,7);printf ("CICLO FOR");
					gotoxy(17,9);printf ("1. Tablas de multiplicar de un numero, del 1 al 20: ");
					gotoxy(17,10);printf("2. Factorial de un numero: ");
					gotoxy(17,11);printf("3. Numero fibonacci: ");
					gotoxy(17,12);printf("4. REGRESAR AL MENU: ");
					gotoxy(20,16);printf("Seleccione Opcion: "); 
					scanf("%d", &opcion2);
					switch(opcion2)
					{
					case 1: 
						{
							system("CLS");
							
							int num;
							int i;
							int multiplicar;
							
							printf("Ingrese el numero a multiplicar:  ");
							scanf("%d", &num); //puntero
							
							for(i = 1; i <= 20; i++)
							{
								multiplicar = num * i;//proceso de multiplicacion
								printf("%d  *  %d  =  %d \n", num ,i, multiplicar );
							}
							
							gotoxy(15,22);
							system("pause");
							break;
						}
					
					case 2:
						{
							system("CLS");
							dibujarRectangulo(22,76);
							
							int i;
							int num=0;
							int factorial=0;
							
							gotoxy(15,6);
							printf("Ingrese un numero: ");
							scanf("%d", &num);
							
							factorial = num;
							
							for(i = num - 1; i >= 1 ; i-- )
							{
								factorial = factorial * i;
							}
							
							gotoxy(15,7);
							printf("El factorial de %d  es %d \n" , num, factorial );
							
							gotoxy(15,9);
							system("pause");
							break;	
						}
					
					case 3:
						{   
							system("CLS");
							
							int a,b,c,i;
							int num;
							a = 0;
							b = 1;
							
							printf("Ingrese un numero :");
							scanf("%d", &num);
							
							for(i = 0 ; i <= num ; i++)
							{
								c = a+b;
								b = a;
								a = c;
								
								printf("%d \n" , a );
							}
							
							gotoxy(15,9);
							system("pause");
							break;
						}
					
					case 4: 
						{
							break;
						}
					} 
				}
			break;
			}
		
        case 3: { //array
            
				while(opcion3 != 4)
				{
					system("CLS");
					dibujarRectangulo(22,76);
					gotoxy(27,7);printf ("ARRAY");
					gotoxy(17,9);printf ("1. arreglo de numeros decimales: ");
					gotoxy(17,10);printf("2. arreglo de 2 valores : ");
					gotoxy(17,11);printf("3. arreglo de 4X4: ");
					gotoxy(17,12);printf("4. REGRESAR AL MENU: ");
					gotoxy(20,16);printf("Seleccione Opcion: "); 
					scanf("%d", &opcion3);
					switch(opcion3)
					{
						
					case 1: 
						{
							system("CLS");
							
							double num[4]={32.583, 11.239, 45.781, 22.237};//se declara y se inicia un array
							int i;
							
							for(i = 0 ;i < 4; i++)
							{ 
								//num[i];
								printf("%g      ", num[i]);//imprimir valores
							}
							printf("\n\n");
							
							gotoxy(15,9);
							system("pause");
							break;
						}
					
					case 2:
						{
							system("CLS");
							
							int i, j;
							int num1, num2;
							printf("Ingrese un valor ");
							scanf("%d", &num1);
							printf("Ingrese otro valor ");
							scanf("%d", &num2);
							
							int cantidad = 0;
							int arreglo[100][100];//array bidemensional
							
							//llamamos al arreglo
							for (i = 0; i < num1; i++)
							{
								for(j = 0; j < num2; j++)
								{
									if(j %2 == 0)
									{
										cantidad=0;
									}
									else
									{
										cantidad=1;
									}
									
									arreglo [i][j] = cantidad;
								}
							}
							
							//imprimir el arreglo
							
							for (i = 0; i < num1; i++)
							{
								for (j = 0; j < num2; j++)
								{
									printf("%d ", arreglo[i][j]);
								}
								printf("\n");
							}
							
							gotoxy(15,9);
							system("pause");
							break;	
						}
					
					case 3:
						{   
							system("CLS");
							
							int matrizA[4][4];
							int i;
							int j;
							
							printf("Escriba los 4 valores \n");
							
							for(i = 0; i < 4; i++)
							{
								
								printf("Escriba el valor para la matrizA :\n");
								scanf("%d", &matrizA[i][0]);
								
								matrizA[i][1] = matrizA[i][0]*matrizA[i][0];
								matrizA[i][2] = matrizA[i][0]*matrizA[i][0]*matrizA[i][0];
								matrizA[i][3] = matrizA[i][0]*matrizA[i][0]*matrizA[i][0]*matrizA[i][0];
							}
							
							for(i = 0; i<4; i++)
							{
								for(j = 0; j < 4; j++)
								{
									printf("%6d", matrizA[i][j]);
								}
								
								printf("\n");
							}
							
							gotoxy(15,15);
							system("pause");
							break;	
						}
					} 
				}
			break;
			}
 
        case 4: { //switch	
			
				while(opcion4 != 4)
				{
					system("CLS");
					dibujarRectangulo(22,76);
					gotoxy(27,7);printf ("SWITCH");
					gotoxy(17,9);printf ("1. consulta de mes en español : ");
					gotoxy(17,10);printf("2. devolver codigo ascii de una vocal: ");
					gotoxy(17,11);printf("3. devolver codigo ascii de un numero: ");
					gotoxy(17,12);printf("4. REGRESAR AL MENU: ");
					gotoxy(20,16);printf("Seleccione Opcion: "); 
					scanf("%d", &opcion4);
					
					switch(opcion4)
					{
					case 1: 
						{
							system("CLS");
							dibujarRectangulo(22,76);
							
							int mes;
							
							time_t hora = time(0);
							
							gotoxy(15,7);
							printf("Segun el sistema estamos en el mes de: ");
							tm *ltm =localtime(&hora);
							
							mes=1+ltm->tm_mon;
							
							switch (mes)
							{
							case 1:
								printf("ENERO");
								break;
							case 2:
								printf("FEBRERO");
								break;
							case 3:
								printf("MARZO");
								break;
							case 4:
								printf("ABRIL");
								break;
							case 5:
								printf("MAYO");
								break;
							case 6:
								printf("JUNIO");
								break;
							case 7:
								printf("JULIO");
								break;
							case 8:
								printf("AGOSTO");
								break;
							case 9:
								printf("SEPTIEMBRE");
								break;
							case 10:
								printf("OCTUBRE");
								break;
							case 11:
								printf("NOVIEMBRE");
								break;
							case 12:
								printf("DICIEMBRE");
								break;
								
							}
							
							printf("\n\n");
							
							gotoxy(15,9);
							system("pause");
							break;
						}
					
					case 2:
						{
							system("CLS");
							dibujarRectangulo(22,76);
							
							char vocal;
							
							gotoxy(15,6);
							printf("Ingrese una vocal en minuscula o mayuscula: ");
							scanf("%s", &vocal);
							
							switch (vocal)
							{
							case 'a':
								gotoxy(15,7);
								printf("codigo ascii %d  ",97);
								break;
							case 'A':
								gotoxy(15,7);
								printf("codigo ascii %d  ",65);
								break;
							case 'e':
								gotoxy(15,7);
								printf("codigo ascii %d  ",101);
								break;
							case 'E':
								gotoxy(15,7);
								printf("codigo ascii %d  ",69);
								break;
							case 'i':
								gotoxy(15,7);
								printf("codigo ascii %d  ",105);
								break;
							case 'I':
								gotoxy(15,7);
								printf("codigo ascii %d  ",73);
								break;
							case 'o':
								gotoxy(15,7);
								printf("codigo ascii %d  ",111);
								break;
							case 'O':
								gotoxy(15,7);
								printf("codigo ascii %d  ",79);
								break;
							case 'u':
								gotoxy(15,7);
								printf("codigo ascii %d  ",117);
								break;
							case 'U':
								gotoxy(15,7);
								printf("codigo ascii %d  ",85);
								break;
							}
							printf("\n\n");	
							
							gotoxy(15,9);
							system("pause");
							break;	
						}
					
					case 3:
						{   
							system("CLS");
							dibujarRectangulo(22,76);
							
							int numero;
							
							gotoxy(15,6);
							printf("Ingrese un numero de 0 a 9: ");
							scanf("%d", &numero);
							
							switch (numero)
							{
							case 0:
								gotoxy(15,7);
								printf("codigo ascii %d  ",48);
								break;
							case 1:
								gotoxy(15,7);
								printf("codigo ascii %d  ",49);
								break;
							case 2:
								gotoxy(15,7);
								printf("codigo ascii %d  ",50);
								break;
							case 3:
								gotoxy(15,7);
								printf("codigo ascii %d  ",51);
								break;
							case 4:
								gotoxy(15,7);
								printf("codigo ascii %d  ",52);
								break;
							case 5:
								gotoxy(15,7);
								printf("codigo ascii %d  ",53);
								break;
							case 6:
								gotoxy(15,7);
								printf("codigo ascii %d  ",54);
								break;
							case 7:
								gotoxy(15,7);
								printf("codigo ascii %d  ",55);
								break;
							case 8:
								gotoxy(15,7);
								printf("codigo ascii %d  ",56);
								break;
							case 9:
								gotoxy(15,7);
								printf("codigo ascii %d  ",57);
								break;
							}
							printf("\n\n");	
							
							gotoxy(15,9);
							system("pause");
							break;	
						}
						
					case 4: 
						{
							break;
						}
					} 
				}	
			break;
			}
 
 
        case 5: {//matrices
            
				while(opcion5 != 4)
				{
					system("CLS");
					dibujarRectangulo(22,76);
					gotoxy(27,7);printf ("MATRICES");
					gotoxy(17,9);printf ("1. Matriz de 3X3  e imprimir la suma de sus posiciones: ");
					gotoxy(17,10);printf("2. Matriz de 3X3 llenarla por el Sistema: ");
					gotoxy(17,11);printf("3. Matriz de 3X3 llenarla el Sistem con Numeros Primos: ");
					gotoxy(17,12);printf("4. REGRESAR AL MENU: ");
					gotoxy(20,16);printf("Seleccione Opcion: "); 
					scanf("%d", &opcion5);
					switch(opcion5)
					{
					case 1: 
						{
							
							system("CLS");
							
							int matriz[3][3];
							int i,j;
							int suma=0;
							
							/*Bucle que registra los numeros introducidos de teclado*/
							for(i = 0; i < 3; i++)
							{     
								for(j = 0;j < 3; j++)
								{
									printf("Introduce un numero para la posicion %d,%d: ",i ,j);
									scanf("%d",&matriz[i][j]);
								}
							}
							
							for(i = 0; i < 3; i++)
							{
								for(j = 0; j < 3; j++)
								{
									suma = suma + matriz[i][j];
								}
							}
							
							
							for(i = 0; i < 3; i++ )
							{
								for(j = 0; j < 3; j++)
								{
									printf("%d    ",matriz[i][j]);
									
								}
								printf("\n");
							}
							
							printf("la suma de las posiciones es:  %d \n\n", suma);
							
							gotoxy(15,17);
							system("pause");
							break;
						}
					
					
					case 2:
						{
							system("CLS");
							
							int i, j;
							int matrizA[3][3];
							int matrizB[3][3];
							
							for(i = 0; i < 3; i++)
							{
								for(j = 0; j < 3; j++)
								{
									matrizA[i][j] = i+j; 
								}
							}
							
							for(i = 0; i < 3; i++)
							{
								for(j = 0; j < 3; j++)
								{
									matrizB[i][j] = matrizA[i][j];
								}
							}
							
							for(i = 0; i < 3; i++)
							{
								for(j = 0; j < 3; j++)
								{
									printf("%d   ",matrizB[i][j]);
								}
								printf("\n");
							}
							
							gotoxy(15,9);
							system("pause");
							break;	
						}
					
					case 3:
						{   
							system("CLS");
							
							int i, j;
							int matrizA[3][3];
							int vector[5] = {2,3,5,7,11};
							
							for(i = 0; i < 3; i++)
							{
								for(j = 0; j < 3; j++)
								{
									
									matrizA[i][j] = vector[(i+j)%5];
								}
							}
							
							for(i = 0; i < 3; i++)
							{
								for(j = 0; j < 3; j++)
								{
									printf("%d   ",matrizA[i][j]);
								}
								printf("\n");
							}
							
							gotoxy(15,9);
							system("pause");
							break;	
						}
							
					case 4:
						{
							break;
						}
					} 
				}
			break;
			}
 
  
        case 6: {//estructuras
				
			while(opcion6 != 5)
			{
				system("CLS");
				dibujarRectangulo(22,76);
				gotoxy(27,7);printf ("ESTRUCTURAS");
				gotoxy(17,9);printf ("1. Nombre - Notas y Promedio de Alumnos : ");
				gotoxy(17,10);printf("2. Estructura Competidor: ");
				gotoxy(17,11);printf("3. Estructura Promedio: ");
				gotoxy(17,12);printf("4. Promedio Menor y Mayor de los alumnos: ");
				gotoxy(17,13);printf("5. REGRESAR AL MENU: ");
				gotoxy(20,16);printf("Seleccione Opcion: ");
				scanf("%d", &opcion6);
				switch(opcion6)
				{
				case 1:
					{
						system("CLS");
						
						Alumno2 temporal;
						
						int n_alumno;
						
						float promedio_siguiente_alumno = 0;
						float promedio_alumno_actual = 0;
						int i,j;
						float promedio;
						
						printf("Ingrese Numero de alumnos: ");
						scanf("%d",&n_alumno);
						
						for( i = 0;i < n_alumno; i++)
						{
							
							fflush(stdin);
							printf("\nIngrese Nombre: ");
							fgets(alumno[i].nombre,30,stdin);
							
							printf("---Notas del Examen----\n");
							printf("\nNota1: ");
							scanf("%f", &alumno[i].prom.nota1);
							printf("\nNota2: ");
							scanf("%f", &alumno[i].prom.nota2);
							printf("\nNota3: ");
							scanf("%f", &alumno[i].prom.nota3);
							
						}
						
						
						// Utilizando algoritmo burbuja para ordenar
						for( i = 1; i < n_alumno; i++)
						{
							for( j = 0; j < n_alumno - 1; j++)
							{
								
								promedio_siguiente_alumno = (alumno[j + 1].prom.nota1+alumno[j+1].prom.nota2+alumno[j+1].prom.nota3)/3;
								
								promedio_alumno_actual = (alumno [j].prom.nota1+alumno[j].prom.nota2+alumno[j].prom.nota3)/3;
								
								// Ordenando de mayor a menos segun el promedio
								if(promedio_siguiente_alumno > promedio_alumno_actual)
								{
									// Hacemos el intercambio
									// Pasando el alumno que esta siguiente y lo movemos al actual
									// y viceversa
									temporal = alumno[j];
									alumno[j] = alumno[j + 1];
									alumno[j + 1] = temporal;                      
								}
							}
						}
						
						//IMPRIMIMOS
						printf("\n Alumnos ordenados segun su promedio de notas\n");
						for(i = 0; i < n_alumno; i++)
						{
							promedio = (alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
							printf("\nNombre: %s", alumno[i].nombre);
							printf("Su promedio es %0.1f \n", promedio);
						}
						
						system("pause");
						break;
					}
				
				case 2:
					{
						system("CLS");
						fflush(stdin);
						
						printf("---Ingrese datos del Participante---");
						printf("\nIngrese Nombre: ");
						fgets(competidor1.nombre,20,stdin);
						
						printf("\nIngrese Edad: ");
						scanf("%d", &competidor1.edad);
						
						printf("\nIngrese m => masculino o f => femenino: ");
						scanf("%s", &competidor1.sexo);
						
						printf("\nIngrese Nombre del Club: ");
						fgets(competidor1.club,20,stdin);
						
						printf("\n--DATOS DEL PARTICIPANTE--\n");
						printf("\nNombre: %s",competidor1.nombre);
						printf("\nEdad: %d",competidor1.edad);
						printf("\nSexo: %c",competidor1.sexo);
						printf("\nClub: %s",competidor1.club);
						printf("\nCategoria:");
						
						if(competidor1.edad <= 15)
						{
							printf("Infantil");
						}
						else
						   if(competidor1.edad <= 40)
						{
							printf("Joven");
						}
						   else
						   {
							   printf("Mayor");
						   }
						
						system("pause");
						break;
					}
				
				case 3:
					{  
						system("CLS");
						
						int promMayor = 0;
						float promedio_alumno[100],mayor=0;
						
						
						for(int i = 0;i < 1; i++)
						{
							fflush(stdin);
							printf("\nIngrese Nombre: ");
							fgets(alumno[i].nombre,30,stdin);
							printf("\nIngrese m => masculino o f => femenino: ");
							scanf("%c", &alumno[i].sexo);
							printf("\nIngrese edad: ");
							scanf("%d", &alumno[i].edad);
							
							printf("---Notas del Examen----\n");
							printf("\nNota1: ");
							scanf("%f", &alumno[i].prom.nota1);
							printf("\nNota2: ");
							scanf("%f", &alumno[i].prom.nota2);
							printf("\nNota3: ");
							scanf("%f", &alumno[i].prom.nota3);
							
							promedio_alumno[i] = (alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
							
							if(promedio_alumno[i] > mayor)
							{
								mayor = promedio_alumno[i];
								promMayor = i;
								
							}
							
						}
						printf("\n---Sus Datos y su Promedio es---");
						printf("\nNombre: %s ",alumno[promMayor].nombre);
						printf("\nSexo: %c ",alumno[promMayor].sexo);
						printf("\nEdad: %d ",alumno[promMayor].edad);
						printf("\nPromedio: %0.2f\n",promedio_alumno[promMayor]);
						
						system("pause");
						break;
					}
					
				case 4:
					{
						system("CLS");
						
						float menor = 5;
						float mayor = 0;
						int promMenor = 0;
						int n_alumno,promMayor = 0;
						float promedio_alumno[100];
						
						printf("Ingrese Numero de alumnos: ");
						scanf("%d",&n_alumno);
						
						for(int i = 0;i < n_alumno; i++)
						{
							fflush(stdin);
							printf("\nIngrese Nombre: ");
							fgets(alumno[i].nombre,30,stdin);
							printf("\nIngrese m => masculino o f => femenino: ");
							scanf("%c", &alumno[i].sexo);
							printf("\nIngrese edad: ");
							scanf("%d", &alumno[i].edad);
							
							printf("---Notas del Examen----\n");
							printf("\nNota1: ");
							scanf("%f", &alumno[i].prom.nota1);
							printf("\nNota2: ");
							scanf("%f", &alumno[i].prom.nota2);
							printf("\nNota3: ");
							scanf("%f", &alumno[i].prom.nota3);
							
							promedio_alumno[i] = (alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
							
							if(promedio_alumno[i] > mayor)
							{
								mayor = promedio_alumno[i];
								promMayor = i;
								
							}
							else
							   if(promedio_alumno[i] < menor)
							{
								menor = promedio_alumno[i];
								promMenor = i;
							}
						}
						printf("\n---El Alumno con Mejor Promedio es---");
						printf("\nNombre: %s ",alumno[promMayor].nombre);
						printf("\nSexo: %c ",alumno[promMayor].sexo);
						printf("\nEdad: %d ",alumno[promMayor].edad);
						printf("\nPromedio: %0.2f\n",promedio_alumno[promMayor]);
						
						printf("\n---El Alumno con Menor Promedio es---");
						printf("\nNombre: %s ",alumno[promMenor].nombre);
						printf("\nSexo: %c ",alumno[promMenor].sexo);
						printf("\nEdad: %d ",alumno[promMenor].edad);
						printf("\nPromedio: %0.2f\n",promedio_alumno[promMenor]);
						
						system("pause");
						break;
					}
					
				case 5: 
					{
						break;
					}
				}
			}  
			break;
		}
 
        case 0: {
				system("CLS");
				dibujarRectangulo(22, 76);
				gotoxy(33, 7); printf ("SALIR");
				break;
			}
 
        default:{
				system("CLS");
				dibujarRectangulo(22, 76);
				gotoxy(28, 7); printf ("Opcion no valida");
				
				getch();
				break;
			}
		}
	}
    return 0;
}
