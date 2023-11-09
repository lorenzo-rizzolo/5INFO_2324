<script>
    export let aperta = false;

    function toggleFreccia() {
        aperta = !aperta;
    }
</script>

<link
    rel="stylesheet"
    href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200"
/>
<link
    rel="stylesheet"
    href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.3/css/all.min.css"
/>

<div class="container">
    <div class="vuoto" />
    <div class="titolo">
        <h1>My header 2</h1>
    </div>
    <button
        class="freccia"
        on:click={toggleFreccia}
        aria-label={aperta ? "Chiudi" : "Apri"}
    >
        <span class="material-symbols-outlined">
            {aperta ? "keyboard_arrow_up" : "keyboard_arrow_down"}
        </span>
    </button>
</div>
<div class="testo {aperta ? '' : 'nascondi'}">
    <p>
        Amerigo Vespucci (Firenze, 9 marzo 1454 – Siviglia, 22 febbraio 1512) è
        stato un navigatore, esploratore e cartografo italiano, dapprima
        cittadino della Repubblica fiorentina e poi suddito del Regno di
        Castiglia dal 24 aprile 1505[1]. Fu il primo esploratore a rendersi
        conto, durante un viaggio a servizio del Regno di Portogallo nel 1501,
        che le nuove terre recentemente scoperte ad occidente dell'Oceano
        Atlantico non erano l'estrema propaggine dell'Asia orientale, come si
        credeva inizialmente, ma una parte di un continente ignoto che lui
        chiamò nuovo mondo, e che in suo onore fu poi chiamato America.
    </p>
</div>

<style>
    .container {
        display: flex;
        justify-content: space-between;
        align-items: center;
        background-color: rgb(226, 226, 226);
        border-radius: 20px;
        border: 5px solid rgb(170, 170, 170);
        padding: 10px;
    }
    .titolo {
        text-align: center;
        color: black;
    }
    .freccia {
        background-color: transparent;
        border: 0px solid transparent;
        color: black;
        display: flex;
        align-items: center;
        cursor: pointer;
    }
    .testo {
        width: 100%;
        border: 1px solid gray;
        border-radius: 10px;
    }

    .nascondi {
        display: none;
    }
</style>
