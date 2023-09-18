function somar(){
    var n1 = 5; var n2 = 3; var n3 = 10; var n4 = "20";
    var res = parseFloat (n1) + parseFloat (n2) + parseFloat (n3) + parseFloat (n4);

    if(!isNaN(res)){
        document.write("<h3>Resultado = ", res,"</h3>");
    }
    else document.write("<h3>Valores inválidos!!</h3>");

}