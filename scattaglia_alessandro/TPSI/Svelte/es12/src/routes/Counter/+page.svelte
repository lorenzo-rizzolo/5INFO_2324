<script>
    import DoubleCounter from "../../lib/components/double_counter.svelte";
    import Counter from "../../lib/components/counter.svelte";
    let contatore = 0;
</script>

<main>
    <h1>Pagina counter!!!</h1>
    <h2>Il valore del contatore vale: {contatore}</h2>
    <DoubleCounter bind:contatore />
</main>

<style>
    main {
        width: 100%;
        height: 100%;
    }
    h1 {
        font-size: xx-large;
    }
    main {
        width: 100%;
        height: 100%;
    }
</style>
