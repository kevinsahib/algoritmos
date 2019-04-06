#include <iostream>
void llenar ();
int aprore();
int prome ();
int aprobados (float prome, int i);


float cali[5][5];
using namespace std;

	int i, j;
	float prom=0,cal = 0;
	for (i = 1; i < 6; i++)
	{
		for ( j = 1; j <6; j++)
		{
			cout << "Ingrese datos para la columna " <<i<< " y fila "<<j<< ":\n";
			cin >> cali [i][j];
			if ( cali [i][j] <= 0 || cali [i][j] >= 100)
			{
				j = j-1;
			}
		} 

	}
   aprore();
}

int aprore()
{
	int i,j;
	float prome= 0;
	for (i = 1; i < 6; i++ )
	{
		for (j = 1; j < 6; j++ )
		{
			if ( cali [i][j] >=70)
			{
				prome = prome + cali [i][j];
			}
			if ( cali [i][j] < 70)
			{	
				cout << "Alumno " << i <<" en recuperacion\n";
		    	j=8;  
			}
	     
		}
    	if (j != 9)
        {
    	 aprobados (prome,i);
	    }
    	j=0;
	    prome=0;
	    
	}
    return prome;
    
	
}

int aprobados( float prome, int i)
{
	float acum;
	acum = prome / 5;
	
	cout << "El promedio del alumno "<< i << " es: "<< acum <<"\n";
}





int main()
{
	llenar();
}
