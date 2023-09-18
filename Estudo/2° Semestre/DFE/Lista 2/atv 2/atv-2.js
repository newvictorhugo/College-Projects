function inverterPalavra(){
    alert('Qualquer palavra ou frase inserida retornará invertida.')
    let palavra = prompt('Digite uma palavra: ');
    let palavraInvertida = palavra.split("").reverse().join("");
    document.write('<h3>Palavra original: ', palavra, '<br>Palavra invertida: ', palavraInvertida, '</h3>');

}