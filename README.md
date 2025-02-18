# **Selection Sort Implementation**  

## **Overview**  
This program sorts an integer array using the **Selection Sort algorithm**. 
It compares array elements pairwise and swaps them when needed to get a **sorted array in ascending order**.  

## Input
You have to manually change the input from the code as there is no Input mechanism impletmented

## **How It Works**  

### **1. Selection Sort Algorithm**  
- **Outer loop (`i`)**: Moves through each element in the array.  
- **Inner loop (`j`)**: Compares `SelectionArray[i]` with all later elements.  
- **Swapping logic**:  
  - If `SelectionArray[i] > SelectionArray[j]`, swap values.  
  - Ensures smaller values move toward the beginning of the array.  

### **2. Printing the Sorted Array**  
After sorting, a loop prints the final sorted array.  

## **Example Run**  
```plaintext
Input Array:  {5,2,4,1,3}
Sorted Array: {1,2,3,4,5}
```

## **Main Components**  

### **Sorting Logic**  
```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (SelectionArray[i] > SelectionArray[j])
        {
            temp = SelectionArray[i];
            SelectionArray[i] = SelectionArray[j];
            SelectionArray[j] = temp;
        }
    }
}
```
- Finds the smallest element and swaps it forward.  
- Repeats for each position until fixed/sorted.  

### **Printing the Sorted Array**  
```c
for (int i = 0; i < n; i++)
{
    printf(" %d ", SelectionArray[i]);
}
```
- Outputs: `1 2 3 4 5`.  

## **Notes**  
- Selection Sort has **O(n²) time complexity**, so it is slow for large datasets.

## **Compilation & Execution**  
```sh
gcc selection_sort.c -o selection_sort  
./selection_sort  
```

## **Example Output**  
```sh
 1  2  3  4  5 
```
-------------
## License
This project is open-source and available under the [MIT License](LICENSE).
