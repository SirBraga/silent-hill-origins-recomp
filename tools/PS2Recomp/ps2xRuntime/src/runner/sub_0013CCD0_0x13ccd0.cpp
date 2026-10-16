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

// Function: sub_0013CCD0
// Address: 0x13ccd0 - 0x13cfb0
void sub_0013CCD0_0x13ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CCD0_0x13ccd0");
#endif

    switch (ctx->pc) {
        case 0x13ccf0u: goto label_13ccf0;
        case 0x13cd30u: goto label_13cd30;
        case 0x13cd44u: goto label_13cd44;
        case 0x13cd4cu: goto label_13cd4c;
        case 0x13cd68u: goto label_13cd68;
        case 0x13cd70u: goto label_13cd70;
        case 0x13cd78u: goto label_13cd78;
        case 0x13cedcu: goto label_13cedc;
        case 0x13cee4u: goto label_13cee4;
        case 0x13cf04u: goto label_13cf04;
        case 0x13cf38u: goto label_13cf38;
        case 0x13cf4cu: goto label_13cf4c;
        case 0x13cf54u: goto label_13cf54;
        case 0x13cf70u: goto label_13cf70;
        case 0x13cf78u: goto label_13cf78;
        case 0x13cf80u: goto label_13cf80;
        case 0x13cf94u: goto label_13cf94;
        default: break;
    }

    ctx->pc = 0x13ccd0u;

    // 0x13ccd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ccd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13ccd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13ccdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ccdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cce0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13cce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cce8: 0xc04ee86  jal         func_13BA18
    ctx->pc = 0x13CCE8u;
    SET_GPR_U32(ctx, 31, 0x13CCF0u);
    ctx->pc = 0x13CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCE8u;
    // 0x13ccec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BA18u, 0x13CCE8u, 0x13CCF0u)) {
        return;
    }
    ctx->pc = 0x13CCF0u;
label_13ccf0:
    // 0x13ccf0: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x13ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x13ccf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13CCF4u;
    {
        const bool branch_taken_0x13ccf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCF4u;
        // 0x13ccf8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ccf4) {
            ctx->pc = 0x13CD10u;
            goto label_13cd10;
        }
    }
    ctx->pc = 0x13CCFCu;
    // 0x13ccfc: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x13ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x13cd00: 0x14a20022  bne         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x13CD00u;
    {
        const bool branch_taken_0x13cd00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD00u;
        // 0x13cd04: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd00) {
            ctx->pc = 0x13CD8Cu;
            goto label_13cd8c;
        }
    }
    ctx->pc = 0x13CD08u;
    // 0x13cd08: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x13CD08u;
    {
        const bool branch_taken_0x13cd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cd08) {
            ctx->pc = 0x13CEFCu;
            goto label_13cefc;
        }
    }
    ctx->pc = 0x13CD10u;
label_13cd10:
    // 0x13cd10: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x13cd14: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13CD14u;
    {
        const bool branch_taken_0x13cd14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD14u;
        // 0x13cd18: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd14) {
            ctx->pc = 0x13CD8Cu;
            goto label_13cd8c;
        }
    }
    ctx->pc = 0x13CD1Cu;
    // 0x13cd1c: 0x8e2500f4  lw          $a1, 0xF4($s1)
    ctx->pc = 0x13cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x13cd20: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13CD20u;
    {
        const bool branch_taken_0x13cd20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD20u;
        // 0x13cd24: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd20) {
            ctx->pc = 0x13CD50u;
            goto label_13cd50;
        }
    }
    ctx->pc = 0x13CD28u;
    // 0x13cd28: 0xc06640a  jal         func_199028
    ctx->pc = 0x13CD28u;
    SET_GPR_U32(ctx, 31, 0x13CD30u);
    ctx->pc = 0x13CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD28u;
    // 0x13cd2c: 0x8c448bc4  lw          $a0, -0x743C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13CD28u, 0x13CD30u)) {
        return;
    }
    ctx->pc = 0x13CD30u;
