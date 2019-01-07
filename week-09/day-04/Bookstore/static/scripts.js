const xhr = new XMLHttpRequest();

xhr.open('GET', '/books');
xhr.onload = () => {
    if (xhr.status === 200) {
        const res = JSON.parse(xhr.responseText);
        //   res.forEach((e)=> {
        //   
        //  });
        setBooks(res);
    }
}
xhr.send();


const setBooks = (data) => {
    const myTable = document.querySelector('.myTable');

    data.forEach((e) => {
        const tr = document.createElement('tr');
        const thTitle = document.createElement('th');
        thTitle.textContent = e.title;
        const thAuthor = document.createElement('th');
        thAuthor.textContent = e.author;
        const thCategory = document.createElement('th');
        thCategory.textContent = e.category;
        const thPublisher = document.createElement('th');
        thPublisher.textContent = e.publisher;
        const thPrice = document.createElement('th');
        thPrice.textContent = e.price;
        tr.appendChild(thTitle);
        tr.appendChild(thAuthor);
        tr.appendChild(thCategory);
        tr.appendChild(thPublisher);
        tr.appendChild(thPrice);
        myTable.appendChild(tr);
    });

}

function authFilterMe() {

    authFilter = document.getElementById('authFilter').value;


    if (authFilter == "") {
        url = '/books'
    }
    else {
        url = '/books?author=' + authFilter
    }


    const xhr = new XMLHttpRequest();


    xhr.open('GET', url);
    xhr.onload = () => {
        if (xhr.status === 200) {

            const res = JSON.parse(xhr.responseText);
            //   res.forEach((e)=> {
            //   
            //  });

            setBooks(res);
        }
    }
    xhr.send();


    const setBooks = (data) => {
        const myTable = document.querySelector('.myTable');
        myTable.innerHTML = "";

        data.forEach((e) => {
            const tr = document.createElement('tr');
            const thTitle = document.createElement('th');
            thTitle.textContent = e.title;
            const thAuthor = document.createElement('th');
            thAuthor.textContent = e.author;
            const thCategory = document.createElement('th');
            thCategory.textContent = e.category;
            const thPublisher = document.createElement('th');
            thPublisher.textContent = e.publisher;
            const thPrice = document.createElement('th');
            thPrice.textContent = e.price;
            tr.appendChild(thTitle);
            tr.appendChild(thAuthor);
            tr.appendChild(thCategory);
            tr.appendChild(thPublisher);
            tr.appendChild(thPrice);
            myTable.appendChild(tr);
        });

    }

}

function titleFilterMe() {

    titleFilter = document.getElementById('titleFilter').value;


    if (titleFilter == "") {
        url = '/books'
    }
    else {
        url = '/books?title=' + titleFilter
    }


    const xhr = new XMLHttpRequest();


    xhr.open('GET', url);
    xhr.onload = () => {
        if (xhr.status === 200) {

            const res = JSON.parse(xhr.responseText);
            //   res.forEach((e)=> {
            //   
            //  });

            setBooks(res);
        }
    }
    xhr.send();


    const setBooks = (data) => {
        const myTable = document.querySelector('.myTable');
        myTable.innerHTML = "";

        data.forEach((e) => {
            const tr = document.createElement('tr');
            const thTitle = document.createElement('th');
            thTitle.textContent = e.title;
            const thAuthor = document.createElement('th');
            thAuthor.textContent = e.author;
            const thCategory = document.createElement('th');
            thCategory.textContent = e.category;
            const thPublisher = document.createElement('th');
            thPublisher.textContent = e.publisher;
            const thPrice = document.createElement('th');
            thPrice.textContent = e.price;
            tr.appendChild(thTitle);
            tr.appendChild(thAuthor);
            tr.appendChild(thCategory);
            tr.appendChild(thPublisher);
            tr.appendChild(thPrice);
            myTable.appendChild(tr);
        });

    }

}

