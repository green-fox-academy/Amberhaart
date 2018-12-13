const dog = document.querySelector('#radio1_input');
const cat = document.querySelector('#radio2_input');
const goldfish = document.querySelector('#radio3_input');
const yesbutton = document.querySelector('#radio4_input');
const nobutton = document.querySelector('#radio5_input');

const catlove = document.querySelector('.catlove');
const signup = document.querySelector('.signup');


function signupEnable() {
    if (dog.checked || cat.checked) {
        signup.disabled = false;
    }
}

function catloveEnable() {
    if (yesbutton.checked) {
        catlove.disabled = false;
    }
}

function goldfishEnable() {
    if (goldfish.checked && nobutton.checked) {
        signup.disabled = false;
    }
}

function buttontrigger() {

        if (goldfish.checked && nobutton.checked) {
            alert("Sigh, we still added you to the cat facts list")
        } else {
            alert("Thank you, you've successfully signed up for cat facts")
        }
};

dog.addEventListener('change', signupEnable);
cat.addEventListener('change', signupEnable);
yesbutton.addEventListener('change', catloveEnable);
goldfish.addEventListener('change', goldfishEnable);
nobutton.addEventListener('change', goldfishEnable);
catlove.addEventListener('click', buttontrigger);
signup.addEventListener('click', buttontrigger);



