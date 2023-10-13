<section>
    <h1 class="main_page">pagina:chi sono?</h1>
</section>


<script>
    export let nome = "Davide";  
    export let cognome = "Emanuel"; 
    export let eta= "18";   
    export let src;
</script>
<style>
    .main_page{
    color: #03045e;
        padding: 50px;
        font-size: 30px;
        margin-bottom: 10px;
        margin-left: 10px;
        margin-top: 10px;
        margin-right: 10px;
        flex: 8;
        text-align: center;
        border: 2px solid green;
}

</style>
<section>
    <h1>ciao sono {nome} {cognome} ed ho {eta} anni </h1>
    <h4>studio presso l'isituto edoardo agenelli di Torino</h4>
</section>
<!-- svelte-ignore a11y-missing-attribute -->
<img {src}>

