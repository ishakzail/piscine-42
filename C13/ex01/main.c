#include "ft_btree.h"
#include <stdio.h>

void ft_printf(void *str)
{
	printf("%s,", str);
}

int main()
{
	t_btree *r;
	t_btree *a;
	t_btree *b;
	t_btree *c;
	t_btree *d;
	t_btree *e;
	t_btree *f;
	t_btree *h;
	t_btree *i;
	t_btree *j;
	t_btree *k;
	t_btree *l;


	r = btree_create_node("r");
	a = btree_create_node("a");
	b = btree_create_node("b");
	c = btree_create_node("c");
	d = btree_create_node("d");
	e = btree_create_node("e");
	f = btree_create_node("f");
	h = btree_create_node("h");
	i = btree_create_node("i");
	j = btree_create_node("j");
	k = btree_create_node("k");
	l = btree_create_node("l");

	r->left = a;
	r->right = b;
	a->left = c;
	a->right = d;
	c->right = h;
	d->left = i;
	d->right = j;
	j->left = l;
	b->left = e;
	b->right = f;
	e->left = k;

	btree_apply_prefix(r, &ft_printf);	
	return (0);
}
