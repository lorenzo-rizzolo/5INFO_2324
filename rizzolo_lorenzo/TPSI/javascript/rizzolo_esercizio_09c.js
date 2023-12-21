let animale = function(nome, zampe, notturno) {
    this.nome= nome,
    this.zampe = zampe,
    this.notturno = notturno,
    this.dorme_di_notte = function() {
        return !this.notturno;
    }
}

let animal = new animale("koala", 4, false)

console.log(animal)

console.log(animal.dorme_di_notte())