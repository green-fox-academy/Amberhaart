const email = document.querySelector('#email_input');
const password = document.querySelector('#password_input');

function login () {
    if (email.checkValidity() && password.checkValidity()) {
        alert("successfully logged in");
    }
}