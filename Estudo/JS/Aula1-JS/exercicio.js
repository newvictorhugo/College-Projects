function tabuada1(){
    
    num = prompt("Entre com um valor maior que zero: ", "Digite aqui...")
    document.writeln("Seu numero: "+num)
    for()
}
function tabuada(){
    let nro;
    do{
        nro = parseInt(prompt('Informe um número positivo: '));
    }while(nro<0);
    for(let cont=1; cont<=10;cont++){
        document.write('<h3>', nro, ' x ', cont, ' = ', (nro*cont),'</h3');
    }
}