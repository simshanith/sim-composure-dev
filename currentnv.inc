currentnv () 
{ 
    author 'Shane Daniel';
    about '';
    param '';
    example '';
    group 'nvm';
    nvm ls current | ack --nocolor "(?P<version>v[\d]*\.[\d]*.[\d]*)" --output "$+{version}"
}
