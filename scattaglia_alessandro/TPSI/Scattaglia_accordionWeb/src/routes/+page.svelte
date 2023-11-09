<script>
    import Accordio1 from "../lib/components/accordio1.svelte";
    import Accordio2 from "../lib/components/accordio2.svelte";
    import Accordio3 from "../lib/components/accordio3.svelte";

    
</script>

<style>
    .container {
        width: 80%;
        margin: 0 auto;
    }
    .accordio {
        width: 100%;
        margin-bottom: 10px; 
    }
</style>

<div class="container">
    <div class="accordio">
        <Accordio1 />
    </div>
    <div class="accordio">
        <Accordio2 />
    </div>
    <div class="accordio">
        <Accordio3 />
    </div>
</div>
