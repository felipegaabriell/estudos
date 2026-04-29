const nome = "Felipe Gabriel"
const sobrenome = "Vasconcelos"
const idade = 22;
const peso = 65;
const altura = 1.80;
let anoNascimento;

let imc = peso / (altura * altura)
anoNascimento = 2026 - idade

console.log(nome, sobrenome, 'tem', idade, 'anos, pesa', peso, 'kg tem', altura, 'de altura e seu IMC é de', imc, 'e nasceu em', anoNascimento)