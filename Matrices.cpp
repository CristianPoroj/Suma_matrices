#include <iostream>
#include <windows.h>

using namespace std;
int main (){
	int valores=0, suma;
	int cont=0;
	int a,b;//variables donde se van almacenar los datos
	cout<<"introducir la cantidad de filas";
	cin>>a;//aqui va la cantidad de datos
	cout<<"introducir la cantidad de columnas";
	cin>>b;//cantidad de datos
	
	int matriz [a][b],sumaa[a],sumab[b];
	for(int i=0;i<a;i++){
	sumaa[i]=0;
	}
	
	for(int i=0;i<b;i++){
	sumab[i]=0;
	}
	
	cout<<"total de datos: " <<a*b<<endl<<endl;
	
	for(int j=0;j<a;j++){
	for(int i=0;i<b;i++){
		cout<<"ingresar los datos de la matriz: ";
		cin>>matriz[j][i];
		sumaa[j]=sumaa[j]+matriz[j][i];
		sumab[i]=sumab[j]+matriz[j][i];
	}
	}	
	for(int j=0;j<a;j++){
	for(int i=0;i<b;i++){
		cout<<"		"<<matriz[j][i]<<"		";//mostrando valores
	}
		cout<<endl;
		cout<<endl;
		cout<<endl;
	}
	
	cout<<"mostrando suma: "<<endl;
	for(int i=0;i<a;i++){
 	for(int j=0;j<b;j++){
 	cout<<matriz[i][j]<< "+";
 	valores += matriz[i][j];
 	
 		}
 	}
	cout<<"Resultado de la suma de las filas: "<<endl<<endl;	
	cout<<"="<<valores<<"\n";
	
	int i=2;
 		if(valores==1){
  			cout<<"la cantidad "<<valores<<" no es primo"<<endl;
		}
 		if(valores==2){
  			cout<<"la cantidad "<<valores<<" es primo"<<endl;
 		}else{
  		while(i<valores){
   			if(valores%i==0){
    			cout<<"la cantidad "<<valores<<" no es primo"<<endl;
    	break;
   		}else{
    		cont++;
   		}
   			i++;
  		}
  		if(cont==valores-2){
   			cout<<"la cantidad "<<valores<<" es primo"<<endl;
  		}
  	}
	system("pause");
	return 0;
}
