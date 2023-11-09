<script>
    export let aperta = false;

    function toggleFreccia() {
        aperta = !aperta;
        
    }
</script>
<link
    rel="stylesheet"
    href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200"

    selectedMese 
    />

<div class="container">
    <div class="vuoto" />
    <div class="titolo">
        <h1>My header 1</h1>
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
        La gentilezza è una virtù che dovremmo coltivare ogni giorno. In un
        mondo spesso frenetico e stressante, un semplice atto di gentilezza può
        fare la differenza nella vita di qualcuno. Un sorriso, una parola
        gentile o un gesto di aiuto possono illuminare la giornata di una
        persona. La gentilezza non costa nulla, ma il suo impatto può essere
        immenso. Quindi, la prossima volta che avete l'opportunità, scegliete la
        gentilezza e diffondete un po' di amore nel mondo.
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