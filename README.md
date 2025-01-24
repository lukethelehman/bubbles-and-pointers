## bubbles-and-pointers
CS-121 Project to practice C and use a bubble sort

The purpose of this project is to practice C. The program will take an array and sort it from lowest to highest using the bubble method. 

Here is the algorithm -


```

constant MAX is the max length of the array
void printValue function (array) 
void sort function (array)
void swap function (int, int)


function main()
	create array values[] initilized with {7, 3, 9, 4, 6, 1, 2, 8, 5}
	print before:
	printValues(values)
	
	//test the swap function 	
	integer x gets 3
	integer y gets 5 
	print values of x and y 
	swap(x, y)
	print values of x and y

	sort(values)
	print "after"
	printValue(values)
	
	return 0 



function sort (array)
	create integer values i and j
	for i from zero to MAX - 1:
		for j from zero to MAX -1:
			if array[j] > array[j + 1]
			swap array[j] with array[j + 1]
			printArray(array)

function printValues (array)
	create integer value i 
	for i from zero to MAX 
		print array[i]

function swap (a, b)
	create temporary value 
	temp gets the value of a 
	copy the value of b to the address of b 
	copy temp to the value of b

	```
