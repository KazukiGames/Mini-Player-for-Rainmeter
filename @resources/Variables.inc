[Variables]
; ==================================================================
; The most important variables that you will wanna contemplate >:D
MiniPlayer-Scale=1.1

; ==================================================================
; Now we go with the other variables to modify mini-player :3
; Anyways, you can modify Width if you want.
MiniPlayer-Width=[#WorkAreaWidth]
; Recommended Value for Height is 40.
MiniPlayer-Height=40
MiniPlayer-Radius=6
MiniPlayer-Border=1

; This value is obtained from skin menu (Right Click in Skin > MiniPlayer Centering) so don't modify manually this variables
MiniPlayer-Centering=0.10
; 0 = Off Shadow ; 1 = On Shadow
MiniPlayer-Foreground-Shadow=1

ProgressBar-Width=400
VolumeBar-Width=70

Item-Padding=5

; ==================================================================
; Here is my favorite part, customize the MiniPlayer's colors <3
MiniPlayer-Background-Color=100, 96, 98
MiniPlayer-Border-Color=40, 40, 40

; Foreground include Strings and Icons Meters
MiniPlayer-Foreground-Color=230,230,230
MiniPlayer-Foreground-Active-Color=230,230,230

; Bar color includes that bar and his current progress, like the progress of song or volume. 
MiniPlayer-Bar-Color=255,255,255,50
MiniPlayer-Bar-Active-Color=173, 164, 167

; ==================================================================
; More Color Options

; Text Color Section
Text-Song-Title-Color=[#MiniPlayer-Foreground-Color]
Text-Song-Artist-Color=[#MiniPlayer-Foreground-Color]
Text-Volume-Percent-Color=[#MiniPlayer-Foreground-Color]

; Button Color Section
Button-Play-Color=[#MiniPlayer-Foreground-Color]
Button-Pause-Color=[#MiniPlayer-Foreground-Color]
Button-Previous-Color=[#MiniPlayer-Foreground-Color]
Button-Next-Color=[#MiniPlayer-Foreground-Color]
Button-Shuffle-Color0=[#MiniPlayer-Foreground-Color]
Button-Shuffle-Color1=[#MiniPlayer-Foreground-Active-Color]
Button-Repeat-Color0=[#MiniPlayer-Foreground-Color]
Button-Repeat-Color1=[#MiniPlayer-Foreground-Active-Color]
Button-Repeat-Color2=[#MiniPlayer-Foreground-Active-Color]
Buttom-Rating-Color0=[#MiniPlayer-Foreground-Color]
Buttom-Rating-Color1=[#MiniPlayer-Foreground-Color]
Buttom-Rating-Color5=[#MiniPlayer-Foreground-Active-Color]
Button-Volume-Color=[#MiniPlayer-Foreground-Color]

; Bar Color Section
Bar-Progress-Background-Color=[#MiniPlayer-Bar-Color]
Bar-Progress-Color=[#MiniPlayer-Bar-Active-Color]
Bar-Volume-Background-Color=[#MiniPlayer-Bar-Color]
Bar-Volume-Color=[#MiniPlayer-Bar-Active-Color]

; Rating Actions ; Dont touch 
RatingAction0=[!CommandMeasure MeasurePlayPause "ToggleThumbsUp"][!UpdateMeter MeterThumbsUp][!Redraw]
RatingAction1=[!CommandMeasure MeasurePlayPause "ToggleThumbsDown"][!UpdateMeter MeterThumbsUp][!Redraw]
RatingAction5=[!CommandMeasure MeasurePlayPause "ToggleThumbsUp"][!UpdateMeter MeterThumbsUp][!Redraw]

; Dont Touch;
MiniPlayer-Offset=([#MiniPlayer-Width]*[#MiniPlayer-Centering])
