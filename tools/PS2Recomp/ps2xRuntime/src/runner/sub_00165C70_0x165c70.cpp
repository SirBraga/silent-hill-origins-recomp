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

// Function: sub_00165C70
// Address: 0x165c70 - 0x165d38
void sub_00165C70_0x165c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165C70_0x165c70");
#endif

    switch (ctx->pc) {
        case 0x165c70u: goto label_165c70;
        case 0x165c74u: goto label_165c74;
        case 0x165c78u: goto label_165c78;
        case 0x165c7cu: goto label_165c7c;
        case 0x165c80u: goto label_165c80;
        case 0x165c84u: goto label_165c84;
        case 0x165c88u: goto label_165c88;
        case 0x165c8cu: goto label_165c8c;
        case 0x165c90u: goto label_165c90;
        case 0x165c94u: goto label_165c94;
        case 0x165c98u: goto label_165c98;
        case 0x165c9cu: goto label_165c9c;
        case 0x165ca0u: goto label_165ca0;
        case 0x165ca4u: goto label_165ca4;
        case 0x165ca8u: goto label_165ca8;
        case 0x165cacu: goto label_165cac;
        case 0x165cb0u: goto label_165cb0;
        case 0x165cb4u: goto label_165cb4;
        case 0x165cb8u: goto label_165cb8;
        case 0x165cbcu: goto label_165cbc;
        case 0x165cc0u: goto label_165cc0;
        case 0x165cc4u: goto label_165cc4;
        case 0x165cc8u: goto label_165cc8;
        case 0x165cccu: goto label_165ccc;
        case 0x165cd0u: goto label_165cd0;
        case 0x165cd4u: goto label_165cd4;
        case 0x165cd8u: goto label_165cd8;
        case 0x165cdcu: goto label_165cdc;
        case 0x165ce0u: goto label_165ce0;
        case 0x165ce4u: goto label_165ce4;
        case 0x165ce8u: goto label_165ce8;
        case 0x165cecu: goto label_165cec;
        case 0x165cf0u: goto label_165cf0;
        case 0x165cf4u: goto label_165cf4;
        case 0x165cf8u: goto label_165cf8;
        case 0x165cfcu: goto label_165cfc;
        case 0x165d00u: goto label_165d00;
        case 0x165d04u: goto label_165d04;
        case 0x165d08u: goto label_165d08;
        case 0x165d0cu: goto label_165d0c;
        case 0x165d10u: goto label_165d10;
        case 0x165d14u: goto label_165d14;
        case 0x165d18u: goto label_165d18;
        case 0x165d1cu: goto label_165d1c;
        case 0x165d20u: goto label_165d20;
        case 0x165d24u: goto label_165d24;
        case 0x165d28u: goto label_165d28;
        case 0x165d2cu: goto label_165d2c;
        case 0x165d30u: goto label_165d30;
        case 0x165d34u: goto label_165d34;
        default: break;
    }

    ctx->pc = 0x165c70u;

label_165c70:
    // 0x165c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_165c74:
    // 0x165c74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x165c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_165c78:
    // 0x165c78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_165c7c:
    // 0x165c7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165c80:
    // 0x165c80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x165c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_165c84:
    // 0x165c84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x165c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_165c88:
    // 0x165c88: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x165c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_165c8c:
    // 0x165c8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x165c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165c90:
    // 0x165c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_165c94:
    // 0x165c94: 0xc080d20  jal         func_203480
label_165c98:
    if (ctx->pc == 0x165C98u) {
        ctx->pc = 0x165C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C94u;
        // 0x165c98: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C9Cu;
        goto label_165c9c;
    }
    ctx->pc = 0x165C94u;
    SET_GPR_U32(ctx, 31, 0x165C9Cu);
    ctx->pc = 0x165C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C94u;
    // 0x165c98: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203480u, 0x165C94u, 0x165C9Cu)) {
        return;
    }
    ctx->pc = 0x165C9Cu;
label_165c9c:
    // 0x165c9c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_165ca0:
    if (ctx->pc == 0x165CA0u) {
        ctx->pc = 0x165CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C9Cu;
        // 0x165ca0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CA4u;
        goto label_165ca4;
    }
    ctx->pc = 0x165C9Cu;
    {
        const bool branch_taken_0x165c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165c9c) {
            ctx->pc = 0x165CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165C9Cu;
            // 0x165ca0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D20u;
            goto label_165d20;
        }
    }
    ctx->pc = 0x165CA4u;
label_165ca4:
    // 0x165ca4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_165ca8:
    // 0x165ca8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_165cac:
    if (ctx->pc == 0x165CACu) {
        ctx->pc = 0x165CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CA8u;
        // 0x165cac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CB0u;
        goto label_165cb0;
    }
    ctx->pc = 0x165CA8u;
    {
        const bool branch_taken_0x165ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ca8) {
            ctx->pc = 0x165CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CA8u;
            // 0x165cac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D20u;
            goto label_165d20;
        }
    }
    ctx->pc = 0x165CB0u;
