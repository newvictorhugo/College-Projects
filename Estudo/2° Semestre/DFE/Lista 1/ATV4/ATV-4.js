function calculo() {
    var operador = prompt('Digite o operador matemático (+, -, *, /): ');
    var n1 = parseFloat(prompt('Digite o 1° número: '));
    var n2 = parseFloat(prompt('Digite o 2° número: '));

    var res;

    switch(operador){
        case "+":
            res = (n1 + n2);
            break;

        case "-":
            res = n1 - n2;
            break;

        case "*":
            res = n1 * n2;
            break;

        case "/":
            if(n2 !== 0){
                res = n1 / n2;
            }else{
                document.write('<h3>Erro: Não é possível dividir por zero.</h3>')
            }
            break;

        default:
            document.write('<h3>Operador invalido!!</h3>');
            return;
    }
    document.write('<h3>', 'Resultado: ', res, '</h3>');

}