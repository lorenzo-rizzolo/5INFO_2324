
<script>
    import Counter from "./counter.svelte";
    import DoubleCounter from "./double_counter.svelte";

	let contatore = 0; // stato di un contatore    
    let doppiocont=0;
    let numeri = [1, 7, 2, 6, 9, 10];
    function incremente() {
        contatore++;
    }
</script>

<h1>Page Counter !!!</h1>

{#if contatore <5}
<h2 class="rosso"> il valore del contatore vale: {contatore}</h2>
{:else}
<h2 class="verde">il valore del contatore vale : {conteatore}</h2>
{/if}


<Counter bind:counter={contatore}/>

<ul>
    {#each numeri as numero, indice}
    <li> numeri[{indice}]:{numero}</li>
    {/each}
</ul>

<DoubleCounter bind:dp={doppiocont}/>