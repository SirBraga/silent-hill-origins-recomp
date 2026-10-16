#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002076F8
// Address: 0x2076f8 - 0x207858
void sub_002076F8_0x2076f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002076F8_0x2076f8");
#endif

    switch (ctx->pc) {
        case 0x2076f8u: goto label_2076f8;
        case 0x2076fcu: goto label_2076fc;
        case 0x207700u: goto label_207700;
        case 0x207704u: goto label_207704;
        case 0x207708u: goto label_207708;
        case 0x20770cu: goto label_20770c;
        case 0x207710u: goto label_207710;
        case 0x207714u: goto label_207714;
        case 0x207718u: goto label_207718;
        case 0x20771cu: goto label_20771c;
        case 0x207720u: goto label_207720;
        case 0x207724u: goto label_207724;
        case 0x207728u: goto label_207728;
        case 0x20772cu: goto label_20772c;
        case 0x207730u: goto label_207730;
        case 0x207734u: goto label_207734;
        case 0x207738u: goto label_207738;
        case 0x20773cu: goto label_20773c;
        case 0x207740u: goto label_207740;
        case 0x207744u: goto label_207744;
        case 0x207748u: goto label_207748;
        case 0x20774cu: goto label_20774c;
        case 0x207750u: goto label_207750;
        case 0x207754u: goto label_207754;
        case 0x207758u: goto label_207758;
        case 0x20775cu: goto label_20775c;
        case 0x207760u: goto label_207760;
        case 0x207764u: goto label_207764;
        case 0x207768u: goto label_207768;
        case 0x20776cu: goto label_20776c;
        case 0x207770u: goto label_207770;
        case 0x207774u: goto label_207774;
        case 0x207778u: goto label_207778;
        case 0x20777cu: goto label_20777c;
        case 0x207780u: goto label_207780;
        case 0x207784u: goto label_207784;
        case 0x207788u: goto label_207788;
        case 0x20778cu: goto label_20778c;
        case 0x207790u: goto label_207790;
        case 0x207794u: goto label_207794;
        case 0x207798u: goto label_207798;
        case 0x20779cu: goto label_20779c;
        case 0x2077a0u: goto label_2077a0;
        case 0x2077a4u: goto label_2077a4;
        case 0x2077a8u: goto label_2077a8;
        case 0x2077acu: goto label_2077ac;
        case 0x2077b0u: goto label_2077b0;
        case 0x2077b4u: goto label_2077b4;
        case 0x2077b8u: goto label_2077b8;
        case 0x2077bcu: goto label_2077bc;
        case 0x2077c0u: goto label_2077c0;
        case 0x2077c4u: goto label_2077c4;
        case 0x2077c8u: goto label_2077c8;
        case 0x2077ccu: goto label_2077cc;
        case 0x2077d0u: goto label_2077d0;
        case 0x2077d4u: goto label_2077d4;
        case 0x2077d8u: goto label_2077d8;
        case 0x2077dcu: goto label_2077dc;
        case 0x2077e0u: goto label_2077e0;
        case 0x2077e4u: goto label_2077e4;
        case 0x2077e8u: goto label_2077e8;
        case 0x2077ecu: goto label_2077ec;
        case 0x2077f0u: goto label_2077f0;
        case 0x2077f4u: goto label_2077f4;
        case 0x2077f8u: goto label_2077f8;
        case 0x2077fcu: goto label_2077fc;
        case 0x207800u: goto label_207800;
        case 0x207804u: goto label_207804;
        case 0x207808u: goto label_207808;
        case 0x20780cu: goto label_20780c;
        case 0x207810u: goto label_207810;
        case 0x207814u: goto label_207814;
        case 0x207818u: goto label_207818;
        case 0x20781cu: goto label_20781c;
        case 0x207820u: goto label_207820;
        case 0x207824u: goto label_207824;
        case 0x207828u: goto label_207828;
        case 0x20782cu: goto label_20782c;
        case 0x207830u: goto label_207830;
        case 0x207834u: goto label_207834;
        case 0x207838u: goto label_207838;
        case 0x20783cu: goto label_20783c;
        case 0x207840u: goto label_207840;
        case 0x207844u: goto label_207844;
        case 0x207848u: goto label_207848;
        case 0x20784cu: goto label_20784c;
        case 0x207850u: goto label_207850;
        case 0x207854u: goto label_207854;
        default: break;
    }

    ctx->pc = 0x2076f8u;

