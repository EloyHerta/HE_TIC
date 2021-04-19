package Inicio;

public class Planeta {

	private int masa;
	double g = 6.67 * Math.pow(10, -11) ;
	private float radio;
	private boolean planetaB;
	private String galaxia;
	private String nombre;
	
	public Planeta(int masa, float radio, boolean planetaB, String galaxia, String nombre) {
		this.masa = masa;
		this.radio = radio;
		this.planetaB = planetaB;
		this.galaxia = galaxia;
		this.nombre = nombre;
	}
	
	public Planeta() {
		
	}

	public double velEscape() {
		// double velEscape = Math.sqrt((2*g*masa)/radio);
		return Math.sqrt((2*g*masa)/radio);
	}
	
	public int getMasa() {
		return masa;
	}

	public void setMasa(int masa) {
		this.masa = masa;
	}

	public float getRadio() {
		return radio;
	}

	
	public void setRadio(float radio) {
		this.radio = radio;
	}
	
	public boolean isPlanetaB() {
		return planetaB;
	}


	public void setPlanetaB(boolean planetaB) {
		this.planetaB = planetaB;
	}
	
	
	public String getGalaxia() {
		return galaxia;
	}


	public void setGalaxia(String galaxia) {
		this.galaxia = galaxia;
	}


	public String getNombre() {
		return nombre;
	}


	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	
	
	
	
}
