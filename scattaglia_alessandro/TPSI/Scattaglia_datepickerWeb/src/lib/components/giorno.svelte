<script>
    let Day = 1;

    function updateDay() {
        store_giorno.set(Day);
    }
    import { store_giorno } from "../js/store.js";
</script>

<div>
    <input class="giorno" value={"GG"} readonly />
    <input
        type="number"
        id="Day"
        bind:value={Day}
        min="1"
        max="31"
        on:change={updateDay}
    />
</div>

<style>
    .giorno {
        width: 40px;
        padding: 10px;
        text-align: center;
    }

    div {
        display: flex;
        flex-direction: column;
        align-items: center;
    }
</style>
