prettyjson () 
{ 
    author 'Shane Daniel';
    about 'Display JSON in terminal; sort alphanumerically (ascending) by keys recursively';
    param '';
    example '';
    group 'util';
    python -mjson.tool $1 | pygmentize -l json
}
