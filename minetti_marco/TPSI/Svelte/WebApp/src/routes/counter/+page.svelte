<script>
    import Contatore from "../../lib/components/count_er.svelte" ;
    let contatore;
</script>

<h1>Pagina Counter!!!</h1>

<h2>Il valore del contenitore vale: {contatore}</h2>

<Contatore bind:counter={contatore}/>