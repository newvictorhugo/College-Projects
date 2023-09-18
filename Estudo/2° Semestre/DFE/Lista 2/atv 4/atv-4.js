function anoDeNascimento(){
    alert('Informe sua idade e você saberá o ano de nascimento')
    let nome = prompt('Digite seu nome: ');
    let idade = prompt('Digite sua idade: ');
    let anoDeNasc = new Date().getFullYear() - idade;
    document.write('<h3>Sua idade: ', idade, '<br>Seu ano de nascimento: ', anoDeNasc, '</h3>');
}