<svelte:head>
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" />
    <link href="https://fonts.googleapis.com/css2?family=Bungee+Spice&display=swap"rel="stylesheet">
</svelte:head>

<script>

    function counter_incr () {
        counter++;
    }

    function counter_decr () {
        counter--;
    }

    export let counter = 0;

</script>

<div class="container">
    <div class="pulsante">
        <button on:click={counter_decr}>
            <span class="material-symbols-outlined icon">remove</span>
        </button>
    </div>
    <div class="number" >
        {counter}
    </div>
    <div class="pulsante">
        <button on:click={counter_incr}>
            <span class="material-symbols-outlined icon">add</span>
        </button>
    </div>
</div>

<style>
    .container {
        border: 4px solid bisque;
        display: flex;
        justify-content: space-between;
        border-radius: 30px;
        width: 300px;
        padding: 10px;
    }

    .pulsante {
        display: flex;
        align-items: center;
    }   

    button {
        border: none;
        background: none;
    }

    .icon {
        font-size: 2.5rem;
        color: brown;
        font-weight: bolder;
    }

        .icon:hover {
            color:  burlywood;
            cursor: pointer;
        }

        .icon:active {
            text-shadow: 1px 1px 10px red;
        }

    .number {
        font-size: 4rem;
        font-family: 'Bungee Spice', cursive;
    }

</style>