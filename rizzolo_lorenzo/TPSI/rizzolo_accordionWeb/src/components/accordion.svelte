<script>

    import Icon from "./icon.svelte";

    export let title
    export let text


    let icon = "keyboard_arrow_down"
    let display = "none"

    function show_text(){
        display = display=="none" ? "block" : "none"
        icon = icon=="keyboard_arrow_down" ? "expand_less" : "keyboard_arrow_down"
    }

</script>

<div class="header" on:click={show_text}> <b>{title}</b> <span class="icona"><Icon nome={icon}/></span></div>

<div class="text" style='display:{display};' > {@html text} </div>

<style>
    .header{
        padding: 10px;
        /* background-color: lightgray; */
        border-bottom: 1px solid rgba(128, 128, 128, 0.637);
    }
    .header:hover{
        cursor: pointer;
    }
    
    .icona{
        float: right;
    }

    .text{
        display: none;
        padding: 10px;
        border-bottom: 1px solid rgba(128, 128, 128, 0.637);
    }

</style>