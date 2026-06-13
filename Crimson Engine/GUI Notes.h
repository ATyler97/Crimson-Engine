/*
	Welcome to the GUI Graphics folder!

		To make heads or tails of this system, I've included this note.( yes the one you're reading now! )

		Its very important that you understand the key structure of how this system is organized. I tried to
		go about its construction in an way that is rather non-specific. The word is currently escaping my 
		mind right now, and if I remember later I will put it here -> ( word ). Basically, I did this so the 
		library, engine, thing, what ever this is, can be expanded rather easily. 


	-The Meat and Potatoes-

		Now, the structure is as follows: -GUI_Elements- are the Headers and Cpp files that hold the building-block
		information that is required for SDL to render something. Think of this as, Whole ingredients. 

			key idea > Elements = Whole ingredients. < key idea

		Ingredients alone can be good, but they're often better when used together in something larger. This 
		larger something is the -GUI_Body-. These elements are all natrually built into the GUI_Body class. That way,
		if a body were to be created, it can be customized that way without having to attach elements through another 
		process. 

			key idea > Body = A recipe that is comprised of specific elements. < key idea

		Sometimes a recipe is just that; it's the end result. However, real good recipes are collections of diffrent recipies
		collected and matched together. Think of a pizza, without much thought, you see cheese, sauce, bread, and heat. Yes,
		that is a recipe, but realistically, there's a recipe for the sauce, the bread and the cheese; well a body is like the 
		sauce, bread, or cheese. A body is a part of the larger whole. In the case of this application/software, 
		a body is a complex ingredient, created from elements, that then gets used for the greater creation. in this 
		case, the greater creation being that it's added to GUI_Layer in the Layer Manager. 

			key idea > Like the ingredients of a pizza, the bodies are stored within their own layer. < key idea

		Finally, once the layer has all of the ingredients (GUI_Body), this is the final dish, ready to be served. Wait a second
		Pizza alone is good, but Pizza together is better! This is where the GUI_Scene comes into play. The Scene is essentially
		the dining table setting. There's pizza, plates, glasses, cutlery, sides, etcetera. This is where the buck stops, and 
		the Scene is what the renderer is handed to draw. that way, nothing is missed, the layer's keep the maranara from slipping
		into the glass and the wine stays off the plate. there is order to this collage and its the scene that keeps this a dinner
		and not a funeral. Afterall, if you order a pizza to a funeral, bad things happen. its the scene that allows for 
		there to be organization within the GUI rendering. 

			key idea > The Scene makes sure that what is being handed to the renderer to draw is related to 
			what needs to be drawn. <key idea


		-Summary-
			* Body has elements. These elements give the body characteristics or presentables. 
			* Layers has Bodies. These Bodues give the layer its shape and specificity on what is being made. 
			* Scene has Layers. The Layers allow for the scene to be composed of multiple specific elements 
			*	creating a larger theme and organization of information or User input. 
			* 
			* So remember. Elements<Bodies<Layers<Scenes.
			* or
			*						Scenes
			*					  L a y e r s
								B  o  d  i  e  s
							 E  l  e  m  e  n  t  s
	
	
	- How to build upon this mess -
		
		Wow you're still here? thats nuts. anyways. lets say you actually want to add to this heap of shit, well heres how!

		Since it is designed in the maner discussed earlier, you know the one that has a specific word, im sure I filled in
		by now.... I havent.... the majority of all modifications made to this system to coherse a modified change or behavior
		is going to be done in the body class. From here you can dynamically create a body that is too your needs; this 
		is just standard behavior for the application. However, should you want to give the body a new element, then you 
		would need to create a new GUI_Element and set it as a type that can be selected in the body class.

			key idea > If you want new behaviors or abilities, you have to create a new element and then add it to the body.H 
			file < key idea

		if you want to not modify, but utalize this system, then the magic is going to be in the GUI_Body_Prefab folder. here 
		you can create all the custom body prefabs you want. that way you dont need to dynamically pass code in and out.
		but instead can call the window itself. 

			key idea > dont code a window each time, do it once and add it to the body prefabs < key idea

		Simmilarly, lets say you have a "save window" you want to pop up. well thats gonna be a window body plus a few button
		body objects, not to mention the logic for that menu. this is where custom layers come in handy. here make your custom
		layer for the window and call it like you would a new body. that way you dont need to repeat so much. 

			key idea > What I said above but with Layers. < key idea

		now take and imagine what I just said with Body's and Layers, then apply that to the scene. 



*/