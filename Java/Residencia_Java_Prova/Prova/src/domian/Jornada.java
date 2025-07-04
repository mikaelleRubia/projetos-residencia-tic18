package domian;
import java.util.Date;
import java.util.List;

public class Jornada {
	private Date inicio;
	private Motorista motoristaJornada;
	private Cobrador cobrador;
	private Trajeto trajetoJornada;
	private List<GerenciamentoPassageiro> passageiro;
	private Date Fim;
	public Date getInicio() {
		return inicio;
	}
	public void setInicio(Date inicio) {
		this.inicio = inicio;
	}
	public Motorista getMotoristaJornada() {
		return motoristaJornada;
	}
	public void setMotoristaJornada(Motorista motoristaJornada) {
		this.motoristaJornada = motoristaJornada;
	}
	public Cobrador getCobrador() {
		return cobrador;
	}
	public void setCobrador(Cobrador cobrador) {
		this.cobrador = cobrador;
	}
	public Trajeto getTrajetoJornada() {
		return trajetoJornada;
	}
	public void setTrajetoJornada(Trajeto trajetoJornada) {
		this.trajetoJornada = trajetoJornada;
	}
	public List<GerenciamentoPassageiro> getPassageiro() {
		return passageiro;
	}
	public void setPassageiro(List<GerenciamentoPassageiro> passageiro) {
		this.passageiro = passageiro;
	}
	public Date getFim() {
		return Fim;
	}
	public void setFim(Date fim) {
		Fim = fim;
	}
	public Jornada(Date inicio, Motorista motoristaJornada, Cobrador cobrador, Trajeto trajetoJornada,
			List<GerenciamentoPassageiro> passageiro ) {
		super();
		this.inicio = inicio;
		this.motoristaJornada = motoristaJornada;
		this.cobrador = cobrador;
		this.trajetoJornada = trajetoJornada;
		this.passageiro = passageiro;
		Fim = null;
	}
	public Jornada(Date inicio, Motorista motoristaJornada,Trajeto trajetoJornada,
			List<GerenciamentoPassageiro> passageiro ) {
		super();
		this.inicio = inicio;
		this.motoristaJornada = motoristaJornada;
		this.cobrador = null;
		this.trajetoJornada = trajetoJornada;
		this.passageiro = passageiro;
		Fim = null;
	}
	
	
}