label_165cb0:
    // 0x165cb0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x165cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_165cb4:
    // 0x165cb4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_165cb8:
    if (ctx->pc == 0x165CB8u) {
        ctx->pc = 0x165CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CB4u;
        // 0x165cb8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CBCu;
        goto label_165cbc;
    }
    ctx->pc = 0x165CB4u;
    {
        const bool branch_taken_0x165cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165cb4) {
            ctx->pc = 0x165CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CB4u;
            // 0x165cb8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D20u;
            goto label_165d20;
        }
    }
    ctx->pc = 0x165CBCu;
label_165cbc:
    // 0x165cbc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_165cc0:
    if (ctx->pc == 0x165CC0u) {
        ctx->pc = 0x165CC4u;
        goto label_165cc4;
    }
    ctx->pc = 0x165CBCu;
    {
        const bool branch_taken_0x165cbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x165cbc) {
            ctx->pc = 0x165CCCu;
            goto label_165ccc;
        }
    }
    ctx->pc = 0x165CC4u;
label_165cc4:
    // 0x165cc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_165cc8:
    if (ctx->pc == 0x165CC8u) {
        ctx->pc = 0x165CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC4u;
        // 0x165cc8: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CCCu;
        goto label_165ccc;
    }
    ctx->pc = 0x165CC4u;
    {
        const bool branch_taken_0x165cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC4u;
        // 0x165cc8: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cc4) {
            ctx->pc = 0x165CDCu;
            goto label_165cdc;
        }
    }
    ctx->pc = 0x165CCCu;
label_165ccc:
    // 0x165ccc: 0xc07600c  jal         func_1D8030
label_165cd0:
    if (ctx->pc == 0x165CD0u) {
        ctx->pc = 0x165CD4u;
        goto label_165cd4;
    }
    ctx->pc = 0x165CCCu;
    SET_GPR_U32(ctx, 31, 0x165CD4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x165CCCu, 0x165CD4u)) {
        return;
    }
    ctx->pc = 0x165CD4u;
label_165cd4:
    // 0x165cd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_165cd8:
    // 0x165cd8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x165cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_165cdc:
    // 0x165cdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x165cdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_165ce0:
    // 0x165ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_165ce4:
    // 0x165ce4: 0xc0591ca  jal         func_164728
label_165ce8:
    if (ctx->pc == 0x165CE8u) {
        ctx->pc = 0x165CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CE4u;
        // 0x165ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CECu;
        goto label_165cec;
    }
    ctx->pc = 0x165CE4u;
    SET_GPR_U32(ctx, 31, 0x165CECu);
    ctx->pc = 0x165CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CE4u;
    // 0x165ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164728u, 0x165CE4u, 0x165CECu)) {
        return;
    }
    ctx->pc = 0x165CECu;
label_165cec:
    // 0x165cec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x165cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_165cf0:
    // 0x165cf0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_165cf4:
    if (ctx->pc == 0x165CF4u) {
        ctx->pc = 0x165CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CF0u;
        // 0x165cf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CF8u;
        goto label_165cf8;
    }
    ctx->pc = 0x165CF0u;
    {
        const bool branch_taken_0x165cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165cf0) {
            ctx->pc = 0x165CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CF0u;
            // 0x165cf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D20u;
            goto label_165d20;
        }
    }
    ctx->pc = 0x165CF8u;
label_165cf8:
    // 0x165cf8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x165cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_165cfc:
    // 0x165cfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_165d00:
    if (ctx->pc == 0x165D00u) {
        ctx->pc = 0x165D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CFCu;
        // 0x165d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D04u;
        goto label_165d04;
    }
    ctx->pc = 0x165CFCu;
    {
        const bool branch_taken_0x165cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CFCu;
        // 0x165d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cfc) {
            ctx->pc = 0x165D14u;
            goto label_165d14;
        }
    }
    ctx->pc = 0x165D04u;
label_165d04:
    // 0x165d04: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x165d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_165d08:
    // 0x165d08: 0x40f809  jalr        $v0
label_165d0c:
    if (ctx->pc == 0x165D0Cu) {
        ctx->pc = 0x165D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D08u;
        // 0x165d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D10u;
        goto label_165d10;
    }
    ctx->pc = 0x165D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165D10u);
        ctx->pc = 0x165D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D08u;
        // 0x165d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165D08u, 0x165D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165D10u;
label_165d10:
    // 0x165d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_165d14:
    // 0x165d14: 0xc059092  jal         func_164248
label_165d18:
    if (ctx->pc == 0x165D18u) {
        ctx->pc = 0x165D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D14u;
        // 0x165d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D1Cu;
        goto label_165d1c;
    }
    ctx->pc = 0x165D14u;
    SET_GPR_U32(ctx, 31, 0x165D1Cu);
    ctx->pc = 0x165D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D14u;
    // 0x165d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x165D14u, 0x165D1Cu)) {
        return;
    }
    ctx->pc = 0x165D1Cu;
label_165d1c:
    // 0x165d1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x165d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165d20:
    // 0x165d20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165d24:
    // 0x165d24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x165d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165d28:
    // 0x165d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165d2c:
    // 0x165d2c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x165d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_165d30:
    // 0x165d30: 0x3e00008  jr          $ra
label_165d34:
    if (ctx->pc == 0x165D34u) {
        ctx->pc = 0x165D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D30u;
        // 0x165d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D38u;
        goto label_fallthrough_0x165d30;
    }
    ctx->pc = 0x165D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D30u;
        // 0x165d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x165d30:
    ctx->pc = 0x165D38u;
}
