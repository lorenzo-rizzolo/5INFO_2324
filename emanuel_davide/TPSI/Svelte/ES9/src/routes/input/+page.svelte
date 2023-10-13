

<script>
    import input from "../../lib/components/input.svelte";
    let nome,cognome,eta;
</script>

    


<h1>input page</h1>

Nome<input bind:value={nome}>
Cognome<input bind:value={cognome}>
Eta<input bind:value={eta}>

<br><br>

Io sono {nome} {cognome} e ho {eta} anni

