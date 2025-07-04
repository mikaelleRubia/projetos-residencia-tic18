namespace Prova_grupo.Domain{
  public class Paciente: Pessoa{

    public int IdPaciente {get; set; }
    public string Sexo{get; set;}
    public PlanoDeSaude PlanoPaciente { get; set; }
    public List<string> Sintomas{get; set;}
    public List<Pagamento> Pagamentos { get; set; } = new List<Pagamento>();

        public Paciente(int idPaciente, string nome, DateTime dataNascimento, string cpf, string sexo, List<string> sintomas)
            : base(nome, dataNascimento, cpf){
                
            if (string.IsNullOrWhiteSpace(cpf)){
                throw new Exception("CPF inválido");
            }
            IdPaciente = idPaciente;
            Sexo = sexo;
            Sintomas = sintomas;
        }
    }
}