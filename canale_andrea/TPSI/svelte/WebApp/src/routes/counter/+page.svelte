<script>
    let counter = 0;

    function add() {
        counter++;
    }

    function remove() {
        counter--;
    }
</script>
<div class="counter">
    <button on:click={remove}>-</button>
    <p>{counter}</p>
    <button on:click={add}>+</button>
</div>

<style>
    .counter {
        display: grid;
        grid-template-columns: repeat(3, 1fr);
    }
</style>