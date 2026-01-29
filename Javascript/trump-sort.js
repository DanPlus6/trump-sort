function trumpSort(arr) {
    const N = arr.length;
    var wall = arr[0];
    let citizens = [];

    for (let i = 0; i < N; i++) {
        if (arr[i] >= wall) {
            wall = arr[i];
            citizens.push(arr[i]);
        }
    }

    return citizens;
}


const arr = [24,48,30,12,65,77,24,2,13,80,76,4,1];

const sorted_array = trumpSort(arr);

for (const elem of sorted_array) {
    console.log(elem);
}

