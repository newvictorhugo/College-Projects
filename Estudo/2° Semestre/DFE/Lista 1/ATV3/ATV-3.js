function valLogico() {
    var num = prompt('Digite um valor: ');
    num = parseFloat(num);

    if (!isNaN(num)) {
        if (num % 2 == 0) {
            valorLog = true;
            document.write(num + ' é par!!');
        } else {
            valorLog = false;
            document.write('<h3>' + num + ' é ímpar!!', '</h3>');
        }
    } else {
        document.write('<h3>Valor inválido!!</h3>');
    }
}