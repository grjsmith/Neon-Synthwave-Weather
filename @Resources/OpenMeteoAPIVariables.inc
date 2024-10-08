[Variables]
; =====================================
; User Editable Variables
; =====================================

; =====================================
; Manually set Latitude/Longitude values to match your Location
; OR use 'Choose Location' from the right-click skin menu for the 'Top 10' results

; Locations
; =====================================
Latitude=51.0428
Longitude=-0.8924
LocationName=Liss
LocationRegionCode=Hampshire
LocationCountryCode=United Kingdom

; Date and Time Formatting
; =====================================
; Long Day Name, Month Date
DateFormat=%A, %B %d
; %H:%M (00:00) or %I:%M %p (12:00 AM)
TimeFormat=%H:%M

; Open-Meteo Variables
; =====================================
; ** DO NOT CAPITALIZE this variable value
; auto | or use time-zone-database values: 'https://en.wikipedia.org/wiki/List_of_tz_database_time_zones'
; Use 'TZ identifier' as the TimeZone value below. e.g. TimeZone=America/New_York
TimeZone=auto

; ** DO NOT CAPITALIZE this variable value
; celsius | fahrenheit
TempUnit=celsius

; ** DO NOT CAPITALIZE this variable value
; kmh | mph | ms | kn
SpeedUnit=kmh

; ** DO NOT CAPITALIZE this variable value
; mm | inch
PrecipUnit=mm

; =====================================
; These 2 variables are display lables for distance and pressure because the measure distance values are always in feet/meters and pressure value is always in hPa (hectoPascals~millibars) 
; mb | in
PressureUnit=mb

; km | mi
DistanceUnit=km

; =====================================
; Weather Icons::
; =====================================
; Skins can use any weather icon sets that work with TWC

; Convert Open-Meteo Icons (Number and Day/Night value) To TWC numbers
TWCRegExpSubstitute="^31$":"26","^30$":"26","^00$":"31","^01$":"32","^11$":"34","^10$":"33","^21$":"30","^20$":"29","^451$":"20","^450$":"20","^481$":"25","^480$":"25","^511$":"9","^510$":"9","^531$":"11","^530$":"11","^551$":"11","^550$":"11","^561$":"8","^560$":"8","^571$":"10","^570$":"10","^611$":"12","^610$":"12","^631$":"12","^630$":"12","^651$":"40","^650$":"40","^661$":"8","^660$":"8","^671$":"10","^670$":"10","^711$":"46","^710$":"41","^731$":"16","^730$":"16","^751$":"42","^750$":"42","^771$":"41","^770$":"41","^801$":"12","^800$":"12","^811$":"39","^810$":"39","^810$":"45","^821$":"3","^820$":"3","^851$":"14","^850$":"14","^861$":"43","^860$":"43","^951$":"37","^950$":"47","^961$":"4","^960$":"4","^991$":"3","^990$":"3"
