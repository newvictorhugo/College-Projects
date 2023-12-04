const express = require('express');
const bodyParser = require('body-parser');
const path = require('path');

const app = express();

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname)));

app.get('/', (req, res) => {
    res.render('form', { nome: '', email: '', errors: '' });
});

app.post('/submit-form', (req, res) => {
    const { nome, email } = req.body;
    let errors = '';

    if (!nome || !email) {
        errors = 'Todos os campos são obrigatórios!';
        res.render('form', { nome, email, errors });
    } else {
        // Aqui você pode adicionar mais lógica de validação conforme necessário
        res.send(`Cadastro recebido! Nome: ${nome}, Email: ${email}`);
    }
});
const PORT = 3000;
app.listen(PORT, () => {
    console.log(`Servidor rodando na porta ${PORT}`);
});
