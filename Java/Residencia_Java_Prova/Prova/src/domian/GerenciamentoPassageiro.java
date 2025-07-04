package domian;

public class GerenciamentoPassageiro {
	private Passageiro passageiro;
	private PontoDeparada pontoDeparadaPassageiro;
	
	public Passageiro getPassageiro() {
		return passageiro;
	}
	public void setPassageiro(Passageiro passageiro) {
		this.passageiro = passageiro;
	}
	public PontoDeparada getPontoDeparadaPssageiro() {
		return pontoDeparadaPassageiro;
	}
	public void setPontoDeparadaPssageiro(PontoDeparada pontoDeparadaPssageiro) {
		this.pontoDeparadaPassageiro = pontoDeparadaPssageiro;
	}
	public GerenciamentoPassageiro(Passageiro passageiro, PontoDeparada pontoDeparadaPassageiro) {
		super();
		this.passageiro = passageiro;
		this.pontoDeparadaPassageiro = pontoDeparadaPassageiro;
	}
	
}
