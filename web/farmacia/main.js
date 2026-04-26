const titulo = document.createElement("h1");
titulo.textContent = "Farmácia JC";
document.body.appendChild(titulo);

const formulario = document.createElement("form");
formulario.innerHTML = `
  <label for="nome">Nome do medicamento:</label>
  <input type="text" id="nome" name="nome" required>
  <label for="preco">Preço do medicamento:</label>
  <input type="number" id="preco" name="preco" step="0.01" required>
  <button type="submit">Mostrar promoção</button>
`;
document.body.appendChild(formulario);


const subtitulo1 = document.createElement("h2");
const subtitulo2 = document.createElement("h2");

document.body.appendChild(subtitulo1);
document.body.appendChild(subtitulo2);

formulario.addEventListener("submit", function (event) {
    event.preventDefault();

    const nome = document.getElementById("nome").value;
    const preco = parseFloat(document.getElementById("preco").value);

    subtitulo1.textContent = `Promoção de ${nome}`;
    subtitulo2.textContent = `Leve 2 por apenas R$ ${(Math.floor(preco) * 2)}`;
});