function categoryFilterMe() {

    categoryFilter = document.getElementById('categoryFilter').value;


    if (categoryFilter == "") {
        url = '/books'
    }
    else {
        url = '/books?category=' + categoryFilter
    }


    const xhr = new XMLHttpRequest();


    xhr.open('GET', url);
    xhr.onload = () => {
        if (xhr.status === 200) {

            const res = JSON.parse(xhr.responseText);
            //   res.forEach((e)=> {
            //   
            //  });

            setBooks(res);
        }
    }
    xhr.send();


    const setBooks = (data) => {
        const myTable = document.querySelector('.myTable');
        myTable.innerHTML = "";

        data.forEach((e) => {
            const tr = document.createElement('tr');
            const thTitle = document.createElement('th');
            thTitle.textContent = e.title;
            const thAuthor = document.createElement('th');
            thAuthor.textContent = e.author;
            const thCategory = document.createElement('th');
            thCategory.textContent = e.category;
            const thPublisher = document.createElement('th');
            thPublisher.textContent = e.publisher;
            const thPrice = document.createElement('th');
            thPrice.textContent = e.price;
            tr.appendChild(thTitle);
            tr.appendChild(thAuthor);
            tr.appendChild(thCategory);
            tr.appendChild(thPublisher);
            tr.appendChild(thPrice);
            myTable.appendChild(tr);
        });

    }

}

function publisherFilterMe() {

    publisherFilter = document.getElementById('publisherFilter').value;


    if (titleFilter == "") {
        url = '/books'
    }
    else {
        url = '/books?publisher=' + publisherFilter
    }


    const xhr = new XMLHttpRequest();


    xhr.open('GET', url);
    xhr.onload = () => {
        if (xhr.status === 200) {

            const res = JSON.parse(xhr.responseText);
            //   res.forEach((e)=> {
            //   
            //  });

            setBooks(res);
        }
    }
    xhr.send();


    const setBooks = (data) => {
        const myTable = document.querySelector('.myTable');
        myTable.innerHTML = "";

        data.forEach((e) => {
            const tr = document.createElement('tr');
            const thTitle = document.createElement('th');
            thTitle.textContent = e.title;
            const thAuthor = document.createElement('th');
            thAuthor.textContent = e.author;
            const thCategory = document.createElement('th');
            thCategory.textContent = e.category;
            const thPublisher = document.createElement('th');
            thPublisher.textContent = e.publisher;
            const thPrice = document.createElement('th');
            thPrice.textContent = e.price;
            tr.appendChild(thTitle);
            tr.appendChild(thAuthor);
            tr.appendChild(thCategory);
            tr.appendChild(thPublisher);
            tr.appendChild(thPrice);
            myTable.appendChild(tr);
        });

    }

}

function pltFilterMe() {

    pltFilter = document.getElementById('pltFilter').value;


    if (pltFilter == "") {
        url = '/books'
    }
    else {
        url = '/books?plt=' + pltFilter
    }


    const xhr = new XMLHttpRequest();


    xhr.open('GET', url);
    xhr.onload = () => {
        if (xhr.status === 200) {

            const res = JSON.parse(xhr.responseText);
            //   res.forEach((e)=> {
            //   
            //  });

            setBooks(res);
        }
    }
    xhr.send();


    const setBooks = (data) => {
        const myTable = document.querySelector('.myTable');
        myTable.innerHTML = "";

        data.forEach((e) => {
            const tr = document.createElement('tr');
            const thTitle = document.createElement('th');
            thTitle.textContent = e.title;
            const thAuthor = document.createElement('th');
            thAuthor.textContent = e.author;
            const thCategory = document.createElement('th');
            thCategory.textContent = e.category;
            const thPublisher = document.createElement('th');
            thPublisher.textContent = e.publisher;
            const thPrice = document.createElement('th');
            thPrice.textContent = e.price;
            tr.appendChild(thTitle);
            tr.appendChild(thAuthor);
            tr.appendChild(thCategory);
            tr.appendChild(thPublisher);
            tr.appendChild(thPrice);
            myTable.appendChild(tr);
        });

    }

}

