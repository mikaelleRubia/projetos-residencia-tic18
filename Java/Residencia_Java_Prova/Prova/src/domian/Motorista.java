package domian;


public class Motorista extends Pessoa{

	private String tipoCarteira;

	public String getTipoCarteira() {
		return tipoCarteira;
	}
	public void setTipoCarteira(String tipoCarteira) {
		this.tipoCarteira = tipoCarteira;
	}
	public Motorista(String tipoCarteira) {
		super();
		this.tipoCarteira = tipoCarteira;
	}
	

}