=begin
Ruby program to find the presence of an element in a set.
=end

require 'set'

Vegetable=Set.new(["potato","brocolli","broccoflower","lentils","peas","fennel","chilli","cabbage"])

puts "Enter the element:-"
element = gets.chomp

val =  Vegetable === element
if val == true
	puts "#{element} is Present in the set."
else
	puts "#{element} is not Present in the set."
end
