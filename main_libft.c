#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


void test_striter(char *str) {
	printf("%s\n",str);
}

void test_striteri(unsigned int index, char *str) {
	int c;
	printf("%c\n",str[index]);
}

char paye_ton_char(char c) {
	return c;
}

char paye_ton_char_i_var_i(unsigned int index, char c) {
	return (c + index);
}

void read_list(struct s_list *in) {
	int count = 0;
	while(in) {
		printf("content:%s\n",in->content);
		in = in->next;
		count++;
	}
	printf("there is %i elements in the list\n",count);
}

void paye_ton_delete(void *content, size_t len) {
	content = 0;
	len = 0;
	printf("local content %s\n", content);
}

void fait_des_trucs_sur_ma_liste(t_list *elem) {
	elem->content = "bonjour";
}

t_list *fait_des_map_sur_ma_liste(t_list *elem) {
	elem->content = "bonjour";
	return (elem);
}

void paye_ta_liste() {
	// struct s_list *ma_liste;
	// struct s_list l_1;
	// struct s_list l_2;
	// struct s_list l_3;
	// struct s_list *begin;

	// structuration
	// begin = &l_1;
	// // content
	// l_1.next = &l_2;
	// l_2.next = &l_3;
	// // end
	// l_3.next = 0;
  // char *truc = "truc";
  // ma_liste = ft_lstnew(truc,10);

  // t_list el_truc;
  // el_truc.content = "voila";
  // el_truc.content_size = 20;
  // ft_lstadd(&ma_liste,&el_truc);
  // read_list(ma_liste);
  

  // t_list el_nachos;
  // el_nachos.content = "un autre";
  // el_nachos.content_size = 20;
  // ft_lstadd(&ma_liste,&el_nachos);
  // read_list(ma_liste);
// ft_lstiter(ma_liste,fait_des_trucs_sur_ma_liste);
  // ft_lstmap(ma_liste,fait_des_map_sur_ma_liste);
  // read_list(ma_liste);

 //   t_list el_nachos;
 //   el_nachos = ft_lstnew(ft_strdup("nyancat"), 8);
	// el_nachos->next = ft_lstnew(ft_strdup("#TEST#"), 7);
 // //  t_list *l = ft_lstnew(ft_strdup("nyancat"), 8);
	// // l->next = ft_lstnew(ft_strdup("#TEST#"), 7);
	// ft_lstdel(el_nachos, paye_ton_delete);
	// // write(2, "", 1);
	// if (!l)
	// 	printf("BINGO\n");
	// else 
	// 	printf("PERDU\n");

  // ft_lstdel(ma_liste,paye_ton_delete);
  // read_list(ma_liste);


  // ma_liste = ft_lstnew(NULL,10);
	// l_1.content = 10;
	// l_2.content = 20;
	// l_3.content = 40;

}


