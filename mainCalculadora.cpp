package calculadora;

public class valores {
		int Suma;
		int Resta;
		int Multiplicacion;
		int Division;

		public int suma(int val1, int val2) {
		Suma= val1+ val2;
		return Suma;
		}
		
		public int resta(int val1, int val2) {
		Resta= val1-val2;
		return Resta;
		}
		
		public int multiplicacion(int val1, int val2) {
		Multiplicacion= val1*val2;
		return Multiplicacion;
		}
		
		public int division(int val1, int val2) {
		Division= val1/val2;
		return Division;
		}
	}
