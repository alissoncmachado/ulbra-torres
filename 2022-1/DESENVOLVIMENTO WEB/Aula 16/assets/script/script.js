//1
var num = parseFloat(prompt("Digite um valor: "));

if (num < 10) {
    alert(`O valor ${num} é menor que 10.`);
} else if (num > 10) {
    alert(`O valor ${num} é maior que 10.`);
} else {
    alert(`O valor ${num} é igual que 10.`);
}

//2
var num1 = parseFloat(prompt("Digite o valor 1: "));
var num2 = parseFloat(prompt("Digite o valor 2: "));
resultado = num1 + num2;
alert(`A soma de ${num1}+${num2} é = ${resultado}`);

//3

var num1 = parseFloat(prompt("Digite o valor 1: "));
var operacao = prompt("Digite a operação: (+, -, *, /)");
var num2 = parseFloat(prompt("Digite o valor 2: "));
var resultado
switch (operacao){
    case '/':
        resultado = num1 / num2;
    break;
    case '*':
        resultado = num1 * num2;
    break;
    case '-':
        resultado = num1 - num2;
    break;
    case '+':
        resultado = num1 + num2;
    break;
}
alert(`O resultado de ${num1}${operacao}${num2} é = ${resultado}`);

//4
var nome = prompt('Digite um nome');
var n =  parseInt(prompt(`Digite o número de vezes que quer repetir ${nome} `));

for (i = 0; i < n; i++){
    alert(`Imprimindo ${nome} ` + (i+1) + ` vezes`);
}

//5
var dados = []
dados[0] = prompt("Informe seu nome: ");
dados[1] = prompt("Informe seu endereço: ");
dados[2] = prompt("Informe seu email: ");

alert(`Olá ${dados[0]}! Seu endereço é ${dados[1]} e seu email é ${dados[2]}`);


