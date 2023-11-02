<svelte:head>
    <link href="https://fonts.googleapis.com/icon?family=Material+Icons+Outlined"
      rel="stylesheet">
</svelte:head>

<script>
    export let nome

    export let handler = () => {}
</script>

<div>
    <span class="material-icons-outlined icon" on:click={handler}>
        {nome}
    </span>
</div>


<style>
    .icon{
        font-size: 32px;
    }
    .icon:hover{
        cursor: pointer;
    }
</style>

