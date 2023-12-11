#[no_mangle]
pub extern "C" fn add32(left: i32, right: i32) -> i32 {
    left + right
}

#[no_mangle]
pub extern "C" fn print_int_arr(arr: *const i32, n: usize) -> () {
    if arr.is_null() {
        println!("ERROR: null pointer passed to function!");
        return;
    }

    let slice = unsafe { std::slice::from_raw_parts(arr, n) };

    print!("Array contents: ");
    slice.iter().for_each(|x| print!("{} ", x));
    println!();

}
