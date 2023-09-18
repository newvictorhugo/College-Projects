function Cumprimentar(){

        nome = prompt("Entre com seu nome: : ", "Digite aqui... ")
        document.writeln ("<h3>Oi  "+ nome +"!!</h3>"); 
    }
    function calculo()
    {
        //O prompt sempre retorna um valor string.
        var n1 = prompt("Digite o 1º valor" , "Digite aqui: ");
        var n2 = prompt("Digite o 2º valor" , "Digite aqui: ");
        //Dessa forma ele vai concatenar os valores
        //var red = n1 + n2;
        var res = parseInt (n1) + parseInt (n2);
                
        document.write("Resultado = ", res, "</h3>");
    
    }
    function horario()
    {
        var d = new Date();
        var time = d.getHours();
        if (time<=11)
        {
            document.write("<b>Bom dia!</b>");
        }
        else 
        if (time>=12 && time<18)
        {
            document.write("<b>Boa tarde!</b>");
        }
        else
        {
            document.write("<b>Boa noite!</b>");
        }

    }