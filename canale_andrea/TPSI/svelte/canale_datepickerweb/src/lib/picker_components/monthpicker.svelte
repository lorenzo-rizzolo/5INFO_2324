<script>
    export let month;
</script>

<select size=5 bind:value={month}>
    {#each Array(12).keys() as day, i}
        <option value={i}>{i}</option>
    {/each}
</select>