label_13cd30:
    // 0x13cd30: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x13cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x13cd34: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CD34u;
    {
        const bool branch_taken_0x13cd34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cd34) {
            ctx->pc = 0x13CD44u;
            goto label_13cd44;
        }
    }
    ctx->pc = 0x13CD3Cu;
    // 0x13cd3c: 0xc0b5c9e  jal         func_2D7278
    ctx->pc = 0x13CD3Cu;
    SET_GPR_U32(ctx, 31, 0x13CD44u);
    ctx->pc = 0x13CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD3Cu;
    // 0x13cd40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7278u, 0x13CD3Cu, 0x13CD44u)) {
        return;
    }
    ctx->pc = 0x13CD44u;
label_13cd44:
    // 0x13cd44: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x13CD44u;
    SET_GPR_U32(ctx, 31, 0x13CD4Cu);
    ctx->pc = 0x13CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD44u;
    // 0x13cd48: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x13CD44u, 0x13CD4Cu)) {
        return;
    }
    ctx->pc = 0x13CD4Cu;
label_13cd4c:
    // 0x13cd4c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x13cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_13cd50:
    // 0x13cd50: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x13cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x13cd54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CD54u;
    {
        const bool branch_taken_0x13cd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD54u;
        // 0x13cd58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd54) {
            ctx->pc = 0x13CD7Cu;
            goto label_13cd7c;
        }
    }
    ctx->pc = 0x13CD5Cu;
    // 0x13cd5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13cd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd60: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x13CD60u;
    SET_GPR_U32(ctx, 31, 0x13CD68u);
    ctx->pc = 0x13CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD60u;
    // 0x13cd64: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x13CD60u, 0x13CD68u)) {
        return;
    }
    ctx->pc = 0x13CD68u;
label_13cd68:
    // 0x13cd68: 0xc0898d2  jal         func_226348
    ctx->pc = 0x13CD68u;
    SET_GPR_U32(ctx, 31, 0x13CD70u);
    ctx->pc = 0x13CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD68u;
    // 0x13cd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x13CD68u, 0x13CD70u)) {
        return;
    }
    ctx->pc = 0x13CD70u;
label_13cd70:
    // 0x13cd70: 0xc095534  jal         func_2554D0
    ctx->pc = 0x13CD70u;
    SET_GPR_U32(ctx, 31, 0x13CD78u);
    ctx->pc = 0x13CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD70u;
    // 0x13cd74: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x13CD70u, 0x13CD78u)) {
        return;
    }
    ctx->pc = 0x13CD78u;
label_13cd78:
    // 0x13cd78: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x13cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_13cd7c:
    // 0x13cd7c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x13cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x13cd80: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13cd84: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x13CD84u;
    {
        const bool branch_taken_0x13cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD84u;
        // 0x13cd88: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd84) {
            ctx->pc = 0x13CF8Cu;
            goto label_13cf8c;
        }
    }
    ctx->pc = 0x13CD8Cu;
