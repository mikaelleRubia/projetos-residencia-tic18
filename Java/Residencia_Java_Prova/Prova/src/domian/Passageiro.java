package domian;

public class Passageiro extends Pessoa {

	private String tipoCartão;


	public String getTipoCartão() {
		return tipoCartão;
	}

	public void setTipoCartão(String tipoCartão) {
		this.tipoCartão = tipoCartão;
	}

	public Passageiro() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Passageiro(String nome, int idade, String cPF) {
		super(nome, idade, cPF);
		// TODO Auto-generated constructor stub
	}
	
}
