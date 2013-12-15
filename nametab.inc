nametab () 
{ 
    author 'Shane Daniel';
    about 'Sets name of a tab in iTerm2. Requires name argument.';
    param 'Name of the new tab.';
    example 'nametab "Grunt watch & build"';
    group 'util';
    if [ -z "$1" ]; then
      glossary | ag -Q -w nametab
    else
      echo -e "\033];$1\007"
    fi
}
