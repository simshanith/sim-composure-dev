ackurl () 
{ 
    author 'Shane Daniel';
    about 'Simple regex finder for URLs.';
    param '';
    example 'ackurl README.md; curl http://google.com/ | ackurl';
    group 'util';
    ack '\bhttps?://[^?]+?[/[\w|/|\-|\.|\#|\?|\=]*]*\b'
}
