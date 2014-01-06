browseNPMrepo () 
{ 
    author 'Shane Daniel';
    about '';
    param '';
    example '';
    group '';
    open -a Google\ Chrome.app `npm info $1 | underscore extract repository.url --outfmt "text"`
}
