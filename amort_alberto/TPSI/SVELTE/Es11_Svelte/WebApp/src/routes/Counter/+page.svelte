
<script>
    import Counter from "./counter.svelte";

	let counter = 0; // stato di un contatore
    function incremente() {
        counter++;
    }
</script>

<h1>Page Counter !!!</h1>

<Counter/>