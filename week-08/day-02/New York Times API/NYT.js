const API_BASE_URL = "http://api.nytimes.com/svc/search/v2/articlesearch.json?q=moon+landing+by+Apollo11s&page=2&sort=oldest&api-key=4d5fda8d322d46d28da94c71309897a5"

const xhr = new XMLHttpRequest();

xhr.onreadystatechange = () => {
    if (xhr.readyState === XMLHttpRequest.DONE) {
        if (xhr.status === 200) {
            const response = JSON.parse(xhr.responseText);
            const article = document.querySelector('.article');

            response.response.docs.forEach(e => {
                
                const container = document.createElement('div');
                container.classList.add('container');

                const headline = document.createElement('a');
                headline.setAttribute('href', e.web_url);
                headline.innerText = e.headline.main;

                const snippet = document.createElement('div');
                snippet.innerText = e.snippet;

                const pubdate = document.createElement('div');
                pubdate.innerText = e.pub_date;

                container.appendChild(headline);
                container.appendChild(snippet);
                container.appendChild(pubdate);

                article.appendChild(container);
            });
        }
    }
};

xhr.open('GET', API_BASE_URL);
xhr.send();