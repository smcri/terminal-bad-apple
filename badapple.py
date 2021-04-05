from toascii import VideoConverter

v = VideoConverter('badapple.mp4',scale=0.1,width_stretch=1,gradient='BLOCK')
v.convert()

a = 0
b = len(v.ascii_frames)

f=open("BadTxt.txt","a")

while a<b:
	c = str(v.ascii_frames[a])
	f.write(c+'\n[-]')
	a+=1
f.close()
v.view()