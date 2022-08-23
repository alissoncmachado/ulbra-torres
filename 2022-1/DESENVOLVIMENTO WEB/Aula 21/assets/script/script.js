$(document).ready(()=> {
    $('section').load('pages/home.html');
    $('#menuhome').addClass('active');

function clearClass(){
        $('#menuHome').clearClass('active')
        $('#menuSobre').clearClass('active')
        $('#menuProduto').clearClass('active')
        $('#menuContato').clearClass('active')
    }

    $('#menuHome').click(()=> {
        clearClass()
        $('#menuHome').addClass('active')
        $('section').load('pages/home.html')
    })

    $('#menuSobre').click(()=> {
        clearClass()
        $('#menuSobre').addClass('active')
        $('section').load('pages/sobre.html')
    })

    $('#menuProduto').click(()=> {
        clearClass()
        $('#menuProduto').addClass('active')
        $('section').load('pages/produto.html')
    })    

    $('#menuContato').click(()=> {
        clearClass()
        $('#menuContato').addClass('active')
        $('section').load('pages/contato.html')
    })    
})
