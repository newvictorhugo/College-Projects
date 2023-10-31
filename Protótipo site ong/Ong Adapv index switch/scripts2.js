//?FORMULÁRIO CONTATO INDEX//
function validarCampo(){
    const nome = document.getElementById('nomeform').value;
    const sobrenome = document.getElementById('sobrenomeform').value;
    const email = document.getElementById('emailform').value;
    const comentario = document.getElementById('comenform').value;
    let mensagemErro = "";
    
    //VALIDAR NOME//
    if(nome.trim()=== ""){
        mensagemErro += "O campo Nome deve ser preenchido com seu nome\n";
    }
    if(/[\d]/.test(nome)){
        mensagemErro += "O campo de Nome não pode conter números.\n";
    }

    //VALIDAR SOBRENOME//
    if(sobrenome.trim()=== ""){
        mensagemErro += "O campo Sobrenome deve ser preenchido com seu sobrenome\n";
    }
    if(/[\d]/.test(sobrenome)){
        mensagemErro += "O campo de Sobrenome não pode conter números.\n";
    }
    
    //VALIDAR EMAIL//
    if(email.trim()=== ""){
        mensagemErro += "O campo Email deve ser preenchido com seu email\n";
    }else{
        if(!email.includes("@")){
            mensagemErro += 'Email deve conter "@".\n';
        }
        if(!email.includes(".")){
            mensagemErro += 'Email deve conter ".".\n'
        }
    }

    //VALIDAR COMENTARIO//
    if(comentario.trim()=== ""){
        mensagemErro += "O campo Comentário deve ser preenchido com uma mensagem que você deseja enviar para a ONGADAPV.\n";
    }
    //EXIBE MENSAGEM ERRO//
    if(mensagemErro){
        alert("Erro de Validação:\n"+ mensagemErro);
    } else{
        alert("Mensagem enviado com sucesso, você receberá uma resposta através do email fornecido.");
        location.reload();
    }
}