package Inicio;

public class ManejaPlaneta {

	public static void main(String[] args) {
		String type;
		int masa2 = (int) (5.98 * Math.pow(10, 24));
		float radio2 = (float) (6.67 * Math.pow(10, 6));
		
		Planeta planet01 = new Planeta(masa2, radio2, false, "Via Lactea", "Europa");
		//                              masa radio
		
		if(planet01.getMasa() < 5000) {
			System.out.println("La masa es menor a 5000 kg");
		}
		
		if(planet01.isPlanetaB() == true) {
			//System.out.println("Es un planeta.");
			System.out.println("El planeta " + planet01.getNombre() + " tiene un radio de " + planet01.getRadio() +" km");
		}else { 
			//System.out.println("Es un satelite.");
			System.out.println("El satelite " + planet01.getNombre() + " tiene un radio de " + planet01.getRadio() +" km");
		}
		
		System.out.println(planet01.velEscape());
		
	}
	
	
}
