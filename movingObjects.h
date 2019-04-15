void fun()
{
	
	
	
	
	
	//chocolate
	chocolateY=chocolateY-3-speed;
	if(
		(chocolateX>=girlCoOrdinateX&&chocolateX<=girlCoOrdinateX+100
		&& chocolateY>=girlCoOrdinateY&&chocolateY<=girlCoOrdinateY+100)
		||
		(chocolateX+120>=girlCoOrdinateX&&chocolateX+120<=girlCoOrdinateX+100
		&& chocolateY>=girlCoOrdinateY&&chocolateY<=girlCoOrdinateY+100)
		||
		(chocolateX+60>=girlCoOrdinateX&&chocolateX+60<=girlCoOrdinateX+100
		&& chocolateY>=girlCoOrdinateY&&chocolateY<=girlCoOrdinateY+100)
		)
	{
		
		chocolateX=rand()%1240;
		chocolateY= 1170+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
		
	
	}
	if(chocolateY<-100)
	{
		chocolateX=rand()%1240;
		chocolateY= 1170+(rand()%150);
		//printf("***%d***\n",chocolateY);
	}


	//coke
	cokeY=cokeY-3-speed;
	if(
		(cokeX>=girlCoOrdinateX&&cokeX<=girlCoOrdinateX+100
		&& cokeY>=girlCoOrdinateY&&cokeY<=girlCoOrdinateY+100)
		||
		(cokeX+90>=girlCoOrdinateX&&cokeX+90<=girlCoOrdinateX+100
		&& cokeY>=girlCoOrdinateY&&cokeY<=girlCoOrdinateY+100)
		||
		(cokeX+45>=girlCoOrdinateX&&cokeX+45<=girlCoOrdinateX+100
		&& cokeY>=girlCoOrdinateY&&cokeY<=girlCoOrdinateY+100)
		)
	{
		
		cokeX=rand()%1240;
		cokeY= 1170+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
	
	}
	if(cokeY<-100)
	{
		cokeX=rand()%1240;
		cokeY=1170+(rand()%150);
	}

	//doughnut1
	doughnut1Y=doughnut1Y-4-speed;
	if(
		(doughnut1X>=girlCoOrdinateX&&doughnut1X<=girlCoOrdinateX+100
		&& doughnut1Y>=girlCoOrdinateY&&doughnut1Y<=girlCoOrdinateY+100)
		||
		(doughnut1X+120>=girlCoOrdinateX&&doughnut1X+120<=girlCoOrdinateX+100
		&& doughnut1Y>=girlCoOrdinateY&&doughnut1Y<=girlCoOrdinateY+100)
		||
		(doughnut1X+60>=girlCoOrdinateX&&doughnut1X+60<=girlCoOrdinateX+100
		&& doughnut1Y>=girlCoOrdinateY&&doughnut1Y<=girlCoOrdinateY+100)
		)
	{
		
		doughnut1X=rand()%1240;
		doughnut1Y= 1020+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
	
	}
	if(doughnut1Y<-100)
	{
		doughnut1X=rand()%1240;
		doughnut1Y=1020+(rand()%150);
	}

	//doughnut2
	doughnut2Y=doughnut2Y-4-speed;
	if(
		(doughnut2X>=girlCoOrdinateX&&doughnut2X<=girlCoOrdinateX+100
		&& doughnut2Y>=girlCoOrdinateY&&doughnut2Y<=girlCoOrdinateY+100)
		||
		(doughnut2X+105>=girlCoOrdinateX&&doughnut2X+105<=girlCoOrdinateX+100
		&& doughnut2Y>=girlCoOrdinateY&&doughnut2Y<=girlCoOrdinateY+100)
		||
		(doughnut2X+50>=girlCoOrdinateX&&doughnut2X+50<=girlCoOrdinateX+100
		&& doughnut2Y>=girlCoOrdinateY&&doughnut2Y<=girlCoOrdinateY+100)
		)
	{
		
		doughnut2X=rand()%1240;
		doughnut2Y= 1020+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
	
	}
	if(doughnut2Y<-100)
	{
		doughnut2X=rand()%1240;
		doughnut2Y=1020+(rand()%150);
	}

	//hotdog
	hotdogY=hotdogY-5-speed;
	if(
		(hotdogX>=girlCoOrdinateX&&hotdogX<=girlCoOrdinateX+100
		&& hotdogY>=girlCoOrdinateY&&hotdogY<=girlCoOrdinateY+100)
		||
		(hotdogX+150>=girlCoOrdinateX&&hotdogX+150<=girlCoOrdinateX+100
		&& hotdogY>=girlCoOrdinateY&&hotdogY<=girlCoOrdinateY+100)
		||
		(hotdogX+75>=girlCoOrdinateX&&hotdogX+75<=girlCoOrdinateX+100
		&& hotdogY>=girlCoOrdinateY&&hotdogY<=girlCoOrdinateY+100)
		)
	{
		
		hotdogX=rand()%1240;
		hotdogY= 870+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
	
	}
	if(hotdogY<-100)
	{
		hotdogX=rand()%1240;
		hotdogY=870+(rand()%150);
	}

	//fries
	friesY=friesY-5-speed;
	if(
		(friesX>=girlCoOrdinateX&&friesX<=girlCoOrdinateX+100
		&& friesY>=girlCoOrdinateY&&friesY<=girlCoOrdinateY+100)
		||
		(friesX+100>=girlCoOrdinateX&&friesX+100<=girlCoOrdinateX+100
		&& friesY>=girlCoOrdinateY&&friesY<=girlCoOrdinateY+100)
		||
		(friesX+50>=girlCoOrdinateX&&friesX+50<=girlCoOrdinateX+100
		&& friesY>=girlCoOrdinateY&&friesY<=girlCoOrdinateY+100)
		)
	{
		
		friesX=rand()%1240;
		friesY= 870+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
	
	}
	if(friesY<-100)
	{
		friesX=rand()%1240;
		friesY=870+(rand()%150);
	}

	//burger
	burgerY=burgerY-6-speed;
	if(
		(burgerX>=girlCoOrdinateX&&burgerX<=girlCoOrdinateX+100
		&& burgerY>=girlCoOrdinateY&&burgerY<=girlCoOrdinateY+100)
		||
		(burgerX+90>=girlCoOrdinateX&&burgerX+90<=girlCoOrdinateX+100
		&& burgerY>=girlCoOrdinateY&&burgerY<=girlCoOrdinateY+100)
		||
		(burgerX+45>=girlCoOrdinateX&&burgerX+45<=girlCoOrdinateX+100
		&& burgerY>=girlCoOrdinateY&&burgerY<=girlCoOrdinateY+100)
		)
	{
		
		burgerX=rand()%1240;
		burgerY= 720+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
	
	}
	if(burgerY<-100)
	{
		burgerX=rand()%1240;
		burgerY=720+(rand()%150);
	}

	//pizza
	pizzaY=pizzaY-6-speed;
	if(
		(pizzaX>=girlCoOrdinateX&&pizzaX<=girlCoOrdinateX+100
		&& pizzaY>=girlCoOrdinateY&&pizzaY<=girlCoOrdinateY+100)
		||
		(pizzaX+90>=girlCoOrdinateX&&pizzaX+90<=girlCoOrdinateX+100
		&& pizzaY>=girlCoOrdinateY&&pizzaY<=girlCoOrdinateY+100)
		||
		(pizzaX+45>=girlCoOrdinateX&&pizzaX+45<=girlCoOrdinateX+100
		&& pizzaY>=girlCoOrdinateY&&pizzaY<=girlCoOrdinateY+100)
		)
	{
		
		pizzaX=rand()%1240;
		pizzaY= 720+(rand()%150);

		life--;
		printf("+++%d+++\n",life);
	
	}
	if(pizzaY<-100)
	{
		pizzaX=rand()%1240;
		pizzaY=720+(rand()%150);
	}



	//healthy foods


	//milk
	milkY=milkY-5-speed;
	if(
		(milkX>=girlCoOrdinateX&&milkX<=girlCoOrdinateX+100
		&& milkY>=girlCoOrdinateY&&milkY<=girlCoOrdinateY+100)
		||
		(milkX+100>=girlCoOrdinateX&&milkX+100<=girlCoOrdinateX+100
		&& milkY>=girlCoOrdinateY&&milkY<=girlCoOrdinateY+100)
		||
		(milkX+50>=girlCoOrdinateX&&milkX+50<=girlCoOrdinateX+100
		&& milkY>=girlCoOrdinateY&&milkY<=girlCoOrdinateY+100)
		)
	{
		
		milkX=rand()%1240;
		milkY= 1170+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(milkY<-100)
	{
		milkX=rand()%1240;
		milkY= 1170+(rand()%150);
		//printf("***%d***\n",chocolateY);
	}

	//strawberry
	strawberryY=strawberryY-5-speed;
	if(
		(strawberryX>=girlCoOrdinateX&&strawberryX<=girlCoOrdinateX+100
		&& strawberryY>=girlCoOrdinateY&&strawberryY<=girlCoOrdinateY+100)
		||
		(strawberryX+100>=girlCoOrdinateX&&strawberryX+100<=girlCoOrdinateX+100
		&& strawberryY>=girlCoOrdinateY&&strawberryY<=girlCoOrdinateY+100)
		||
		(strawberryX+50>=girlCoOrdinateX&&strawberryX+50<=girlCoOrdinateX+100
		&& strawberryY>=girlCoOrdinateY&&strawberryY<=girlCoOrdinateY+100)
		)
	{
		
		strawberryX=rand()%1240;
		strawberryY=1170+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(strawberryY<-100)
	{
		strawberryX=rand()%1240;
		strawberryY=1170+(rand()%150);
	}

	//grape1
	grape1Y=grape1Y-6-speed;
	if(
		(grape1X>=girlCoOrdinateX&&grape1X<=girlCoOrdinateX+100
		&& grape1Y>=girlCoOrdinateY&&grape1Y<=girlCoOrdinateY+100)
		||
		(grape1X+100>=girlCoOrdinateX&&grape1X+100<=girlCoOrdinateX+100
		&& grape1Y>=girlCoOrdinateY&&grape1Y<=girlCoOrdinateY+100)
		||
		(grape1X+50>=girlCoOrdinateX&&grape1X+50<=girlCoOrdinateX+100
		&& grape1Y>=girlCoOrdinateY&&grape1Y<=girlCoOrdinateY+100)
		)
	{
		
		grape1X=rand()%1240;
		grape1Y= 1020+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(grape1Y<-100)
	{
		grape1X=rand()%1240;
		grape1Y=1020+(rand()%150);
	}

	//grape2
	grape2Y=grape2Y-6-speed;
	if(
		(grape2X>=girlCoOrdinateX&&grape2X<=girlCoOrdinateX+100
		&& grape2Y>=girlCoOrdinateY&&grape2Y<=girlCoOrdinateY+100)
		||
		(grape2X+100>=girlCoOrdinateX&&grape2X+100<=girlCoOrdinateX+100
		&& grape2Y>=girlCoOrdinateY&&grape2Y<=girlCoOrdinateY+100)
		||
		(grape2X+50>=girlCoOrdinateX&&grape2X+50<=girlCoOrdinateX+100
		&& grape2Y>=girlCoOrdinateY&&grape2Y<=girlCoOrdinateY+100)
		)
	{
		
		grape2X=rand()%1240;
		grape2Y= 1020+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(grape2Y<-100)
	{
		grape2X=rand()%1240;
		grape2Y=1020+(rand()%150);
	}

	//watermelon
	watermelonY=watermelonY-7-speed;
	if(
		(watermelonX>=girlCoOrdinateX&&watermelonX<=girlCoOrdinateX+100
		&& watermelonY>=girlCoOrdinateY&&watermelonY<=girlCoOrdinateY+100)
		||
		(watermelonX+120>=girlCoOrdinateX&&watermelonX+120<=girlCoOrdinateX+100
		&& watermelonY>=girlCoOrdinateY&&watermelonY<=girlCoOrdinateY+100)
		||
		(watermelonX+60>=girlCoOrdinateX&&watermelonX+60<=girlCoOrdinateX+100
		&& watermelonY>=girlCoOrdinateY&&watermelonY<=girlCoOrdinateY+100)
		)
	{
		
		watermelonX=rand()%1240;
		watermelonY= 870+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(watermelonY<-100)
	{
		watermelonX=rand()%1240;
		watermelonY=870+(rand()%150);
	}

	//orange
	orangeY=orangeY-7-speed;
	if(
		(orangeX>=girlCoOrdinateX&&orangeX<=girlCoOrdinateX+100
		&& orangeY>=girlCoOrdinateY&&orangeY<=girlCoOrdinateY+100)
		||
		(orangeX+100>=girlCoOrdinateX&&orangeX+100<=girlCoOrdinateX+100
		&& orangeY>=girlCoOrdinateY&&orangeY<=girlCoOrdinateY+100)
		||
		(orangeX+50>=girlCoOrdinateX&&orangeX+50<=girlCoOrdinateX+100
		&& orangeY>=girlCoOrdinateY&&orangeY<=girlCoOrdinateY+100)
		)
	{
		
		orangeX=rand()%1240;
		orangeY= 870+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(orangeY<-100)
	{
		orangeX=rand()%1240;
		orangeY=870+(rand()%150);
	}

	//apple
	appleY=appleY-8-speed;
	if(
		(appleX>=girlCoOrdinateX&&appleX<=girlCoOrdinateX+100
		&& appleY>=girlCoOrdinateY&&appleY<=girlCoOrdinateY+100)
		||
		(appleX+100>=girlCoOrdinateX&&appleX+100<=girlCoOrdinateX+100
		&& appleY>=girlCoOrdinateY&&appleY<=girlCoOrdinateY+100)
		||
		(appleX+50>=girlCoOrdinateX&&appleX+50<=girlCoOrdinateX+100
		&& appleY>=girlCoOrdinateY&&appleY<=girlCoOrdinateY+100)
		)
	{
		
		appleX=rand()%1240;
		appleY= 720+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(appleY<-100)
	{
		appleX=rand()%1240;
		appleY=720+(rand()%150);
	}
	
	//carrot
	carrotY=carrotY-8-speed;
	if(
		(carrotX>=girlCoOrdinateX&&carrotX<=girlCoOrdinateX+100
		&& carrotY>=girlCoOrdinateY&&carrotY<=girlCoOrdinateY+100)
		||
		(carrotX+100>=girlCoOrdinateX&&carrotX+100<=girlCoOrdinateX+100
		&& carrotY>=girlCoOrdinateY&&carrotY<=girlCoOrdinateY+100)
		||
		(carrotX+50>=girlCoOrdinateX&&carrotX+50<=girlCoOrdinateX+100
		&& carrotY>=girlCoOrdinateY&&carrotY<=girlCoOrdinateY+100)
		)
	{
		
		carrotX=rand()%1240;
		carrotY= 720+(rand()%150);

		score++;
		printf("***%d***\n",score);
	
	}
	if(carrotY<-100)
	{
		carrotX=rand()%1240;
		carrotY=720+(rand()%150);
	}



	//basket

	if(score>=20)
	{
	
		basketY=basketY-8-speed;
		if(
			(basketX>=girlCoOrdinateX&&basketX<=girlCoOrdinateX+100
			&& basketY>=girlCoOrdinateY&&basketY<=girlCoOrdinateY+100&&flagForLevelUp)
			||
			(basketX+100>=girlCoOrdinateX&&basketX+100<=girlCoOrdinateX+100
			&& basketY>=girlCoOrdinateY&&basketY<=girlCoOrdinateY+100&&flagForLevelUp)
			||
			(basketX+50>=girlCoOrdinateX&&basketX+50<=girlCoOrdinateX+100
			&& basketY>=girlCoOrdinateY&&basketY<=girlCoOrdinateY+100&&flagForLevelUp)
			)
		{
		
			basketX=4000;
			basketY= 5000;

			chocolateY=2000+ 1170+(rand()%150);
			cokeY=2000+ 1170+(rand()%150);
			doughnut1Y=2000+ 1020+(rand()%150);
			doughnut2Y=2000+ 1020+(rand()%150);
			hotdogY=2000+ 870+(rand()%150);
			friesY=2000+ 870+(rand()%150);
			burgerY=2000+ 720+(rand()%150);
			pizzaY=2000+ 720+(rand()%150);


			milkY=2000+ 1170+(rand()%150);
			strawberryY=2000+1170+(rand()%150);
			grape1Y=2000+ 1020+(rand()%150);
			grape2Y=2000+1020+(rand()%150);
			watermelonY= 2000+870+(rand()%150);
			orangeY=2000+ 870+(rand()%150);
			appleY= 2000+720+(rand()%150);
			carrotY=2000+720+(rand()%150);

		
			speed=3;


			flagForLevelUp=0;

			score+=5;
			printf("***%d***\n",score);

			flag2=0;
			flag3=1;

	
		}
		if(basketY<-100&&flag2)
		{
			basketX=rand()%1240;
			basketY=720+(rand()%150);
		}
	
	
	}
	

	



}