label_2076f8:
    // 0x2076f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2076f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2076fc:
    // 0x2076fc: 0x240300ca  addiu       $v1, $zero, 0xCA
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_207700:
    // 0x207700: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x207700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_207704:
    // 0x207704: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x207704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_207708:
    // 0x207708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20770c:
    // 0x20770c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207710:
    // 0x207710: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x207710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_207714:
    // 0x207714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207718:
    // 0x207718: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20771c:
    // 0x20771c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_207720:
    if (ctx->pc == 0x207720u) {
        ctx->pc = 0x207720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20771Cu;
        // 0x207720: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207724u;
        goto label_207724;
    }
    ctx->pc = 0x20771Cu;
    {
        const bool branch_taken_0x20771c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20771c) {
            ctx->pc = 0x207720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20771Cu;
            // 0x207720: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207750u;
            goto label_207750;
        }
    }
    ctx->pc = 0x207724u;
label_207724:
    // 0x207724: 0xc082c38  jal         func_20B0E0
label_207728:
    if (ctx->pc == 0x207728u) {
        ctx->pc = 0x20772Cu;
        goto label_20772c;
    }
    ctx->pc = 0x207724u;
    SET_GPR_U32(ctx, 31, 0x20772Cu);
    ctx->pc = 0x20B0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20B0E0u, 0x207724u, 0x20772Cu)) {
        return;
    }
    ctx->pc = 0x20772Cu;
label_20772c:
    // 0x20772c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_207730:
    // 0x207730: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_207734:
    if (ctx->pc == 0x207734u) {
        ctx->pc = 0x207734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207730u;
        // 0x207734: 0x240300cf  addiu       $v1, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207738u;
        goto label_207738;
    }
    ctx->pc = 0x207730u;
    {
        const bool branch_taken_0x207730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207730u;
        // 0x207734: 0x240300cf  addiu       $v1, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207730) {
            ctx->pc = 0x207744u;
            goto label_207744;
        }
    }
    ctx->pc = 0x207738u;
label_207738:
    // 0x207738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20773c:
    // 0x20773c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_207740:
    if (ctx->pc == 0x207740u) {
        ctx->pc = 0x207740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20773Cu;
        // 0x207740: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207744u;
        goto label_207744;
    }
    ctx->pc = 0x20773Cu;
    {
        const bool branch_taken_0x20773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20773Cu;
        // 0x207740: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20773c) {
            ctx->pc = 0x207834u;
            goto label_207834;
        }
    }
    ctx->pc = 0x207744u;
label_207744:
    // 0x207744: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_207748:
    // 0x207748: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x207748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_20774c:
    // 0x20774c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_207750:
    // 0x207750: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x207750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_207754:
    // 0x207754: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_207758:
    if (ctx->pc == 0x207758u) {
        ctx->pc = 0x207758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207754u;
        // 0x207758: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20775Cu;
        goto label_20775c;
    }
    ctx->pc = 0x207754u;
    {
        const bool branch_taken_0x207754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207754u;
        // 0x207758: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207754) {
            ctx->pc = 0x207800u;
            goto label_207800;
        }
    }
    ctx->pc = 0x20775Cu;
label_20775c:
    // 0x20775c: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_207760:
    // 0x207760: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x207760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_207764:
    // 0x207764: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_207768:
    if (ctx->pc == 0x207768u) {
        ctx->pc = 0x207768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207764u;
        // 0x207768: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20776Cu;
        goto label_20776c;
    }
    ctx->pc = 0x207764u;
    {
        const bool branch_taken_0x207764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207764u;
        // 0x207768: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207764) {
            ctx->pc = 0x2077F4u;
            goto label_2077f4;
        }
    }
    ctx->pc = 0x20776Cu;
label_20776c:
    // 0x20776c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_207770:
    // 0x207770: 0x10000012  b           . + 4 + (0x12 << 2)
label_207774:
    if (ctx->pc == 0x207774u) {
        ctx->pc = 0x207774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207770u;
        // 0x207774: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207778u;
        goto label_207778;
    }
    ctx->pc = 0x207770u;
    {
        const bool branch_taken_0x207770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207770u;
        // 0x207774: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207770) {
            ctx->pc = 0x2077BCu;
            goto label_2077bc;
        }
    }
    ctx->pc = 0x207778u;
