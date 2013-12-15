currentnv () 
{ 
    author 'Shane Daniel';
    about '';
    param '';
    example '';
    group 'nvm';
    nvm ls current | ack --cc '(v[\d]*\.[\d]*.[\d]*)' --output '$1'
}
