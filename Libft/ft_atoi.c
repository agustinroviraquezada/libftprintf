int ft_atoi(const char *nptr){

int i;
int n;
int sign;

n = 0;
i = 0;
sign = 1;

while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\r')
        nptr++;

if (*nptr == '-') {
    sign = -1;
    nptr++;
} else if (*nptr == '+') {
    nptr++;
}

while (*nptr >= '0' && *nptr <= '9'){
    n = n * 10 + (*nptr - '0');
    nptr++;
}

return (n * sign);

}