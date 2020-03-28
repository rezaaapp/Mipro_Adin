# sevenSegmentDisplay #

Compatible architecture: ALL  

## Description ##

This library allows to drive both common-anode or common-cathode 7 segment displays.   

## Sintax & short command reference ##

- **Creating an istance**  

    `sevenSegmentDisplay name(displayType, A, B, C, D, E, F, G, DP);`  
    
    **name**        : the name of the object  
    **displayType** : the type of the display, it can be one of these constants: **COMMON\_ANODE** or **COMMON\_CATHODE**   
    
	The arguments from **A** to **G** are the pins were the relative display's segment is attached, **DP** is the decimal point  
	
- **Drawing a symbol on the display**  
 	
	`name.set(symbol);`  
	
	**symbol** : the symbol that will be displayed on the display, it can be one of the alphanumeric characters in the following table:  
	
	***N.B: THE LETTERS MUST BE SPECIFIED INTO SINGLE QUOTES*** e.g. `name.set('A');`    
	
	| Character |                                           Symbol                                                                |  
	|:---------:|-----------------------------------------------------------------------------------------------------------------|  
	|     0     |![symbol0](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol0.png)   |  
	|     1     |![symbol1](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol1.png)   |  
	|     2     |![symbol2](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol2.png)   |  
	|     3     |![symbol3](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol3.png)   |  
	|     4     |![symbol4](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol4.png)   |  
	|     5     |![symbol5](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol5.png)   |  
	|     6     |![symbol6](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol6.png)   |  
	|     7     |![symbol7](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol7.png)   |  
	|     8     |![symbol8](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol8.png)   |  
	|     9     |![symbol9](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/sumbol9.png)   |    
	|    'A'    |![symbol\_A](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_A.png)|  
	|    'b'    |![symbol\_b](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_b.png)|  
	|    'C'    |![symbol\_C](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_C.png)|  
	|    'c'    |![symbol\_c](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_c.png)|  
	|    'd'    |![symbol\_d](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_d.png)|  
	|    'E'    |![symbol\_E](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_E.png)|  
	|    'F'    |![symbol\_F](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_F.png)|  
	|    'H'    |![symbol\_H](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_H.png)|  
	|    'I'    |![symbol\_I](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_I.png)|  
	|    'J'    |![symbol\_J](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_J.png)|  
	|    'L'    |![symbol\_L](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_L.png)|  
	|    'n'    |![symbol\_n](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_n.png)|  
	|    'o'    |![symbol\_o](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_o.png)|  
	|    'P'    |![symbol\_P](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_P.png)|  
	|    'q'    |![symbol\_q](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_q.png)|  
	|    'r'    |![symbol\_r](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_r.png)|  
	|    't'    |![symbol\_t](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_t.png)|  
	|    'U'    |![symbol\_U](https://github.com/HackerInside0/Arduino_sevenSegmentDisplay/blob/master/extras/symbol/symbol_U.png)|  
	
- **Manually setting the display's segments**  
 
 	`name.setSegment(segment, value);`  
	
	**segment** : a letter from **A** to **G** or **DP**, that identify a segment on the display  
	
	***N.B: This argument is not case sensitive but, except for DP, THE SEGMENT MUST BE SPECIFIED INTO SINGLE QUOTES*** e.g.   `name.setSegment('A');`   
	
	**value** : the state of the segment, it can be **HIGH** or **LOW**  
	
- **Turning off the display**  

	`name.off();`  

## About the author & license info

#LICENSE

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">
<img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" />
</a>
<br />
<span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">The Seven Segment Display Library</span> by <a xmlns:cc="http://creativecommons.org/ns#" href="https://github.com/HackerInside0/Arduino_sevenSegmentDisplay" property="cc:attributionName" rel="cc:attributionURL">Giuseppe Masino</a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a> and also under the following terms:  

The softwares, source files, schematics and all other material are provided "AS IS", without warranty of any kind, express or implied, including but not limited to the warranties of merchantability, fitness for a particular scope and noninfringement.   

In no event shall me and/or other peopole that holds the rights and/or are implied in the creation and distribution of the above mentioned things be liable for any claim, damages or other liability, whether in an action of contract, tort or otherwise, arising form, out of or in connection with the above mentioned things or the use or other dealings in it.  

The above copyright notice and this permission notice shall accompany and/or be included ( depending on the type of work ) in all the derived works from mine, as addendum to compliance with the provisions above.  

If you need permissions that are beyond the scope of this license, you can ask to me through this facebook page <a xmlns:cc="http://creativecommons.org/ns#" href="https://www.facebook.com/dev.hackerinside/" rel="cc:morePermissions">https://www.facebook.com/dev.hackerinside/</a>

The text of this license can also be found in the LICENSE.md file