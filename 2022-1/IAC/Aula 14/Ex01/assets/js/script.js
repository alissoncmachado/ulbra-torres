/* Declarar uma variável, atribuir um valor numérico a ela. Mostrar o valor e o tipo. 
Teste todos os tipos vistos em sala de aula. */
//number
var numero = 8;
console.log(numero);
console.log(typeof numero);
//string
var nome = "Alisson";
console.log(nome);
console.log(typeof nome);
//boleano
var resposta = false;
console.log(resposta);
console.log(typeof resposta);
//indefinido
var objeto = null;
console.log(objeto);
console.log(typeof objeto);
//indefinido
var Indef;
console.log(typeof Indef);

/* Qual padrão de nomenclatura normalmente se usa no JS? */
var nomenclatura = "Camel Case - Case Sensitive";
console.log(nomenclatura);

/*Quando um valor de uma variável será undefined? */
var resposta3 = "Quando não se declara valor a variável";
console.log(resposta3);

/*Pesquisa quando uma variável tera um valor NaN. O que é?*/
var resposta4 = "Ele é retornado quando uma operação matemática falha ou quando uma função tenta transformar uma string em inteiro";
console.log(resposta4);

/*Imprima a média aritmética de 3 números.*/
var a = 10;
var b = 8;
var c = 6;
var media = (a + b + c) / 3;
console.log(media);
