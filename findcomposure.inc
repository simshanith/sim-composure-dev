findcomposure () 
{ 
    author 'Shane Daniel';
    about 'Prints the composure readme & path';
    param '';
    example '';
    group 'test';
    local README="~/.local/composure/README.txt"
    echo $README
    markdown ~/.local/composure/README.txt | ag composure
}
