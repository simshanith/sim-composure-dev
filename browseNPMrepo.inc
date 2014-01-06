browseNPMrepo () 
{ 
    author 'Shane Daniel';
    about '';
    param '';
    example '';
    group '';
    open `npm info $1 | underscore extract repository.url --outfmt "text"`
}
