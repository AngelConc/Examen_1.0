 #include <stdio.h>
 #include <math.h>

int main(){
	printf("Bienvenidos a K-mark aqui vendemos juegetes y nuestros jueguetes estrella son:  \n");
	printf("Un payaso y un Juego de mesa. \n");
	printf("Si gusta comprar alguno de estos productos solo haganoslo saber en este panel: \n");
	printf("\n");

	printf("Los Payasos tienen un costo de $150 \n");
	printf("\n");

	printf("Los Juegos de mesa tiene un costo de $130 \n");
	printf("\n");

	float a;
	printf("Cantidad de Payasos que desea ordenar: ");
	scanf("%f",&a);
	
	float b;
	printf("Cantidad de Juegos de mesa que desea ordenar: ");
	scanf("%f",&b);
	printf("\n");
	
	printf("Cuenta: \n");
	printf("\n");
		
	printf("Costo total por la cantidad de Payasos: $ %.2f\n", a*150);
	printf("Costo total por la cantidad de Juegos de mesa: $ %.2f\n", b*130);
	printf("Costo total a pagar: $ %.2f\n", (a*150)+(b*130));
	printf("\n");
	printf("\n");
	
	printf("Perfecto gracias por su compra, nos gustaria notificarle que tambien tenemos un sistema de envio para su mayor comodidad y sus condiciones son: \n");
	printf("Si su envio tiene un peso de 8 kg o menos su envio tendra un costo de 2 Mil pesos, pero\n");
	printf("Si su envio exede los 8Kg, se le cobrara por Kg demas un 10 por ciento mas de envio.(Aun solo se pase por decimas el Kg se le contara como completo)\n");
	printf("\n");

	printf("El peso de los Payasos es de .120 gr \n");
	printf("\n");

	printf("El peso de los Juegos de mesa es de .150 gr \n");
	printf("\n");
	
	float c;
	printf("Si desea que nuestra empresa le envie sus productos a domicilio solo tecle el numero (1): ");
	scanf("%f",&c);
	
	int d;
	d = ceil((a*.120)+(b*.150));
	float e=d-8;
	
if (c==1){
	printf("\n");
		printf("EL peso de su compra es de: %.2f Kg \n", (a*.120)+(b*.150));
	printf("\n");
	if (d>8){
		printf("EL peso de su pedido se pasa por:  %d Kg \n", d-8);
		printf("El costo total de su envio es de: $ %.2f\n", (e*(2000*10/100))+2000);
		printf("\n");
		printf("El total de su cuenta es de: $ %.2f\n", (a*150)+(b*130)+(e*(2000*10/100))+2000);
	printf("\n");
	printf("\n");
	}
	if (d<8){
	printf("Su compra no exede los 8 Kg\n");
	printf("El total de su cuenta es de: $ %.2f\n", (a*150)+(b*130)+2000);
	printf("\n");
	}
}
else if(c!=1){
	printf("\n");
		printf("El total de su cuenta es de: $ %.2f\n", (a*150)+(b*130));
}
	
	printf("Fin del programa. Gracias por su compra ;)");
	printf("\n");
	printf("\n");
	
}
