npm-latest-version () 
{ 
    author 'Shane Daniel';
    about '';
    param '';
    example '';
    group '';
    npm info $1 | underscore extract version
}
