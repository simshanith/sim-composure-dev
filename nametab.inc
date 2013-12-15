nametab () 
{ 
    if [ -z "$1" ]; then
        echo "Usage:"
        echo "\`nametab workspace\`"
        echo "Sets the tab's namespace in iTerm using escape sequence."
    else
        echo -e "\033];$1\007"
    fi
}
