#include "ft_btree.h"
#include <stdio.h>

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
	t_btree *w;

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
	w = btree_create_node("w");

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
	l->left = w;

	printf("%d\n", btree_level_count(r));
	return (0);
}
