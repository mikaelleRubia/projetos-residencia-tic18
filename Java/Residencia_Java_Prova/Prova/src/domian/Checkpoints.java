package domian;

import java.util.Date;

public class Checkpoints {
	private Date horario;

	public Date getHorario() {
		return horario;
	}
	public void setHorario(Date horario) {
		this.horario = horario;
	}

	public Checkpoints(Date horario) {
		super();
		this.horario = horario;

	}
	
}
