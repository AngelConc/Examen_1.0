 #include <stdio.h>
 #include <math.h>

int main(){
	printf("Bienvenidos a el museo de memelogia, si usted ciudadao comun quisiera ingresar e el primero deve compara su voleto aqui:  \n");
	printf("Los voletos varian su precio segun la edad del comprador y a que se dedique. \n");
	printf("Si gusta comprar alguno estos son los precios: \n");
	printf("\n");

	printf("Los Niños entran gratis. \n");
	printf("\n");

	printf("Los menores de edad de 4 a 16 años pagan $50. \n");
	printf("\n");
	
	printf("Los mayores de 16 años pagan $100. \n");
	printf("\n");

	float a;
	printf("Introdusca la edad del comprador: ");
	scanf("%f",&a);
	
if (a<4){
	printf("\n");
		printf("El precio de su voleto es GRATIS\n");
	printf("\n");
}
else if (a>=4, a<=16){
		printf("\n");
	printf("El precio de su boleto es de $50 \n");
	printf("\n");
}
else {
		printf("\n");
		printf("El precio de su boleto es de $100 \n");
	printf("\n");
}

	printf("\n");
	printf("Ahora que si usted cuenta con credencial de estudiante, credencial de docente o credencial de INAPAM.\n");
	printf("Usted se hace acredor a un descuento dependiendo del tipo de credencial con la que cuente (Queda mencionar que solo se puede introduccir una a la vez).\n");
	printf("\n");

	printf("Estudiante con credencial = 10 % (Para hacer valido su descuento oprima 1) \n");
	printf("\n");

	printf("Docente con credencial = 30 % (Para hacer valido su descuento oprima 2) \n");
	printf("\n");
	
	printf("INAPAM = 50 % (Para hacer valido su descuento oprima 3) \n");
	printf("\n");

	float b;
	printf("Si usted cuenta con una de estas credenciales oprima su numero anterior dicho si no oprima 0: ");
	scanf("%f",&b);
	

if (b!=0){
	float c=0;
	float d=50;
	float e=100;
	
	if (b==1){
	printf("\n");
		if (a<4){
		printf("\n");
			printf("El precio de su voleto es de:  $ %.2f\n", c-(c*10/100) );
		printf("\n");
		}
		else if (a>=4, a<=16){
			printf("El precio de su boleto es de:  $ %.2f\n", d-(d*10/100));
		printf("\n");
		}
		else {
			printf("El precio de su boleto es de:  $ %.2f\n", e-(e*10/100));
		printf("\n");
		}
	printf("\n");
}
	if (b==2){
	printf("\n");
		if (a<4){
		printf("\n");
			printf("El precio de su voleto es de:  $ %.2f\n", c-(c*30/100) );
		printf("\n");
		}
		else if (a>=4, a<=16){
			printf("El precio de su boleto es de:  $ %.2f\n", d-(d*30/100));
		printf("\n");
		}
		else{
			printf("El precio de su boleto es de:  $ %.2f\n", e-(e*30/100));
		printf("\n");
		}
	printf("\n");
}
	if (b==3){
	printf("\n");
		if (a<4){
		printf("\n");
			printf("El precio de su voleto es de:  $ %.2f\n", c-(c*50/100) );
		printf("\n");
		}
		else if (a>=4, a<=16){
			printf("El precio de su boleto es de:  $ %.2f\n", d-(d*50/100));
		printf("\n");
		}
		else {
			printf("El precio de su boleto es de:  $ %.2f\n", e-(e*50/100));
		printf("\n");
		}
}
}

if (b==0){
if (a<4){
	printf("\n");
		printf("El precio de su voleto es GRATIS\n");
	printf("\n");
}
else if(a>=4, a<=16){
		printf("El precio de su boleto es de $50 \n");
	printf("\n");
}
else {
		printf("El precio de su boleto es de $100 \n");
	printf("\n");
	printf("\n");
}
}
	


}
