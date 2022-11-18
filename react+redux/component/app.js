import html from '../core.js';
import { connect } from '../store.js';

const connector = connect();

function getValInput() {
    const val = document.getElementById('input-car');
    return val && val.value;
}
const getVa = getValInput;

function App({cars}) {
    return html`
        <ul style="list-style: none;
            width:100vw;">
            ${cars.map((car) => `<li>${ car }</li>`)}
        </ul>
        <input style="list-style: none;
        width:50vw;" id="input-car" type="text" name="cars" placeholder="Nhập xe mới"></input>
        <button onclick="dispatch('ADD', '${getVa()}')">Click 2 lần để xác nhận thêm xe</button>
    `
}

export default connector(App);