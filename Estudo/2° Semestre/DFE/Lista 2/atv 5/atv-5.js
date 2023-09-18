function insereElem(){
    let vet = [];
    let inicio = prompt('1 - Adicionar um numero / 2 - Sair');

    while(parseFloat(inicio) == 1){

        let qnt = prompt('Quantos valores serão inseridos?: ');

        for(let i=0;i<parseInt(qnt);i++){
            let num = prompt(i+1);
            if(isNaN(num)){
                alert('Valor inválido!!.');
                i-=1;
            }else if(vet.indexOf !== -1){
                alert('Valor já existe!!');
                i-=1;
            }else{
                vet.push(num);
                alert('Valor inserido com sucesso!!');
            }
            
        }
        inicio = prompt('1 - Adicionar um numero / 2 - Sair');
    }
    document.write('<h3>', vet, '</h3>')


}

