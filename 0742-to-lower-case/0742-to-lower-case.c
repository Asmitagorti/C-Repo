char* toLowerCase(char* s) {
    int len=strlen(s);
    for(int i=0;i<len;++i){
        s[i]=tolower(s[i]);
    }
    return s;
}