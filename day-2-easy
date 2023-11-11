int liftStruggle(int d) {
    
    int currRate = 0, actions=0;

    // if(currRate != d) {
    //     if (d % 3 == 0) {
    //         bat = d / 3;
    //     } else {
    //         bat = (d / 3) + 2;
    //     }
    // }

    while(currRate != d) {
        if(currRate < d) {
            currRate += 3;
            actions++;
        } else {
            currRate -= 2;
            actions++;
        }
    }

    return actions;
}
