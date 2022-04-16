=begin 
Ruby program to print an array as string.
=end

# array
arr= Array["Haridwar","Dehradun","Graphic_Era","Includehelp"]

# converting to string 
joinarr1=arr.join(" ") #using join method
# printing
puts joinarr1

#using for loop and .to_s method
joinarr2=""
for i in 0..arr.length
	joinarr2=joinarr2+arr[i].to_s+ " "
end

puts joinarr2
