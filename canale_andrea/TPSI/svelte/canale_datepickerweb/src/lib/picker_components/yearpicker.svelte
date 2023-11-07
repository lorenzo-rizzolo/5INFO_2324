<script>
    export let year;
</script>

<select size=5 bind:value={year}>
    {#each Array(2050).keys() as day, i}
        <option value={i}>{i}</option>
    {/each}
</select>