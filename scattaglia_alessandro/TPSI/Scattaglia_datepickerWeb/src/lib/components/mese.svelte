<script>
    let months = [
        "Gennaio",
        "Febbraio",
        "Marzo",
        "Aprile",
        "Maggio",
        "Giugno",
        "Luglio",
        "Agosto",
        "Settembre",
        "Ottobre",
        "Novembre",
        "Dicembre",
    ];
    let Month = "Gennaio";
    let selectedMese = new Date();

    function updateMonth() {
        selectedMese = months[Month - 1];
        store_mese.set(selectedMese);
    }
    import { store_mese } from "../js/store.js";
</script>

<div>
    <input class="month" value={"MM"} readonly />
    <select id="mese1" bind:value={Month} on:change={updateMonth}>
        {#each months as month, i}
            <option value={i + 1}>{month}</option>
        {/each}
    </select>
</div>

<style>
    .month {
        width: 80px;
        padding: 10px;
        text-align: center;
    }
    #mese1 {
        width: 100px;
    }

    div {
        display: flex;
        flex-direction: column;
        align-items: center;
    }
</style>
