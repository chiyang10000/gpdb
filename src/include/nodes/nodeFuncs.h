/*-------------------------------------------------------------------------
 *
 * nodeFuncs.h--
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id: nodeFuncs.h,v 1.3 1997/09/07 04:58:37 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEFUNCS_H
#define NODEFUNCS_H

extern bool		single_node(Node * node);
extern bool		var_is_outer(Var * var);
extern bool		var_is_rel(Var * var);
extern Oper    *replace_opid(Oper * oper);
extern bool		non_null(Expr * c);

#endif							/* NODEFUNCS_H */
