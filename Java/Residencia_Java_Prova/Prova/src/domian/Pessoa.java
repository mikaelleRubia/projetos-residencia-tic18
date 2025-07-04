package domian;

public class Pessoa {
	private long id;
	private String nome;
	private int idade;
	private static long contador=0;

	public long getId() {
		return id;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
	private String CPF;
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCPF() {
		return CPF;
	}
	public void setCPF(String cPF) {
		CPF = cPF;
	}
	public Pessoa() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Pessoa(String nome, int idade, String cPF) {
		super();
		this.id = ++contador;
		this.nome = nome;
		this.idade = idade;
		CPF = cPF;

	}


	
}
