#include "ft_btree.h"
#include <stdio.h>

void	putlevel(void *item, int current_level, int is_first)
{
	char *s = (char*)item;
	printf("Item: %s, level: %d, premier: %d\n", s, current_level, is_first);
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
	t_btree *j;
	t_btree *k;
	t_btree *l;
	t_btree *m;
	t_btree *n;

	r = btree_create_node("r");
	a = btree_create_node("a");
	b = btree_create_node("b");
	c = btree_create_node("c");
	d = btree_create_node("d");
	e = btree_create_node("e");
	f = btree_create_node("f");
	j = btree_create_node("j");
	k = btree_create_node("k");
	l = btree_create_node("l");
	m = btree_create_node("m");
	n = btree_create_node("n");

	r->left = a;
	r->right = b;
	a->left = c;
	a->right = d;
	c->right = j;
	d->left = k;
	b->left = e;
	b->right = f;
	e->right = l;
	f->right = m;
	k->left = n;

	btree_apply_by_level(r, &putlevel);
	return (0);
}
