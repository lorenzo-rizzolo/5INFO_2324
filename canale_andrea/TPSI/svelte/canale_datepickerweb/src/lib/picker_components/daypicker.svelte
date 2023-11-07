<script>
export let day;
</script>
<select size=5 bind:value={day}>
    {#each Array(31).keys() as day, i}
        <option value={i}>{i}</option>
    {/each}
</select>