label_207778:
    // 0x207778: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_20777c:
    if (ctx->pc == 0x20777Cu) {
        ctx->pc = 0x20777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207778u;
        // 0x20777c: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207780u;
        goto label_207780;
    }
    ctx->pc = 0x207778u;
    {
        const bool branch_taken_0x207778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207778) {
            ctx->pc = 0x20777Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207778u;
            // 0x20777c: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2077D8u;
            goto label_2077d8;
        }
    }
    ctx->pc = 0x207780u;
label_207780:
    // 0x207780: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
label_207784:
    if (ctx->pc == 0x207784u) {
        ctx->pc = 0x207784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207780u;
        // 0x207784: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207788u;
        goto label_207788;
    }
    ctx->pc = 0x207780u;
    {
        const bool branch_taken_0x207780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x207780) {
            ctx->pc = 0x207784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207780u;
            // 0x207784: 0xdc620008  ld          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207794u;
            goto label_207794;
        }
    }
    ctx->pc = 0x207788u;
label_207788:
    // 0x207788: 0x5451000d  bnel        $v0, $s1, . + 4 + (0xD << 2)
label_20778c:
    if (ctx->pc == 0x20778Cu) {
        ctx->pc = 0x20778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207788u;
        // 0x20778c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207790u;
        goto label_207790;
    }
    ctx->pc = 0x207788u;
    {
        const bool branch_taken_0x207788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x207788) {
            ctx->pc = 0x20778Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207788u;
            // 0x20778c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2077C0u;
            goto label_2077c0;
        }
    }
    ctx->pc = 0x207790u;
label_207790:
    // 0x207790: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x207790u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_207794:
    // 0x207794: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x207794u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_207798:
    // 0x207798: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x207798u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
label_20779c:
    // 0x20779c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2077a0:
    // 0x2077a0: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x2077a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_2077a4:
    // 0x2077a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2077a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2077a8:
    // 0x2077a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2077ac:
    if (ctx->pc == 0x2077ACu) {
        ctx->pc = 0x2077ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077A8u;
        // 0x2077ac: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077B0u;
        goto label_2077b0;
    }
    ctx->pc = 0x2077A8u;
    {
        const bool branch_taken_0x2077a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2077a8) {
            ctx->pc = 0x2077ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2077A8u;
            // 0x2077ac: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2077C0u;
            goto label_2077c0;
        }
    }
    ctx->pc = 0x2077B0u;
label_2077b0:
    // 0x2077b0: 0x9e020140  lwu         $v0, 0x140($s0)
    ctx->pc = 0x2077b0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_2077b4:
    // 0x2077b4: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x2077b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_2077b8:
    // 0x2077b8: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x2077b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_2077bc:
    // 0x2077bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2077c0:
    // 0x2077c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2077c4:
    if (ctx->pc == 0x2077C4u) {
        ctx->pc = 0x2077C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077C0u;
        // 0x2077c4: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077C8u;
        goto label_2077c8;
    }
    ctx->pc = 0x2077C0u;
    {
        const bool branch_taken_0x2077c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2077c0) {
            ctx->pc = 0x2077C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2077C0u;
            // 0x2077c4: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2077D8u;
            goto label_2077d8;
        }
    }
    ctx->pc = 0x2077C8u;
label_2077c8:
    // 0x2077c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2077cc:
    // 0x2077cc: 0x40f809  jalr        $v0
label_2077d0:
    if (ctx->pc == 0x2077D0u) {
        ctx->pc = 0x2077D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077CCu;
        // 0x2077d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077D4u;
        goto label_2077d4;
    }
    ctx->pc = 0x2077CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2077D4u);
        ctx->pc = 0x2077D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077CCu;
        // 0x2077d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077CCu, 0x2077D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2077D4u;
label_2077d4:
    // 0x2077d4: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x2077d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_2077d8:
    // 0x2077d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2077d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2077dc:
    // 0x2077dc: 0x40f809  jalr        $v0
label_2077e0:
    if (ctx->pc == 0x2077E0u) {
        ctx->pc = 0x2077E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077DCu;
        // 0x2077e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077E4u;
        goto label_2077e4;
    }
    ctx->pc = 0x2077DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2077E4u);
        ctx->pc = 0x2077E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077DCu;
        // 0x2077e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077DCu, 0x2077E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2077E4u;
