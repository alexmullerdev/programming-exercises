

class Product {
    constructor(name, itemId, qtd) {
        this.name = name
        this.itemId = itemId
        this.qtd = qtd
    }
}
export default class Budget {
    constructor() {
        this.products = []
    }
    calculateWall(width, height) {

        const m2 = width * height

        const placa = (m2/2.16)*2
        this.addProduct("placa", 134, placa)

        const montante = width/0.6
        this.addProduct("Montante", 457, montante)

        const guia = (width+height)*2/3
        this.addProduct("Guia", 111, guia)

        const p25 = (m2*25)/100
        this.addProduct("p25", 122, p25)

        const p13 = (m2*2)/100
        this.addProduct("p13", 155, p13)

        const pb = m2/25
        this.addProduct("pb", 188, pb)

        this.calculateMassa(m2)

        this.calculateFita((m2*2))

        const calculatedWallProducts = this.products

        this.products = []

        return calculatedWallProducts
       
    }
    calculateRoof(s1, s2) {
        const m2 = s1 * s2
        const placaQTD = Math.ceil(m2 / 2.16)
        this.addProduct("Placa", 443, placaQTD)

        const cantoneiraQTD = Math.ceil((s1 + s2) * 2 / 3)
        this.addProduct("Cantoneira", 127, cantoneiraQTD)

        const perfilQTD = Math.ceil(m2 * 2 / 3)
        this.addProduct("Perfil", 396, perfilQTD)

        const tiranteQTD = Math.ceil(perfilQTD * 2 / 10)
        this.addProduct("Tirante", 513, tiranteQTD)

        const reguladorQTD = Math.ceil(perfilQTD * 2)
        this.addProduct("Regulador", 465, reguladorQTD)

        const emendaQTD = Math.ceil(perfilQTD / 2)
        this.addProduct("Emenda", 143, emendaQTD)

        const p25QTD = Math.ceil(placaQTD * 30 / 100)
        this.addProduct("p25", 74, p25QTD)

        const p13QTD = Math.ceil(m2 * 2 / 100)
        this.addProduct("p13", 375, p13QTD)

        const pbQTD = Math.ceil(m2 * 2 / 25)
        this.addProduct("kit parafuso e bucha", 381, pbQTD)

        this.calculateMassa(m2)

        this.calculateFita(m2)

        const calculatedRoofProducts = this.products

        this.products = []

        return calculatedRoofProducts

    }
    addProduct(name, productId, qtd) {
        return this.products.push(new Product(name, productId, qtd))
    }

    calculateMassa(m2) {
        const massaTotal = m2 / 2

        let restante = massaTotal

        // usa 25kg primeiro
        const qtd25 = Math.floor(restante / 25)
        if (qtd25 > 0) {
            this.addProduct("massa de 25", 315, qtd25)
            restante -= qtd25 * 25
        }

        // depois 15kg
        if (restante > 7.5) {
            this.addProduct("Massa de 15", 308, 1)
            restante -= 15
        }

        // por último 5kg
        if (restante > 0) {
            this.addProduct("Massa de 5", 316, 1)
        }
    }
    calculateFita(m2) {
        const fitaTotal = m2 * 2
        let restante = fitaTotal

        const fita90 = Math.floor(restante / 90)
        if (fita90 > 0) {

            this.addProduct("Fita de 90", 203, fita90)
            restante -= fita90 * 90
        }
        if (restante >= 45) {
            this.addProduct("Fita de 90", 203, 1)
        } else if (restante > 0) {
            this.addProduct("Fita de 45", 202, 1)
        }
    

    }
}
const form = document.getElementById("form")
const result = document.getElementById("result")

const budget = new Budget()

form.addEventListener("submit", function(event) {

    event.preventDefault() // impede reload da página

    // 1️⃣ Coletar valores
    const width = Number(document.getElementById("n1").value)
    const height = Number(document.getElementById("n2").value)

    // 2️⃣ Validar
    if (width <= 0 || height <= 0) {
        result.textContent = "Valores inválidos"
        return
    }

    // 3️⃣ Chamar seu método
    const products = budget.calculateWall(width, height)

    // 4️⃣ Mostrar resultado
    result.innerHTML = products
        .map(p => `${p.name} (ID: ${p.itemId}) - QTD: ${p.qtd}`)
        .join("<br>")
})