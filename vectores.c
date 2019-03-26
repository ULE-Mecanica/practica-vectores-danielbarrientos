#include <stdio.h>
#define TAM 5

void vectores (int v[TAM]);
void comparaVectores (int v1[5], int v2[5]);


int main()
{
int v1[TAM],v2[TAM];
	
	vectores(v1);
	vectores(v2);
	comparaVectores(v1,v2);

return 0;

}


void vectores (int v[TAM])
{
int i;
for (i=0;i<TAM;i++)
	{
		printf("Introduzca cada valor del vector de 5 elementos: ");
		scanf("%d",&v[i]);
	}
	printf("\n");
}



void comparaVectores (int v1[5], int v2[5])
{
int i;
int iguales=1;
	for (i=0;i<TAM;i++)
	{
		if (v1[i]!=v2[i])
		{
			iguales=0;
		}
	}
	if (iguales==0)
	{
		printf("Los vectores no son iguales\n\n");	
	}else{
		printf("Los vectores son iguales\n\n");
	}
	
	
	
}
