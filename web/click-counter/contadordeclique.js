let botao =document.getElementById("botao");
let clicadas =document.getElementById("clicadas");
let quantidade = 0;
botao.addEventListener("click", ()=>{
    quantidade++
    clicadas.innerHTML=`Quantidade de cliques ${quantidade}`
});
