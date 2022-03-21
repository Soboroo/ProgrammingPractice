s = io.read()
r = 10
for i = 2, #s do
	if s:sub(i, i) == s:sub(i-1, i-1) then
		r = r + 5
	else
		r = r + 10
	end
end
print(r)