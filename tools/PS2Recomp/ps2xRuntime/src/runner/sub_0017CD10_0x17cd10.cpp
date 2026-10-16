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

// Function: sub_0017CD10
// Address: 0x17cd10 - 0x17ce68
void sub_0017CD10_0x17cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CD10_0x17cd10");
#endif

    switch (ctx->pc) {
        case 0x17cd34u: goto label_17cd34;
        case 0x17cd40u: goto label_17cd40;
        case 0x17cd4cu: goto label_17cd4c;
        case 0x17cd58u: goto label_17cd58;
        case 0x17cd64u: goto label_17cd64;
        case 0x17cd70u: goto label_17cd70;
        case 0x17cd7cu: goto label_17cd7c;
        case 0x17cd88u: goto label_17cd88;
        case 0x17cd94u: goto label_17cd94;
        case 0x17cda0u: goto label_17cda0;
        case 0x17cdb4u: goto label_17cdb4;
        case 0x17cdc4u: goto label_17cdc4;
        case 0x17cdd4u: goto label_17cdd4;
        case 0x17cde4u: goto label_17cde4;
        case 0x17cdf4u: goto label_17cdf4;
        case 0x17ce04u: goto label_17ce04;
        case 0x17ce14u: goto label_17ce14;
        case 0x17ce24u: goto label_17ce24;
        case 0x17ce34u: goto label_17ce34;
        case 0x17ce44u: goto label_17ce44;
        default: break;
    }

    ctx->pc = 0x17cd10u;

    // 0x17cd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cd14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17cd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17cd18: 0x14a2004a  bne         $a1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x17CD18u;
    {
        const bool branch_taken_0x17cd18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD18u;
        // 0x17cd1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd18) {
            ctx->pc = 0x17CE44u;
            goto label_17ce44;
        }
    }
    ctx->pc = 0x17CD20u;
    // 0x17cd20: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x17CD20u;
    {
        const bool branch_taken_0x17cd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd20) {
            ctx->pc = 0x17CD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CD20u;
            // 0x17cd24: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CDA8u;
            goto label_17cda8;
        }
    }
    ctx->pc = 0x17CD28u;
    // 0x17cd28: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd2c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD2Cu;
    SET_GPR_U32(ctx, 31, 0x17CD34u);
    ctx->pc = 0x17CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD2Cu;
    // 0x17cd30: 0x2484f8e8  addiu       $a0, $a0, -0x718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD2Cu, 0x17CD34u)) {
        return;
    }
    ctx->pc = 0x17CD34u;
label_17cd34:
    // 0x17cd34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd38: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD38u;
    SET_GPR_U32(ctx, 31, 0x17CD40u);
    ctx->pc = 0x17CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD38u;
    // 0x17cd3c: 0x2484f8f0  addiu       $a0, $a0, -0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD38u, 0x17CD40u)) {
        return;
    }
    ctx->pc = 0x17CD40u;
label_17cd40:
    // 0x17cd40: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd44: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD44u;
    SET_GPR_U32(ctx, 31, 0x17CD4Cu);
    ctx->pc = 0x17CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD44u;
    // 0x17cd48: 0x2484f8f8  addiu       $a0, $a0, -0x708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD44u, 0x17CD4Cu)) {
        return;
    }
    ctx->pc = 0x17CD4Cu;
label_17cd4c:
    // 0x17cd4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd50: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD50u;
    SET_GPR_U32(ctx, 31, 0x17CD58u);
    ctx->pc = 0x17CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD50u;
    // 0x17cd54: 0x2484f900  addiu       $a0, $a0, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD50u, 0x17CD58u)) {
        return;
    }
    ctx->pc = 0x17CD58u;
label_17cd58:
    // 0x17cd58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd5c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD5Cu;
    SET_GPR_U32(ctx, 31, 0x17CD64u);
    ctx->pc = 0x17CD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD5Cu;
    // 0x17cd60: 0x2484f908  addiu       $a0, $a0, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD5Cu, 0x17CD64u)) {
        return;
    }
    ctx->pc = 0x17CD64u;
label_17cd64:
    // 0x17cd64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd68: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD68u;
    SET_GPR_U32(ctx, 31, 0x17CD70u);
    ctx->pc = 0x17CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD68u;
    // 0x17cd6c: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD68u, 0x17CD70u)) {
        return;
    }
    ctx->pc = 0x17CD70u;
label_17cd70:
    // 0x17cd70: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd74: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD74u;
    SET_GPR_U32(ctx, 31, 0x17CD7Cu);
    ctx->pc = 0x17CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD74u;
    // 0x17cd78: 0x2484f918  addiu       $a0, $a0, -0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD74u, 0x17CD7Cu)) {
        return;
    }
    ctx->pc = 0x17CD7Cu;
label_17cd7c:
    // 0x17cd7c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd80: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD80u;
    SET_GPR_U32(ctx, 31, 0x17CD88u);
    ctx->pc = 0x17CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD80u;
    // 0x17cd84: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD80u, 0x17CD88u)) {
        return;
    }
    ctx->pc = 0x17CD88u;
label_17cd88:
    // 0x17cd88: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd8c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD8Cu;
    SET_GPR_U32(ctx, 31, 0x17CD94u);
    ctx->pc = 0x17CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD8Cu;
    // 0x17cd90: 0x2484f928  addiu       $a0, $a0, -0x6D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD8Cu, 0x17CD94u)) {
        return;
    }
    ctx->pc = 0x17CD94u;
