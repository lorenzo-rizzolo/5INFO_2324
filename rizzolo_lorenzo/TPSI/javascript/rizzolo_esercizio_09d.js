function somma(number){
    number = Number(number)
    let somma = 0;
    for(let i=0 ; i<=number ; i++){
        somma += i
    }
    return somma
}

console.log(somma(2))

console.log(somma(10))

console.log(somma(25))

