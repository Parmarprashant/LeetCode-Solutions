// Last updated: 17/06/2026, 20:31:35
#define RES_LEN     4048 * 1024

char* processStr(char* s) {
    char *result = calloc(RES_LEN, sizeof(char));   
    int rLen = 0, l, r;

    for(int i = 0; s[i]; i++) {
        switch(s[i]) {
            case '*': // remove last character from result
                    if(rLen > 0) {
                        --rLen;
                        result[rLen] = '\0';
                    }
                    break;

            case '#': // duplicate the current result and append it to itself
                    rLen += sprintf(result + rLen, "%s", result);
                    result[rLen] = '\0';  
                    break;

            case '%': // reverse the current result
                    l = 0, r = rLen-1;
                    while(l < r) {
                        int temp = result[l];
                        result[l] = result[r];
                        result[r] = temp;
                        ++l, --r;
                      }
                      result[rLen] = '\0';
                    break;
            
            default: // letter is lowercase, append it to result 
                    result[rLen++] = s[i];
                    result[rLen] = '\0';            
                    break;
        }   
    }
    result[rLen] = '\0';
    return result;
}