label_13cd8c:
    // 0x13cd8c: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x13cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
    // 0x13cd90: 0x14a20056  bne         $a1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x13CD90u;
    {
        const bool branch_taken_0x13cd90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD90u;
        // 0x13cd94: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd90) {
            ctx->pc = 0x13CEECu;
            goto label_13ceec;
        }
    }
    ctx->pc = 0x13CD98u;
    // 0x13cd98: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x13cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x13cd9c: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x13CD9Cu;
    {
        const bool branch_taken_0x13cd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD9Cu;
        // 0x13cda0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd9c) {
            ctx->pc = 0x13CF9Cu;
            goto label_13cf9c;
        }
    }
    ctx->pc = 0x13CDA4u;
    // 0x13cda4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13cda8: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x13cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13cdac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13cdb0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x13cdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13cdb4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x13cdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13cdb8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x13cdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13cdbc: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x13cdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13cdc0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x13cdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13cdc4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x13cdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13cdc8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x13cdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13cdcc: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x13cdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13cdd0: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x13cdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cdd4: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x13cdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cdd8: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x13cdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cddc: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x13cddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cde0: 0xb0a70027  sdl         $a3, 0x27($a1)
    ctx->pc = 0x13cde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cde4: 0xb4a70020  sdr         $a3, 0x20($a1)
    ctx->pc = 0x13cde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cde8: 0xb0a8002f  sdl         $t0, 0x2F($a1)
    ctx->pc = 0x13cde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cdec: 0xb4a80028  sdr         $t0, 0x28($a1)
    ctx->pc = 0x13cdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cdf0: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x13cdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13cdf4: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x13cdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13cdf8: 0x6866002f  ldl         $a2, 0x2F($v1)
    ctx->pc = 0x13cdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13cdfc: 0x6c660028  ldr         $a2, 0x28($v1)
    ctx->pc = 0x13cdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13ce00: 0x68670037  ldl         $a3, 0x37($v1)
    ctx->pc = 0x13ce00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13ce04: 0x6c670030  ldr         $a3, 0x30($v1)
    ctx->pc = 0x13ce04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13ce08: 0x6868003f  ldl         $t0, 0x3F($v1)
    ctx->pc = 0x13ce08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13ce0c: 0x6c680038  ldr         $t0, 0x38($v1)
    ctx->pc = 0x13ce0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13ce10: 0xb0a20037  sdl         $v0, 0x37($a1)
    ctx->pc = 0x13ce10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce14: 0xb4a20030  sdr         $v0, 0x30($a1)
    ctx->pc = 0x13ce14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce18: 0xb0a6003f  sdl         $a2, 0x3F($a1)
    ctx->pc = 0x13ce18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce1c: 0xb4a60038  sdr         $a2, 0x38($a1)
    ctx->pc = 0x13ce1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce20: 0xb0a70047  sdl         $a3, 0x47($a1)
    ctx->pc = 0x13ce20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce24: 0xb4a70040  sdr         $a3, 0x40($a1)
    ctx->pc = 0x13ce24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce28: 0xb0a8004f  sdl         $t0, 0x4F($a1)
    ctx->pc = 0x13ce28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce2c: 0xb4a80048  sdr         $t0, 0x48($a1)
    ctx->pc = 0x13ce2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce30: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x13ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x13ce34: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13CE34u;
    {
        const bool branch_taken_0x13ce34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE34u;
        // 0x13ce38: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce34) {
            ctx->pc = 0x13CED0u;
            goto label_13ced0;
        }
    }
    ctx->pc = 0x13CE3Cu;
    // 0x13ce3c: 0xc6210160  lwc1        $f1, 0x160($s1)
    ctx->pc = 0x13ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ce40: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x13ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ce44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13ce44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13ce48: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x13ce48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x13ce4c: 0xc6210160  lwc1        $f1, 0x160($s1)
    ctx->pc = 0x13ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ce50: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x13ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ce54: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x13ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ce58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13ce58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13ce5c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13ce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13ce60: 0xc6210160  lwc1        $f1, 0x160($s1)
    ctx->pc = 0x13ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ce64: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x13ce64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13ce68: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x13ce68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13ce6c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x13ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ce70: 0xc6200164  lwc1        $f0, 0x164($s1)
    ctx->pc = 0x13ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ce74: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x13ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ce78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13ce78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ce7c: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x13ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ce80: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x13ce80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13ce84: 0xc6200164  lwc1        $f0, 0x164($s1)
    ctx->pc = 0x13ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ce88: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13ce88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13ce8c: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x13ce8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13ce90: 0xc6200164  lwc1        $f0, 0x164($s1)
    ctx->pc = 0x13ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ce94: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13ce94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13ce98: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x13ce98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13ce9c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x13ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cea0: 0xc6200168  lwc1        $f0, 0x168($s1)
    ctx->pc = 0x13cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cea4: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x13cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13cea8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13cea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ceac: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x13ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ceb0: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x13ceb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13ceb4: 0xc6200168  lwc1        $f0, 0x168($s1)
    ctx->pc = 0x13ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ceb8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13ceb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13cebc: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x13cebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x13cec0: 0xc6200168  lwc1        $f0, 0x168($s1)
    ctx->pc = 0x13cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cec4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13cec4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13cec8: 0xe4830028  swc1        $f3, 0x28($a0)
    ctx->pc = 0x13cec8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x13cecc: 0x0  nop
    ctx->pc = 0x13ceccu;
    // NOP
