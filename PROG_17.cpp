/*AUTOR:Oscar Vivaldi Partido Ramirez  fecha:24/ febrero/2022
programa pide la cantidad de numeros entedros positivos a leer y despues 
que introducen todos los numeros se calcula lo siguiente:
-cuantos numeros pares introdujo
-el numero mayor
.el numero menor
 */
 #include<stdio.h>
 int main(){
 	int numeros, dato, pares=0,mayor, menor;
 	printf("Introduce la cantidad de numeros a leer:");
 	scanf("%d",&numeros);
 	for(int i=1; i<=numeros;i++){
 		
 		do{
 		printf("Introducer el numero %d:",i);
 		scanf("%d",&dato);
 		if(dato<0){
 			printf("Numero negativo, intenta nuevamente.\n");
		 }	
}while(dato<0);

if(dato%2==0){
	pares++;
}
if(i==1){
	menor=dato;
	mayor=dato;
}
else{
	if(dato>mayor){
		mayor=dato;
	}
	if(dato<menor){
		menor=dato;
	}
}
 }
 
 printf("la cantidad de numeros pares es: %d\n",pares);
 printf("El numero mayor es: %d\n", mayor);
 printf("El numero menor es:%d",menor);
 	return 0;
 }

