function removerVogais(){
    let aviso = alert('Esse script eliminará as vogais da frase inserida!!');
    let frase = prompt('Digite uma palavra/frase: ');
    const vogais = ['a', 'á', 'à', 'ã', 'â', 'e', 'é', 'ê', 'i', 'í', 'î', 'o', 'ó', 'ô', 'u', 'ú', 'ü'];
    let resultado = '';

    for(let i=0;i<frase.length;i++){

        let letra = frase[i].toLowerCase();

        if(vogais.indexOf(letra) == -1){
            resultado += frase[i];
        }
    }
    document.write('<h3>Frase Inicial: ', frase, '<br> Frase sem vogais: ', resultado, '</h3>');
}