int main() {
	// BONUS
	// paye_ta_liste();

	// STR CMP
	// printf("or str_cmp 10 elem: %i\n",strcmp("012345678B", "012345678C"));
	// printf("ft str_cmp 10 elem: %i\n",ft_strcmp("012345678B", "012345678C"));

	// 		printf("or str_cmp 9 elem: %i\n",strcmp("A_A_A_A_B", "_A_A_A_A_C")); // bug avec 9 elem
	// printf("ft str_cmp 9 elem: %i\n",ft_strcmp("A_A_A_A_B", "_A_A_A_A_C")); // bug avec 9 elem

	// 	printf("or str_cmp 10 elem: %i\n",strcmp("_A_A_A_A_B", "_A_A_A_A_C")); // bug avec 10 elem
	// printf("ft str_cmp 10 elem: %i\n",ft_strcmp("_A_A_A_A_B", "_A_A_A_A_C")); // bug avec 10 elem

	// 		printf("or str_cmp 11 elem: %i\n",strcmp("A_A_A_A_A_B", "A_A_A_A_A_C")); // bug avec 11 elem
	// printf("ft str_cmp 11 elem: %i\n",ft_strcmp("A_A_A_A_A_B", "A_A_A_A_A_C")); // bug avec 11 elem

	// STR N CMP
	// char *s1 = "aaa";
	// char *s2 = "aac";
	// char s1[3] = "cba";
	// char s2[3] = "abc";
	// char *s1 = "cba";
	// char *s2 = "abc";
	// int max = 2;
	// // 		printf("or str_n_cmp: %i\n",strncmp(s1, s2, max));
	// // printf("ft str_n_cmp: %i\n",ft_strncmp(s1, s2, max));

	// max = 2;
	// 			printf("or str_n_cmp: %d\n",strncmp("zba", "abc", max));
	// printf("ft str_n_cmp: %d\n",ft_strncmp("zba", "abc", max));
 //  printf("\n");
	// 			printf("or str_n_cmp: %i\n",strncmp("aaa", "aac", max));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("aaa", "aac", max));

	// 			printf("or str_n_cmp: %i\n",strncmp("aaaa", "aaaa", 4));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("aaaa", "aaaa", 4));
	// 	printf("or str_n_cmp: %i\n",strncmp("012345678B", "012345678C", 10));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("012345678B", "012345678C", 10));
	// printf("or str_n_cmp: %i\n",strncmp("aaac", "aaa", 4));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("aaac", "aaa", 4));

	// printf("or str_n_cmp: %i\n",strncmp("AAAAAAAAA1", "AAAAAAAAA2", 3));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("AAAAAAAAA1", "AAAAAAAAA2", 3));


	// printf("or str_n_cmp: %i\n",strncmp("FF TRUC", "FF", 4));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("FF TRUC", "FF", 4));

	// 	printf("or str_n_cmp: %i\n",strncmp("aaaa", "aaaa", 4));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("aaaa", "aaaa", 4));

	// printf("or str_n_cmp: %i\n",strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
	// printf("ft str_n_cmp: %i\n",ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8));

	// size_t len = 4;
	// printf("or:%i\n",strncmp(arg[1],arg[2],len));
	// printf("ft:%i\n",ft_strncmp(arg[1],arg[2],len));
  
  // STRCMP
 //  printf("simple\n");
	// printf("or:%i\n",strcmp(arg[1],arg[2]));
	// printf("ft:%i\n",ft_strcmp(arg[1],arg[2]));



	// STR N EQU
	// 	if (argc == 1)
	// 	return (0);
	// 	ft_print_result(ft_strnequ("salut", "salut", 50));
	// 	ft_print_result(ft_strnequ("test", "tests", 6));
	// 	ft_print_result(ft_strnequ("tests", "test", 6));
	// 	ft_print_result(ft_strnequ("test", "tEst", 6));
	// 	ft_print_result(ft_strnequ("", "test", 6));
	// 	ft_print_result(ft_strnequ("test", "", 6));
	// 	ft_print_result(ft_strnequ("", "", 6));
	// 	ft_print_result(ft_strnequ("test", "test", 2));
	// 	ft_print_result(ft_strnequ("tew", "tez", 2));
	// 	ft_print_result(ft_strnequ("", "", 0));
	// 	ft_print_result(ft_strnequ("abcd", "zxyw", 0));

	// STR EQU
	printf("11 ft:%i\n",ft_strnequ("ededeqdf", "", 0));
	printf("14 ft:%i\n",ft_strnequ("", "ededeqdf", 0));
	// printf("3 ft:%i\n",ft_strnequ("test", "tEst", 6));
	// printf("7 ft:%i\n",ft_strnequ("test", "test", 2));
	// printf("12 ft:%i\n",ft_strnequ("test", "test", 4));
	// printf("0 ft:%i\n",ft_strnequ("salut", "salut", 50));
	// printf("1 ft:%i\n",ft_strnequ("test", "tests", 6)); // ko
	// printf("2 ft:%i\n",ft_strnequ("tests", "test", 6)); // ko
	// printf("3 ft:%i\n",ft_strnequ("test", "tEst", 6));
	// printf("4 ft:%i\n",ft_strnequ("", "test", 6)); // ko
	// printf("5 ft:%i\n",ft_strnequ("test", "", 6)); // ko
	// printf("6 ft:%i\n",ft_strnequ("", "", 6));
	// printf("7 ft:%i\n",ft_strnequ("test", "test", 2));
	// printf("8 ft:%i\n",ft_strnequ("tew", "tez", 2));
	// printf("9 ft:%i\n",ft_strnequ("", "", 0));
	// printf("10 ft:%i\n",ft_strnequ("abcd", "zxyw", 0));

	// STR L CAT
	// char	*buff1;
	// ft_memset(buff1, 0, 15);
	// // ft_memset(buff1, 'r', 6);
	// buff1[0] = '\0';
	// buff1[11] = 'a';
	// // strlcat(buff1, "lorem", 15);
	// strlcat(buff1, "lorem ipsum", 15);
	// printf("or: %s\n",buff1);
	
	// char	*buff2;
	// ft_memset(buff2, 0, 15);
	// memset(buff2, 'r', 6);
	// ft_memset(buff2, 'r', 6);
	// buff2[0] = '\0'; // cas 3
	// buff2[11] = 'a'; // cas 1, 2 et 3
	// buff2[10] = 'a'; // cas 5
	// //ft_strlcat(buff2, "lorem", 15);
	// // strlcat(buff2, "lorem", 15); // cas 1
	// // strlcat(buff2, "", 15); // cas 2
	// // ft_strlcat(buff2, "lorem ipsum", 15); // cas 3
	// strlcat(buff2, "lorem ipsum dolor sit amet", 0); // cas 5

	// printf("ft: %s\n",buff2);


	// STR CMP
	// 	else if ((arg = atoi(argv[1])) == 1)
	// 	ft_print_result(ft_strcmp("salut", "salut"));
	// else if (arg == 2)
	// 	ft_print_result(ft_strcmp("test", "testss"));
	// else if (arg == 3)
	// 	ft_print_result(ft_strcmp("testss", "test"));
	// else if (arg == 4)
	// 	ft_print_result(ft_strcmp("test", "tEst"));
	// else if (arg == 5)
	// 	ft_print_result(ft_strcmp("", "test"));
	// else if (arg == 6)
	// 	ft_print_result(ft_strcmp("test", ""));
	// else if (arg == 7)
	// 	ft_print_result(ft_strcmp("test\200", "test\0"));
	// printf("or str_cmp:%i\n",strcmp("testss", "test"));
	// printf("ft str_cmp :%i\n",ft_strcmp("testss", "test"));


	// ITOA
	// int nbr = -2147483648;
	// int nbr = -2147483647 -1;
	// printf("%i\n",nbr);
	// char *i1 = ft_itoa((nbr));
	// printf("%s\n",i1);
	// char *i1 = ft_itoa(-623);
	// char *i2 = ft_itoa(156);
	// char *i3 = ft_itoa(-0);

	// if (ft_strcmp(i1, "-623"))
	// {
	// 	printf("nbr: %s\n",i1);
	// 	printf("ESSAYE ENCORE\n");
	// }
	// if (ft_strcmp(i2, "156"))
	// {
	// 	printf("nbr: %s\n",i2);
	// 	printf("ESSAYE ENCORE\n");
	// }
	// if (ft_strcmp("0", i3))
	// {
	// 	printf("nbr: %s\n",i2);
	// 	printf("ESSAYE ENCORE\n");
	// }
	// else
	// 	printf("BINGO\n");



	
	// STR SPLIT
	// char *string = " 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17";
	// char *string = " a b c d e f g h i j k l m n o p q r s t u v w x y z";
	// char *string = "  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z";
	// char *string = "  aa  bb  cc  dd  ee  ff  gg  hh  ii  jj  kk  ll  mm  nn  oo  pp  qq  rr  ss  tt  uu  vv  ww  xx  yy  zz";
	// char *string = "  aaa bbb ccc"; // bug
	// char *string = " aaa  zzzz  mmmm truc jh"; // bug
	// char *string = " aa  bb  cc dd  ee  ff ghgn hhnghn ghnghn g fg f fdb fhrt ggnrt tthr f gf ftht trhtttg"; // bug
	// char *string = "  aajbdv dfljv dflknv fdlknv  lknndf   df fknnv klkfnnvvbvv f;nnvf  ;klkrelkn flkknbb ;jr;kk ;j;lmbv fe;nblkb rr;kknbbr fre;bjr rer;lknkfb  ;rnvkreknlkkenbvrlkknnfr rkknnrlkllk rrlkenbbn  "; // bug
	// char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	char *string = "    ";
	char **result = ft_strsplit(string, ' ');
	// char **result = ft_strsplit(string, ' ');
	// printf("%s,%s,%s,%s,%s,%s",result[0],result[1],result[2],result[3],result[4],result[5]);
		//
	int i = 0;
	while(result[i])
	{
		printf("%s\n",result[i]);
		i++;
	}
	





	// FT PUT with fd
	// ft_putnbr_fd(a,1);
  
  // FT PUT STR + END L
  // ft_putnbr(a);
  // ft_putendl(arg[2]);
  // ft_putstr(arg[2]);

  // FT PUT END L

	// MEM CMP
	// printf("%s\n",arg[1]);
	// printf("%s\n",arg[2]);
	// 	printf("ft comp %i\n",ft_memcmp("bonjour","bonjous",7));
	// printf("or comp %i\n",memcmp("bonjour","bonjous",7));
	// printf("ft comp %i\n",ft_memcmp("\xff\xaa\xde\x12WXYZ","\xff\xaa\xde\x12MACOSX",7));
	// printf("or comp %i\n",memcmp("\xff\xaa\xde\x12WXYZ","\xff\xaa\xde\x12MACOSX",7));
	//printf("comp %i\n",ft_memcmp(arg[1],arg[2],5));
	//printf("comp %i\n",ft_memcmp(dst,src,5));


	// STR TRIM
	// char *s1 = "    Hello \t  Please\n Trim me !";
	// char *s2 = "Hello \t  Please\n Trim me !";
	// printf("%s\n",ft_strtrim(s1));
	// int r_size = strlen(s2);
	// int size;
	// printf("malloc size 2:%i\n",r_size);


	// STR N CMP
	// char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";
	// char *s2 = "there is no stars in the sky";
	// size_t size = strlen(s1);
	// int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
	// int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));

	// printf("or: %i\n",i1);
	// printf("ft: %i\n",i2);



	// STR STR
	// char *s1 = "MZIRIBMZIRIBMZP";
	// char *s2 = "MZIRIBMZP";
	// char *d1 = strstr(s1, s2);
	// char *d2 = ft_strstr(s1, s2);
	// printf("or: %s len %lu\n",d1, ft_strlen(d1));
	// printf("ft: %s len %lu\n",d2, ft_strlen(d2));


	// STR R CHR
	// char *src = "quoiiouq";
	// char *d1 = strrchr(src, 'i');
	// char *d2 = ft_strrchr(src, 'i');
	// printf("or: %s len %lu\n",d1, ft_strlen(d1));
	// printf("ft: %s len %lu\n",d2, ft_strlen(d2));
	// if(d1 == d2)
	// 	printf("BINGO\n");
	// else
	// 	printf("ESSAYE ENCORE\n");


  // STR CHR
	// char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	// char *d1 = strchr(src, ' ');
	// char *d2 = ft_strchr(src, ' ');
	// printf("or: %s len %lu\n",d1, ft_strlen(d1));
	// printf("ft: %s len %lu\n",d2, ft_strlen(d2));
	// if(d1 == d2)
	// 	printf("BINGO\n");
	// else
	// 	printf("ESSAYE ENCORE\n");









	// STR DUP
	// src_ptr = ft_strdup(NULL);
	// printf("%s\n",src_ptr);


	// STR CPY
	// src_ptr = strcpy(src_ptr, arg[2]);
	// printf("%s\n",src_ptr);

	// STR JOIN
	// printf("%s\n",ft_strjoin(dst,arg[3]));

	// STR SUB
	// printf("%s\n",ft_strsub(arg[2],3,21));

	// STR MAP I
	//printf("%s\n",ft_strmapi(arg[2], paye_ton_char_i_var_i));

	// STR MAP
	// printf("%s\n",ft_strmap(arg[2], paye_ton_char));

	// STR ITER I
	// ft_striteri(src_ptr,test_striteri);

	// STR ITER
	// ft_striter(src_ptr,test_striter);

	// STR CLEAR > ecrasement de memoire
	// printf("%s\n",src);
	// ft_strclr(src);
	// printf("%s\n",src);

	// STR DEL > MALLOC() ans FREE()
	// src_ptr = ft_strdup("pointeur");
	// printf("%s\n",src_ptr);
	// ft_strdel(&src_ptr);
	// ft_memdel((void*)&src_ptr);
	// printf("%s\n",src_ptr);

	// STR NEW
	// src_ptr = ft_strnew(10);
	// printf("%s\n",src_ptr);
	// printf("%lu\n",ft_strlen(src_ptr));

	// MEM DEL
	// src_ptr = (char*)malloc(sizeof(char)*10); // ne marche pas car on ecrit ailleurs
	// src_ptr = "pointeur"; // ne marche pas car on ecrit ailleurs

	// src_ptr = ft_strdup("pointeur"); // fonction car cela renvoit une adresse mallocee
	// printf("%s\n",src_ptr);
	// ft_memdel((void*)&src_ptr);
	// printf("%s\n",src_ptr);

	// MEM ALLOC
	// ft_memalloc(20);

	// TO UPPER
	// printf("ft:%i\n",ft_tolower(c));
	// printf("or:%i\n",tolower(c));

	// IS ALPHA
	// printf("ft:%i\n",ft_isascii(c));
	// printf("or:%i\n",isascii(c));

	// IS ALPHA
	// printf("ft:%i\n",ft_isalpha(c));
	// printf("or:%i\n",isalpha(c));

	// MEM CHR
	// printf("ft:%s\n",ft_memchr(src, c, 10));
	// printf("or:%s\n",memchr(src, c, 10));

	// MEM MOVE
	// char str[100] = "This is an example";
	// ft_memmove(str + 7, str, 10);
	// printf("ft:%s\n",str);
	// memmove(str + 7, str, 10);
	// printf("or:%s\n",str);

	// MEM SET
	// ft_memset(src, c, 2);
	// printf("or:%s\n",src);

	// MEM C CPY
	// memccpy(arg[1] +2, arg[1], c, 0);
	// memccpy(src +2, src, c, 0);
	// memccpy(dst, src, c, 2);
	// printf("or:%s\n",arg[1]);
	
	// ft_memccpy(arg[1], arg[1], c, 0);
	// ft_memccpy(src +2, src, c, 0);
	// ft_memccpy(dst, src, c, 5);
	// 	printf("ft:%s\n",arg[1]);

	// MEM CPY
	// memcpy(src +2, src, 5);
	// memcpy(dst, src, 5);
	// printf("or:%s\n",dst);
	
	// ft_memcpy(src +2, src, 5);
	// ft_memcpy(dst, src, 5);
	// printf("ft:%s\n",src);

  // BZERO
	// 	printf("or:%s\n",arg[target_b]);
	// bzero(arg[target_b],len);
	// printf("or: %s\n",arg[target_b]);
	
	// printf("ft:%s\n",arg[target_a]);
	// ft_bzero(arg[target_a],len);
	// printf("ft: %s\n",arg[target_a]);

	
	return 0;
}
