package calculadora;
import java.util.*;

public class calculadora {
	public static void main (String[]args) {
		Scanner ta = new Scanner(System.in);
		int num1;
		int num2;
		
		System.out.println("Ingresa valor 1");
		num1=ta.nextInt();
		System.out.println("Ingresa valor 2");
		num2=ta.nextInt();

		valores valor = new valores();
		int suma = valor.suma(num1,num2);
		System.out.println("La suma es: "+suma);
		
		int resta= valor.resta(num1,num2);
		System.out.println("La resta es: "+resta);
		
		int multi= valor.multiplicacion(num1,num2);
		System.out.println("La multiplicacion es: "+multi);
		
		int divi= valor.division(num1,num2);
		System.out.println("La division es "+ divi);
		}

}
