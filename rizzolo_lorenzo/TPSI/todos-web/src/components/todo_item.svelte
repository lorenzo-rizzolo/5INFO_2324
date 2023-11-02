<script>
    import Icon from "../components/icon.svelte"
    import Cell from "../components/cell.svelte"
    import Priority from "../components/priority.svelte"

    export let todo
</script>


<Cell> {todo.id} </Cell>

<Cell> 
    {#if todo.done==false}
        <Icon nome='circle' /> 
    {:else}
        <Icon nome='task_alt' /> 
    {/if}
</Cell>

<Cell> {todo.task} </Cell>

<Cell> <Priority /> </Cell>

<Cell> <Icon nome='delete_forever' /> </Cell>
