string directionGame(int n, string &s) {
    
    int d = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            d += 1;
        } else if(s[i] == '1') {
            d -= 1;
        }
    }

    int modResult = (d % 4 + 4) % 4;

    switch (modResult) {
        case 0:
            return "NORTH";
        case 1:
            return "EAST";
        case 2:
            return "SOUTH";
        case 3:
            return "WEST";
    }
}