label_13ced0:
    // 0x13ced0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x13ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13ced4: 0xc092d94  jal         func_24B650
    ctx->pc = 0x13CED4u;
    SET_GPR_U32(ctx, 31, 0x13CEDCu);
    ctx->pc = 0x13CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CED4u;
    // 0x13ced8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x13CED4u, 0x13CEDCu)) {
        return;
    }
    ctx->pc = 0x13CEDCu;
label_13cedc:
    // 0x13cedc: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x13CEDCu;
    SET_GPR_U32(ctx, 31, 0x13CEE4u);
    ctx->pc = 0x13CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEDCu;
    // 0x13cee0: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x13CEDCu, 0x13CEE4u)) {
        return;
    }
    ctx->pc = 0x13CEE4u;
label_13cee4:
    // 0x13cee4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x13CEE4u;
    {
        const bool branch_taken_0x13cee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEE4u;
        // 0x13cee8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cee4) {
            ctx->pc = 0x13CF9Cu;
            goto label_13cf9c;
        }
    }
    ctx->pc = 0x13CEECu;
label_13ceec:
    // 0x13ceec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13cef0: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x13cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF880u));
    // 0x13cef4: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CEF4u;
    {
        const bool branch_taken_0x13cef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x13CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEF4u;
        // 0x13cef8: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cef4) {
            ctx->pc = 0x13CF0Cu;
            goto label_13cf0c;
        }
    }
    ctx->pc = 0x13CEFCu;
label_13cefc:
    // 0x13cefc: 0xc04f2fc  jal         func_13CBF0
    ctx->pc = 0x13CEFCu;
    SET_GPR_U32(ctx, 31, 0x13CF04u);
    ctx->pc = 0x13CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEFCu;
    // 0x13cf00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13CBF0u, 0x13CEFCu, 0x13CF04u)) {
        return;
    }
    ctx->pc = 0x13CF04u;
label_13cf04:
    // 0x13cf04: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13CF04u;
    {
        const bool branch_taken_0x13cf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF04u;
        // 0x13cf08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf04) {
            ctx->pc = 0x13CF9Cu;
            goto label_13cf9c;
        }
    }
    ctx->pc = 0x13CF0Cu;
label_13cf0c:
    // 0x13cf0c: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x13cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965384)));
    // 0x13cf10: 0x14a30022  bne         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13CF10u;
    {
        const bool branch_taken_0x13cf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x13CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF10u;
        // 0x13cf14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf10) {
            ctx->pc = 0x13CF9Cu;
            goto label_13cf9c;
        }
    }
    ctx->pc = 0x13CF18u;
    // 0x13cf18: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x13cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x13cf1c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x13CF1Cu;
    {
        const bool branch_taken_0x13cf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf1c) {
            ctx->pc = 0x13CF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF1Cu;
            // 0x13cf20: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFA0u;
            goto label_13cfa0;
        }
    }
    ctx->pc = 0x13CF24u;
    // 0x13cf24: 0x8e2500f4  lw          $a1, 0xF4($s1)
    ctx->pc = 0x13cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x13cf28: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13CF28u;
    {
        const bool branch_taken_0x13cf28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF28u;
        // 0x13cf2c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf28) {
            ctx->pc = 0x13CF58u;
            goto label_13cf58;
        }
    }
    ctx->pc = 0x13CF30u;
    // 0x13cf30: 0xc06640a  jal         func_199028
    ctx->pc = 0x13CF30u;
    SET_GPR_U32(ctx, 31, 0x13CF38u);
    ctx->pc = 0x13CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF30u;
    // 0x13cf34: 0x8c448bc4  lw          $a0, -0x743C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13CF30u, 0x13CF38u)) {
        return;
    }
    ctx->pc = 0x13CF38u;
