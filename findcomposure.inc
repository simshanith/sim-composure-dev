findcomposure () 
{ 
    author 'Shane Daniel';
    about '';
    param '';
    example '';
    group '';
    local README = '~/.local/composure/README.txt'
    echo $README;
    markdown $README | ag composure
}
