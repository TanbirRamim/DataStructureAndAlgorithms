//binary search algorithm
//binary search is a search algorithm that finds the position of a target value within a sorted array.
//binary search compares the target value to the middle element of the array.
//if they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found.
//if the search ends with the remaining half being empty, the target is not in the array.
//binary search runs in logarithmic time in the worst case, making O(log n) comparisons, where n is the number of elements in the array, and therefore is much faster than linear search O(n) which makes at most O(n) comparisons, where n is the number of elements in the array.
//if the search space is reduced by half at each comparison, then the total number of comparisons will be the number of times one can halve n before getting a value that is less than or equal to one.
//that is if n is 16, then the maximum number of times one can halve 16 to get a value less than or equal to one is four.
//if n is 32, then the maximum number of times one can halve 32 to get a value less than or equal to one is five.
//this can be computed using the following formula:
//log base 2 of n equals the number of times one can halve n to get a value less than or equal to one.
const binarySearch = (arr, target) => {
  let start = 0;
  let end = arr.length - 1;
  let middle = Math.floor((start + end) / 2);
  while (arr[middle] !== target && start <= end) {
    if (target < arr[middle]) end = middle - 1;
    else start = middle + 1;
    middle = Math.floor((start + end) / 2);
  }
  return arr[middle] === target ? middle : -1;
};
console.log(binarySearch([2, 5, 6, 9, 13, 15, 28, 30], 103));
//output: -1
//Time complexity: O(log n)
//Space complexity: O(1)
