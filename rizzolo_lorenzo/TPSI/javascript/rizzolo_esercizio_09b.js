let automobili = {
    marca: fiat,
    modello: panda,
    targa: ed189ym,
    ruote: 22,
    posti: 2,
    get_marca(){
        return this.marca;
    },
    get_modello(){
        return this.modello;
    },
    get_targa(){
        return this.targa;
    }
}

automobili.targa = "ef739jk"
automobili.get_marca()
automobili.get_modello()
automobili.get_targa()