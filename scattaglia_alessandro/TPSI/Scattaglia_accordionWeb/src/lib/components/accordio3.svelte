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
        <h1>My header 3</h1>
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
        GNU/Linux, comunemente noto come Linux (/ˈlinuks/[1], pronuncia inglese
        [ˈlɪnʊks][2]), è una famiglia di sistemi operativi liberi e open source
        di tipo Unix-like, pubblicati in varie distribuzioni, che usano come
        nucleo il kernel Linux: oggi molte importanti società nel campo
        dell'informatica come Google, Microsoft, Amazon, IBM, Oracle,
        Hewlett-Packard, Red Hat, Canonical, Novell e Valve sviluppano e
        pubblicano sistemi Linux. Un esempio molto conosciuto è Ubuntu di
        Canonical (il cui codice sorgente deriva da Debian).[3]
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