label_13cf38:
    // 0x13cf38: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x13cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x13cf3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CF3Cu;
    {
        const bool branch_taken_0x13cf3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf3c) {
            ctx->pc = 0x13CF4Cu;
            goto label_13cf4c;
        }
    }
    ctx->pc = 0x13CF44u;
    // 0x13cf44: 0xc0b5c9e  jal         func_2D7278
    ctx->pc = 0x13CF44u;
    SET_GPR_U32(ctx, 31, 0x13CF4Cu);
    ctx->pc = 0x13CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF44u;
    // 0x13cf48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7278u, 0x13CF44u, 0x13CF4Cu)) {
        return;
    }
    ctx->pc = 0x13CF4Cu;
label_13cf4c:
    // 0x13cf4c: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x13CF4Cu;
    SET_GPR_U32(ctx, 31, 0x13CF54u);
    ctx->pc = 0x13CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF4Cu;
    // 0x13cf50: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x13CF4Cu, 0x13CF54u)) {
        return;
    }
    ctx->pc = 0x13CF54u;
label_13cf54:
    // 0x13cf54: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x13cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_13cf58:
    // 0x13cf58: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x13cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x13cf5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CF5Cu;
    {
        const bool branch_taken_0x13cf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF5Cu;
        // 0x13cf60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf5c) {
            ctx->pc = 0x13CF84u;
            goto label_13cf84;
        }
    }
    ctx->pc = 0x13CF64u;
    // 0x13cf64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13cf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf68: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x13CF68u;
    SET_GPR_U32(ctx, 31, 0x13CF70u);
    ctx->pc = 0x13CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF68u;
    // 0x13cf6c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x13CF68u, 0x13CF70u)) {
        return;
    }
    ctx->pc = 0x13CF70u;
label_13cf70:
    // 0x13cf70: 0xc0898d2  jal         func_226348
    ctx->pc = 0x13CF70u;
    SET_GPR_U32(ctx, 31, 0x13CF78u);
    ctx->pc = 0x13CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF70u;
    // 0x13cf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x13CF70u, 0x13CF78u)) {
        return;
    }
    ctx->pc = 0x13CF78u;
label_13cf78:
    // 0x13cf78: 0xc095534  jal         func_2554D0
    ctx->pc = 0x13CF78u;
    SET_GPR_U32(ctx, 31, 0x13CF80u);
    ctx->pc = 0x13CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF78u;
    // 0x13cf7c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x13CF78u, 0x13CF80u)) {
        return;
    }
    ctx->pc = 0x13CF80u;
label_13cf80:
    // 0x13cf80: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x13cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_13cf84:
    // 0x13cf84: 0x26458880  addiu       $a1, $s2, -0x7780
    ctx->pc = 0x13cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
    // 0x13cf88: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_13cf8c:
    // 0x13cf8c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13CF8Cu;
    SET_GPR_U32(ctx, 31, 0x13CF94u);
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13CF8Cu, 0x13CF94u)) {
        return;
    }
    ctx->pc = 0x13CF94u;
label_13cf94:
    // 0x13cf94: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x13cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x13cf98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13cf98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13cf9c:
    // 0x13cf9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13cf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13cfa0:
    // 0x13cfa0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13cfa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cfa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFA8u;
        // 0x13cfac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFB0u;
}
