package domian;

public class Trecho {
	private PontoDeparada origemTrecho;
	private PontoDeparada destinoTrecho;
	private int intervalo;

	
	public int getIntervalo() {
		return intervalo;
	}
	public void setIntervalo(int intervalo) {
		this.intervalo = intervalo;
	}
	public PontoDeparada getOrigemTrejo() {
		return origemTrecho;
	}
	public void setOrigemTrejo(String origemTrecho) {
		origemTrecho = origemTrecho;
	}
	public PontoDeparada getDestinoTrecho() {
		return destinoTrecho;
	}
	public void setDestinoTrejo(String destinoTrecho) {
		destinoTrecho = destinoTrecho;
	}
	public Trecho(PontoDeparada origemTrecho, PontoDeparada destinoTrecho, int intervalo) {
		super();
		this.origemTrecho = origemTrecho;
		this.destinoTrecho = destinoTrecho;
		this.intervalo = intervalo;
	}

}
