programa {
  funcao inicio() {
    real salario, novo
    escreva("Digite o salário: ")
    leia(salario)
    se(salario <= 2000){
      novo = salario * 1.30
    }
    senao{
      novo = salario * 1.10
    }
    escreva("O novo salário é = R$",novo)
  }
}