function pgtFilterMe() {

    pgtFilter = document.getElementById('pgtFilter').value;


    if (pgtFilter == "") {
        url = '/books'
    }
    else {
        url = '/books?pgt=' + pgtFilter
    }


    const xhr = new XMLHttpRequest();


    xhr.open('GET', url);
    xhr.onload = () => {
        if (xhr.status === 200) {

            const res = JSON.parse(xhr.responseText);
            //   res.forEach((e)=> {
            //   
            //  });

            setBooks(res);
        }
    }
    xhr.send();


    const setBooks = (data) => {
        const myTable = document.querySelector('.myTable');
        myTable.innerHTML = "";

        data.forEach((e) => {
            const tr = document.createElement('tr');
            const thTitle = document.createElement('th');
            thTitle.textContent = e.title;
            const thAuthor = document.createElement('th');
            thAuthor.textContent = e.author;
            const thCategory = document.createElement('th');
            thCategory.textContent = e.category;
            const thPublisher = document.createElement('th');
            thPublisher.textContent = e.publisher;
            const thPrice = document.createElement('th');
            thPrice.textContent = e.price;
            tr.appendChild(thTitle);
            tr.appendChild(thAuthor);
            tr.appendChild(thCategory);
            tr.appendChild(thPublisher);
            tr.appendChild(thPrice);
            myTable.appendChild(tr);
        });

    }

}

function filterAll() {

    console.log("Filterrall");
    authFilter = document.getElementById('authFilter').value;

    titleFilter = document.getElementById('titleFilter').value;

    categoryFilter = document.getElementById('categoryFilter').value;

    publisherFilter = document.getElementById('publisherFilter').value;

    pltFilter = document.getElementById('pltFilter').value;

    pgtFilter = document.getElementById('pgtFilter').value;


    let url = '/books';

    if (authFilter === "" && titleFilter === "" && categoryFilter === "" && publisherFilter === "" && pltFilter === "" && pgtFilter === "") { }
    else {
        url += '?filterall=true'

        if (authFilter != "") {
            url += '&author=' + authFilter
        }
        if (titleFilter != "") {
            url += '&title=' + titleFilter
        }
        if (categoryFilter != "") {
            url += '&category=' + categoryFilter
        }
        if (publisherFilter != "") {
            url += '&publisher=' + publisherFilter
        }
        if (pltFilter != "") {
            url += '&plt=' + pltFilter
        }
        if (pgtFilter != "") {
            url += '&pgt=' + pgtFilter
        }
    }



    const xhr = new XMLHttpRequest();


    xhr.open('GET', url);
    xhr.onload = () => {
        if (xhr.status === 200) {

            const res = JSON.parse(xhr.responseText);
            //   res.forEach((e)=> {
            //   
            //  });

            setBooks(res);
        }
    }
    xhr.send();


    const setBooks = (data) => {
        const myTable = document.querySelector('.myTable');
        myTable.innerHTML = "";

        data.forEach((e) => {
            const tr = document.createElement('tr');
            const thTitle = document.createElement('th');
            thTitle.textContent = e.title;
            const thAuthor = document.createElement('th');
            thAuthor.textContent = e.author;
            const thCategory = document.createElement('th');
            thCategory.textContent = e.category;
            const thPublisher = document.createElement('th');
            thPublisher.textContent = e.publisher;
            const thPrice = document.createElement('th');
            thPrice.textContent = e.price;
            tr.appendChild(thTitle);
            tr.appendChild(thAuthor);
            tr.appendChild(thCategory);
            tr.appendChild(thPublisher);
            tr.appendChild(thPrice);
            myTable.appendChild(tr);
        });

    }

}

