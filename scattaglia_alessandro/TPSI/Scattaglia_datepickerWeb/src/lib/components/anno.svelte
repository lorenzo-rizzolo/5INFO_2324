<script>
    let years = [];
    let Year = 2023;
    let selectedAnno = new Date();

    function updateYear() {
        store_anno.set(Year);
    }
    import { store_anno } from "../js/store.js";
</script>

<div>
    <input class="year" value={"AAAA"} readonly />
    <input
        type="number"
        id="Year"
        bind:value={Year}
        min="1900"
        max="2099"
        on:change={updateYear}
    />
</div>

<style>
    .year {
        width: 60px;
        padding: 10px;
        text-align: center;
    }

    div {
        display: flex;
        flex-direction: column;
        align-items: center;
    }
</style>
