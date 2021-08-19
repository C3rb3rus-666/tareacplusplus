#include<stdio.h>
#define filas 3
#define column 3

void pedir();
int pares(int m[][3]);
int impares(int m[][3]);
int menornum(int m[][3]);
int mayornum(int m[][3]);
void mostrar(int m[][3]);

int main()
{
	pedir(); 
	return 0;	
}


void mostrar(int m[][3])
{
	int msumada[filas][column];
	int menor = menornum(m);
	int mayor = mayornum(m);
	int paresnm = pares(m);
	int imparesnm = impares(m);
	printf("\n MATRIZ ORIGINAL \n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%i ",m[i][j]);
		}
		printf("\n");
	}
	// operaciones de sumado y division de la matriz
	printf("\n MATRIZ SUMADA \n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%i ",m[i][j] + m[i][j]);
		}
		printf("\n");
	}
	printf("\nMATRIZ DIVIDIDA \n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%i ",m[i][j] + m[i][j] / 8);
		}
		printf("\n");
	}
	
	printf("\nel mayor numero en tu matriz es : %i ",mayor);
	printf("\nel menor numero en tu matriz es : %i",menor);
	printf("\nla matriz tiene %i numeros pares ",paresnm);
	printf("\nla matriz tiene %i numeros impares  ",imparesnm);
}
// funciones para sacar los numeros pares e impares
int pares(int m[][3])
{
	int pares = 0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(m[i][j]%2==0)
			{
				pares++;
			}
		}
	}
	return pares;
}

int impares(int m[][3])
{
	int impares = 0;
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(m[i][j]%2!=0)
			{
				impares++;
			}
		}
	}
	return impares;
}
// funciones para sacar mayor y menor numero de la matriz
int mayornum(int m[][3])
{
	int mayor = m[0][0];
	for(int i=0;i<filas;i++)
	{	
		for(int j=0;j<column;j++)
		{
			if(m[i][j]>mayor)
			{
				mayor = m[i][j];
			}
		}
	}
	return mayor;
}

int menornum(int m[][3])
{
	int menor = m[0][0];
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(m[i][j]<menor)
			{
				menor = m[i][j];
			}
		}
	}
  return menor;	
}
// funcion pedir datos para la matriz
void pedir()
{
	int matriz[filas][column];
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		{
			fflush(stdin);
			printf("\n ingrese un numero  fila [%i]  columna [%i] : ",i,j);
			scanf("%i",&matriz[i][j]);
		}
	}
	mostrar(matriz);
}