label_17cd94:
    // 0x17cd94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cd98: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17CD98u;
    SET_GPR_U32(ctx, 31, 0x17CDA0u);
    ctx->pc = 0x17CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD98u;
    // 0x17cd9c: 0x2484f930  addiu       $a0, $a0, -0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17CD98u, 0x17CDA0u)) {
        return;
    }
    ctx->pc = 0x17CDA0u;
label_17cda0:
    // 0x17cda0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17CDA0u;
    {
        const bool branch_taken_0x17cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDA0u;
        // 0x17cda4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cda0) {
            ctx->pc = 0x17CE48u;
            goto label_17ce48;
        }
    }
    ctx->pc = 0x17CDA8u;
label_17cda8:
    // 0x17cda8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cdac: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CDACu;
    SET_GPR_U32(ctx, 31, 0x17CDB4u);
    ctx->pc = 0x17CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDACu;
    // 0x17cdb0: 0x2484f930  addiu       $a0, $a0, -0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CDACu, 0x17CDB4u)) {
        return;
    }
    ctx->pc = 0x17CDB4u;
label_17cdb4:
    // 0x17cdb4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cdb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cdbc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CDBCu;
    SET_GPR_U32(ctx, 31, 0x17CDC4u);
    ctx->pc = 0x17CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDBCu;
    // 0x17cdc0: 0x2484f928  addiu       $a0, $a0, -0x6D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CDBCu, 0x17CDC4u)) {
        return;
    }
    ctx->pc = 0x17CDC4u;
label_17cdc4:
    // 0x17cdc4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cdc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cdcc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CDCCu;
    SET_GPR_U32(ctx, 31, 0x17CDD4u);
    ctx->pc = 0x17CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDCCu;
    // 0x17cdd0: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CDCCu, 0x17CDD4u)) {
        return;
    }
    ctx->pc = 0x17CDD4u;
label_17cdd4:
    // 0x17cdd4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cdd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cddc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CDDCu;
    SET_GPR_U32(ctx, 31, 0x17CDE4u);
    ctx->pc = 0x17CDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDDCu;
    // 0x17cde0: 0x2484f918  addiu       $a0, $a0, -0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CDDCu, 0x17CDE4u)) {
        return;
    }
    ctx->pc = 0x17CDE4u;
label_17cde4:
    // 0x17cde4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cde8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cdec: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CDECu;
    SET_GPR_U32(ctx, 31, 0x17CDF4u);
    ctx->pc = 0x17CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDECu;
    // 0x17cdf0: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CDECu, 0x17CDF4u)) {
        return;
    }
    ctx->pc = 0x17CDF4u;
label_17cdf4:
    // 0x17cdf4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17cdf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cdfc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CDFCu;
    SET_GPR_U32(ctx, 31, 0x17CE04u);
    ctx->pc = 0x17CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDFCu;
    // 0x17ce00: 0x2484f908  addiu       $a0, $a0, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CDFCu, 0x17CE04u)) {
        return;
    }
    ctx->pc = 0x17CE04u;
label_17ce04:
    // 0x17ce04: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ce08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ce0c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CE0Cu;
    SET_GPR_U32(ctx, 31, 0x17CE14u);
    ctx->pc = 0x17CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE0Cu;
    // 0x17ce10: 0x2484f900  addiu       $a0, $a0, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CE0Cu, 0x17CE14u)) {
        return;
    }
    ctx->pc = 0x17CE14u;
label_17ce14:
    // 0x17ce14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ce18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ce18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ce1c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CE1Cu;
    SET_GPR_U32(ctx, 31, 0x17CE24u);
    ctx->pc = 0x17CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE1Cu;
    // 0x17ce20: 0x2484f8f8  addiu       $a0, $a0, -0x708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CE1Cu, 0x17CE24u)) {
        return;
    }
    ctx->pc = 0x17CE24u;
label_17ce24:
    // 0x17ce24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ce28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ce2c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CE2Cu;
    SET_GPR_U32(ctx, 31, 0x17CE34u);
    ctx->pc = 0x17CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE2Cu;
    // 0x17ce30: 0x2484f8f0  addiu       $a0, $a0, -0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CE2Cu, 0x17CE34u)) {
        return;
    }
    ctx->pc = 0x17CE34u;
label_17ce34:
    // 0x17ce34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ce38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ce3c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17CE3Cu;
    SET_GPR_U32(ctx, 31, 0x17CE44u);
    ctx->pc = 0x17CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE3Cu;
    // 0x17ce40: 0x2484f8e8  addiu       $a0, $a0, -0x718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17CE3Cu, 0x17CE44u)) {
        return;
    }
    ctx->pc = 0x17CE44u;
label_17ce44:
    // 0x17ce44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ce48:
    // 0x17ce48: 0x3e00008  jr          $ra
    ctx->pc = 0x17CE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE48u;
        // 0x17ce4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CE50u;
    // 0x17ce50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ce54: 0x0  nop
    ctx->pc = 0x17ce54u;
    // NOP
    // 0x17ce58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17ce5c: 0x0  nop
    ctx->pc = 0x17ce5cu;
    // NOP
    // 0x17ce60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17ce64: 0x0  nop
    ctx->pc = 0x17ce64u;
    // NOP
    ctx->pc = 0x17ce68u;
}