label_2077e4:
    // 0x2077e4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_2077e8:
    if (ctx->pc == 0x2077E8u) {
        ctx->pc = 0x2077E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077E4u;
        // 0x2077e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077ECu;
        goto label_2077ec;
    }
    ctx->pc = 0x2077E4u;
    {
        const bool branch_taken_0x2077e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2077e4) {
            ctx->pc = 0x2077E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2077E4u;
            // 0x2077e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207834u;
            goto label_207834;
        }
    }
    ctx->pc = 0x2077ECu;
label_2077ec:
    // 0x2077ec: 0x5453ffe2  bnel        $v0, $s3, . + 4 + (-0x1E << 2)
label_2077f0:
    if (ctx->pc == 0x2077F0u) {
        ctx->pc = 0x2077F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077ECu;
        // 0x2077f0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077F4u;
        goto label_2077f4;
    }
    ctx->pc = 0x2077ECu;
    {
        const bool branch_taken_0x2077ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2077ec) {
            ctx->pc = 0x2077F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2077ECu;
            // 0x2077f0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207778;
        }
    }
    ctx->pc = 0x2077F4u;
label_2077f4:
    // 0x2077f4: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2077f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2077f8:
    // 0x2077f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2077fc:
    if (ctx->pc == 0x2077FCu) {
        ctx->pc = 0x2077FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077F8u;
        // 0x2077fc: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207800u;
        goto label_207800;
    }
    ctx->pc = 0x2077F8u;
    {
        const bool branch_taken_0x2077f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077F8u;
        // 0x2077fc: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077f8) {
            ctx->pc = 0x20782Cu;
            goto label_20782c;
        }
    }
    ctx->pc = 0x207800u;
label_207800:
    // 0x207800: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_207804:
    if (ctx->pc == 0x207804u) {
        ctx->pc = 0x207804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207800u;
        // 0x207804: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207808u;
        goto label_207808;
    }
    ctx->pc = 0x207800u;
    {
        const bool branch_taken_0x207800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x207804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207800u;
        // 0x207804: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207800) {
            ctx->pc = 0x20782Cu;
            goto label_20782c;
        }
    }
    ctx->pc = 0x207808u;
label_207808:
    // 0x207808: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20780c:
    // 0x20780c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20780cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207810:
    // 0x207810: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_207814:
    // 0x207814: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x207814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207818:
    // 0x207818: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x207818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_20781c:
    // 0x20781c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207820:
    // 0x207820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207824:
    // 0x207824: 0x40f809  jalr        $v0
label_207828:
    if (ctx->pc == 0x207828u) {
        ctx->pc = 0x207828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207824u;
        // 0x207828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20782Cu;
        goto label_20782c;
    }
    ctx->pc = 0x207824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20782Cu);
        ctx->pc = 0x207828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207824u;
        // 0x207828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207824u, 0x20782Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20782Cu;
label_20782c:
    // 0x20782c: 0xc081e5a  jal         func_207968
label_207830:
    if (ctx->pc == 0x207830u) {
        ctx->pc = 0x207830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20782Cu;
        // 0x207830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207834u;
        goto label_207834;
    }
    ctx->pc = 0x20782Cu;
    SET_GPR_U32(ctx, 31, 0x207834u);
    ctx->pc = 0x207830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20782Cu;
    // 0x207830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207968u, 0x20782Cu, 0x207834u)) {
        return;
    }
    ctx->pc = 0x207834u;
label_207834:
    // 0x207834: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x207834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_207838:
    // 0x207838: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x207838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20783c:
    // 0x20783c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20783cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207840:
    // 0x207840: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x207840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207844:
    // 0x207844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207848:
    // 0x207848: 0x3e00008  jr          $ra
label_20784c:
    if (ctx->pc == 0x20784Cu) {
        ctx->pc = 0x20784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207848u;
        // 0x20784c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207850u;
        goto label_207850;
    }
    ctx->pc = 0x207848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207848u;
        // 0x20784c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207850u;
label_207850:
    // 0x207850: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x207850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_207854:
    // 0x207854: 0x0  nop
    ctx->pc = 0x207854u;
    // NOP
    ctx->pc = 0x207858u;
}
