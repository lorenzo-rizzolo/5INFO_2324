<script>
    export let day = "GG";
    export let month = "MM";
    export let year = "AAAA";

    import {createEventDispatcher} from "svelte";
    import DayPicker from './picker_components/daypicker.svelte';
    import MonthPicker from './picker_components/monthpicker.svelte';
    import YearPicker from './picker_components/yearpicker.svelte';

    const dispatch = createEventDispatcher();

    function btn_click() {
        dispatch('newDate', {
            day: day,
            month: month,
            year: year
        });
    }

</script>

<DayPicker bind:day></DayPicker>

<MonthPicker bind:month></MonthPicker>

<YearPicker bind:year></YearPicker>

<button on:click={btn_click}>
    SELECT
</button>