<script>
    import Counter from "../../lib/components/counter.svelte";
    import DoubleCounter from "../../lib/components/double_counter.svelte";

    let contatore = 0;
    let contatore2 = 0;
</script>

<h1>Pagina Counter!</h1>

<h2>Il valore del contatore vale: {contatore}</h2>

<Counter bind:counter={contatore}/>

<h2>Il valore del secondo contatore vale: {contatore2}</h2>

<DoubleCounter bind:counter={contatore2}/>