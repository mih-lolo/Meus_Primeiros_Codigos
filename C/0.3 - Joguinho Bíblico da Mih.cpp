#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, idade_correta, irmaos, irmaos_correto, anos, anos_correto, satisfacao, resposta1, resposta2, num, num2, num3, bis, bis2;
	char nome[20];
	
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("Ok, %s vamos ver como esta a qualidade de seu estudo pessoal... (escreva tudo em numeral)\n", nome);
	printf("\nJo teve, no total, quantos filhos e quantas filhas?\n");
	scanf("%d", &idade);
	
	idade_correta = 20;
	
	if(idade == idade_correta){
		
		printf("Resposta Corretaaa!\n");
		
	} else {
		
		printf("Erradooo! Jo teve no total 20 filhos (7 filhos e 3 filhas antes das provacoes e depois mais 7 filhos e 3 filhas).\n"); 
		printf("Mas nao se desespere, ainda temos outras perguntas pela frente...\n");
		
	}
	
	printf("\nCom quantos anos Josias se tornou rei?\n");
	scanf("%d", &irmaos);
	
	irmaos_correto = 8;
	
	if(irmaos == irmaos_correto){
		
		printf("Isso aiii! Ele se tornou rei com apenas 8 anos, mas ainda falta a ultima pergunta.\n");
		
	} else {
		
		printf("Poxaaa, a resposta esta errada. Josias se tornou rei com 8 aninhos! Voce tem apenas mais uma chance...\n");
		
	}
	
	printf ("\nDemorou quantos dias para Jeova secar as aguas do diluvio na epoca de Noe?\n");
	scanf("%d", &anos);
	
	anos_correto = 120;
	
	if(anos == anos_correto){
		
		printf("Acertou na mosca! Meus parabens!!\n");
		
	} else {
		
		printf("Peeem! Resposta incorreta. Jeova demorou 120 dias para secar as aguas.\n");
		
	}
	
	printf("\n\nE ai, %s? Vamos fazer a contagem dos pontos?\n", nome);
	printf(".\n");
	printf(".\n");
	printf(".\n");
	printf(".\n");
	
	if(idade == idade_correta && irmaos == irmaos_correto && anos == anos_correto){
		
		printf("\nEbaaaa! Voce tirou 3/3! Estou vendo que voce realmente conhece a Biblia. Mas nao esqueca: todo dia nos aprendemos algo\nnovo. Portanto, continue sempre se aperfeicoando cada vez mais.\n");
	}
	
	if(idade == idade_correta && irmaos == irmaos_correto && anos != anos_correto){
		
		printf("\nFoi quase laaa. Voce acertou 2/3, mas mesmo assim voce foi bem. Meus parabens!\n");
		
	}
	
	if(irmaos == irmaos_correto && anos == anos_correto && idade != idade_correta){
		
		printf("\nFoi quase laaa. Voce acertou 2/3, mas mesmo assim voce foi bem. Meus parabens!\n");
		
	}
	
	if(idade == idade_correta && anos == anos_correto && irmaos != irmaos_correto){
		
		printf("\nFoi quase laaa. Voce acertou 2/3, mas mesmo assim voce foi bem. Meus parabens!\n");
		
	}
	
	if(idade == idade_correta && anos != anos_correto && irmaos != irmaos_correto){
		
		printf("\nPuxa, sua pontuacao foi 1/3. Isso mostra que voce tem que estudar um pouquinho mais a Biblia,\nbom, e nao desanime fico feliz de saber que voce pelo menos acertou uma pergunta!\n");
		
	} 
	
	if(idade != idade_correta && anos == anos_correto && irmaos != irmaos_correto){
		
		printf("\nPuxa, sua pontuacao foi 1/3. Isso mostra que voce tem que estudar um pouquinho mais a Biblia,\nbom, e nao desanime fico feliz de saber que voce pelo menos acertou uma pergunta!\n");
	}
	
	if(idade != idade_correta && anos != anos_correto && irmaos == irmaos_correto){
		
		printf("Puxa, sua pontuacao foi 1/3. Isso mostra que voce tem que estudar um pouquinho mais a Biblia,\nbom, e nao desanime fico feliz de saber que voce pelo menos acertou uma pergunta!\n");
		
	}
	
	if(idade != idade_correta && anos != anos_correto && irmaos != irmaos_correto){
		
		printf("\nEita, sua pontuacao foi 0/3. Uma ideia que voce poderia fazer para mudar esse quadro, e dar um up no seu estudo pessoal\n");
		
	}
	
	printf("Mas ja acaboooou? Nao. Eu trouxe um bonus especial para voce:\n");
    printf("Digite o numero do personagem que voce mais gosta:\n\n");
	printf("1 - Ana\n2 - Jose\n3 - Raabe\n4 - Jonas\n5- Ester\n\n");
	scanf("\n%d", &num);
	
	switch(num){
		
		case 1: printf("\nAna ficou bem marcada pelas suas belissimas oracoes. Foi por meio de uma delas, inclusive,\n");
		        printf("que ela ganhou um filho, seu nome era Samuel. Pelo visto assim voce ela, voce aprecia muito\n");
		        printf("uma bela oracao.\n");
		        break;
		        
		case 2: printf("\nJose foi o primeiro filho de Jaco com Raquel. Seus meio irmaos invejosos o venderam para ser escravo\n");
		        printf("no Egito, onde ele passou cerca de 13 anos como escravo e prisioneiro. Em vez de se vingar, Jose perdoou os\n");
				printf("seus irmaos arrependidos. Voce agiria da mesma maneira se estivesse no lugar dele? Apenas reflita.\n");
				break;
				
		case 3: printf("\nRaabe recebeu dois espioes israelitas em sua casa em Jerico. Ela mostrou que tinha fe em Jeova por esconde-los\n");
		        printf("por pedir a eles que protegessem sua familia e por seguir todas as instrucoes que os espioes deram.\n");
		        printf("Depois da queda da muralha de Jerico, Raabe e sua familia foram morar com os israelitas. Voce ja pensou\n");
		        printf("em cultivar a sua fe para que ela fique tao forte como a de Raabe? Pense um pouco a respeito.\n");
		        break;
		        
		case 4: printf("\nJonas foi um profeta de Jeova que serviu durante o reinado do Rei Jeroboao II (dessa nem eu sabia). Jeova ensinou\n");
		        printf("Jonas a nao se concentrar em si mesmo, mas se preocupar com as necessidades dos outros. Os episodios na vida de\n");
		        printf("Jonas nos ensinam que Jeova e extremamente paciente, misericordioso e bondoso com humanos pecadores. E voce? Sente mais\n");
		        printf("pena de um cabaceiro do que a vida de 120mil pessoas, ou o contrario? Pensa bem, talvez a resposta revele ate quais sao\n");
		        printf("seus verdadeiros motivos de participar da obra de pregacao.\n");
		        break;
		
		case 5: printf("\nEster foi uma orfa que se tornou rainha ao se casar com o rei persa Assuero. Ester arriscou a vida ao informar o rei\n");
		        printf("sobre uma conspiracao para eliminar os judeus. Sua coragem, seu jeito respeitoso e sua submissao foram mais importantes\n");
				printf("que sua beleza fisica. Ta ai um otimo exempo para se imitar, nao e mesmo?\n");
				break;
				
		default: printf("\nResposta Invalida.\n");
		        break;
	}
	
	printf("\n\nGostaria de conferir mais exemplos de outros personagens biblicos? (Digite 1 para sim e 2 para nao)\n");
	scanf("%d", &bis);
	
	
	printf("\nFim do jogo!! Foi muito bom te ter por aqui xD. Voce gostou da brincadeira? (digite 1 para sim e 2 para nao)\n");
	scanf("%d", &satisfacao);
	
	resposta1 = 1;
	resposta2 = 2;
	
	if(satisfacao == resposta1){
		
		printf("Que bom que gostou! Esse programa foi feito pensando especialmente em voce e sua familia. A Mih manda lembrancas!!\n");
		
	}
	
	if(satisfacao == resposta2){
		
		printf("Ah, entao se nao gostou tenta fazer melhor... Boco! - Ass Mih\n");
	}
	
	return 0;
	
	}
	
	
	
	
	
	
	

