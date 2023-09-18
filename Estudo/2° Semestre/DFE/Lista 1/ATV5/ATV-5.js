function jogo() {
    var nome = prompt('Para iniciar o jogo digite seu nome: ');
    var numAleatorio = Math.ceil(Math.random()*20);
    var tf = 6
    var aviso = alert('Adivinhe um numero de 1 a 20. Você tem 6 tentativas.')

    for(var i=0;i<tf;i++){
        var tentativa = prompt('Tentativa ', i+1);
        if(tentativa == numAleatorio){
            document.write('<h3>Parabéns ',nome , ' você acertou o número!!!</h3>');
            return;
        }
    }
    document.write('<h3>', 'Você perdeu, o número era: ', numAleatorio, '</h3>');


}