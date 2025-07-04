package domian;
import java.util.List;

public class Trajeto {
	
	private List<Trecho> Trechos;
	private Checkpoints checkpont;

	public List<Trecho> getTrechos() {
		return Trechos;
	}

	public void setTrechos(List<Trecho> trechos) {
		Trechos = trechos;
	}

	public Trajeto(List<Trecho> trechos) {
		super();
		Trechos = trechos;
	}

	public Trajeto() {
		super();
		// TODO Auto-generated constructor stub
	}
	
	
}
