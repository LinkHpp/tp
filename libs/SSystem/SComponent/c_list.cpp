//
// Generated By: dol2asm
// Translation Unit: c_list
//

#include "SSystem/SComponent/c_list.h"
#include "dol2asm.h"
#include "dolphin/types.h"

/* 80265E64-80265E78 0014+00 s=1 e=0 z=0  None .text      cLs_Init__FP15node_list_class */
void cLs_Init(node_list_class* pList) {
    pList->mpHead = NULL;
    pList->mpTail = NULL;
    pList->mSize = 0;
}

/* 80265E78-80265EFC 0084+00 s=1 e=4 z=0  None .text      cLs_SingleCut__FP10node_class */
int cLs_SingleCut(node_class* pNode) {
    node_list_class* pList = (node_list_class*)pNode->mpData;
    if (pNode == pList->mpHead)
        pList->mpHead = pNode->mpNextNode;
    if (pNode == pList->mpTail)
        pList->mpTail = pNode->mpPrevNode;
    cNd_SingleCut(pNode);
    cNd_ClearObject(pNode);
    int newSize = pList->mSize - 1;
    pList->mSize = newSize;
    return newSize > 0;
}

/* 80265EFC-80265F70 0074+00 s=1 e=4 z=0  None .text
 * cLs_Addition__FP15node_list_classP10node_class               */
int cLs_Addition(node_list_class* pList, node_class* pNode) {
    if (pList->mpTail == NULL) {
        pList->mpHead = pNode;
    } else {
        cNd_Addition(pList->mpTail, pNode);
    }

    pList->mpTail = cNd_Last(pNode);
    cNd_SetObject(pNode, pList);
    pList->mSize = cNd_LengthOf(pList->mpHead);
    return pList->mSize;
}

/* 80265F70-80265FF8 0088+00 s=0 e=1 z=0  None .text cLs_Insert__FP15node_list_classiP10node_class
 */
int cLs_Insert(node_list_class* pList, int idx, node_class* pNode) {
    node_class* pExisting = cNd_Order(pList->mpHead, idx);
    if (pExisting == NULL) {
        return cLs_Addition(pList, pNode);
    } else {
        cNd_SetObject(pNode, pList);
        cNd_Insert(pExisting, pNode);
        pList->mpHead = cNd_First(pNode);
        pList->mSize = cNd_LengthOf(pList->mpHead);
        return pList->mSize;
    }
}

/* 80265FF8-80266040 0048+00 s=0 e=1 z=0  None .text      cLs_GetFirst__FP15node_list_class */
node_class* cLs_GetFirst(node_list_class* pList) {
    if (pList->mSize != 0) {
        node_class* pHead = pList->mpHead;
        cLs_SingleCut(pHead);
        return pHead;
    } else {
        return NULL;
    }
}

/* 80266040-80266060 0020+00 s=0 e=4 z=0  None .text      cLs_Create__FP15node_list_class */
void cLs_Create(node_list_class* pList) {
    cLs_Init(pList);
}
