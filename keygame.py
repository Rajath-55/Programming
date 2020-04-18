import game, sys
from pygame.locals import *
catx=10
caty=10
screen=0

def myquit():
	pygame.quit()
	sys.exit(0)


def check_inputs(events):
    global catx, caty, screen
    for event in events:
       if event.type ==QUIT:
          quit()
       else:
           if event.type==KEYDOWN:
              if event.key==K_ESCAPE:
                 myquit()
              elif event.key==L_LEFT:
                   catx-=5
                   print("Move rect left")
              elif event.key==L_RIGHT:
              	   catx+=5
              	   print('Move rect irhgt')
              elif event.key==L_UP:
                   caty+=5
                   print('Move rect up')
              elif event.key==L_DOWN:
                   caty-=5
                   print('Move rect Down')
              else:
                  print(event.key)
    

    screen.fill((0,0,0))
    pygame.draw.rect(screen,(255,255,255), (catx, caty, 50,10))
    pygame.display.update()


def main():
	global screen
	pygame.init()
	SCREEN_WIDTH=600
	SCREEN_HEIGHT=490
	window=pygame.display.set_mode(SCREEN_WIDTH,SCREEN_HEIGHT)
	pygame.display.set_caption('PP smol')
	screen=pygame.display.get_surface()

	pygame.display.update()

	while True:
		check_inputs(pygame.event.get())

main()
                                                 	  