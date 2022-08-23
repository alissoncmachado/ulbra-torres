$(document).ready(()=> {
    $('section').load('pages/home.html');
    $('#menuHome').addClass('active');

function clearClass(){
        $('#menuHome').removeClass('active')
        $('#menuSobre').removeClass('active')
        $('#menuProduto').removeClass('active')
        $('#menuContato').removeClass('active')
    }

    $('#menuHome').click(()=> {
        clearClass();
        $('#menuHome').addClass('active')
        $('section').load('pages/home.html')
    })

    $('#menuSobre').click(()=> {
        clearClass();
        $('#menuSobre').addClass('active')
        $('section').load('pages/sobre.html')
    })

    $('#menuProduto').click(()=> {
        clearClass();
        $('#menuProduto').addClass('active')
        $('section').load('pages/produto.html')
    })    

    $('#menuContato').click(()=> {
        clearClass();
        $('#menuContato').addClass('active')
        $('section').load('pages/contato.html', () => {
            $('#confirmar').click(() =>{
                alert('Recebemos seus dados. Logo entraremos em contato!');
                $('section').load('pages/home.html');
                $('#menuHome').addClass('active');
            })
        });
    })
    
    

    
})
