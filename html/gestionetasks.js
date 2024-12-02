let Tasks = [
    {"titolo":"Studiare Italiano", "done": false},
    {"titolo":"giocare a basket", "done": false},
    {"titolo":"riscuotere il pizzo", "done": true},
    {"titolo":"Andare in moto con Eros", "done": true},
    {"titolo":"Dormire", "done": false}
];

let elencoAzioniSvolte = document.getElementById("ul-done");
let elencoAzioniDaSvolgere = document.getElementById("ul-not-done");
let azioniSvolte = "";
let azioniDaSvolgere = "";

Tasks.forEach(Task => {
    if(Task.done) {
        azioniSvolte += "<li>" + Task.titolo + "</li>"; 
    }
    else{
        azioniDaSvolgere += "<li>" + Task.titolo + "</li>"; 
    }
})

Tasks.forEach(Task => {
    azioniSvolte += "<li>" + Task.titolo + "</li>";
})

elencoAzioniSvolte.innerHTML = azioniSvolte;
elencoAzioniSvolte.innerHTML = azioniDaSvolgere;