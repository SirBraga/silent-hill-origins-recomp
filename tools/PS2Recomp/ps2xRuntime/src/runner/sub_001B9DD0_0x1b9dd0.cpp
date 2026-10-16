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

// Function: sub_001B9DD0
// Address: 0x1b9dd0 - 0x1b9ea8
void sub_001B9DD0_0x1b9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9DD0_0x1b9dd0");
#endif

    switch (ctx->pc) {
        case 0x1b9dd0u: goto label_1b9dd0;
        case 0x1b9dd4u: goto label_1b9dd4;
        case 0x1b9dd8u: goto label_1b9dd8;
        case 0x1b9ddcu: goto label_1b9ddc;
        case 0x1b9de0u: goto label_1b9de0;
        case 0x1b9de4u: goto label_1b9de4;
        case 0x1b9de8u: goto label_1b9de8;
        case 0x1b9decu: goto label_1b9dec;
        case 0x1b9df0u: goto label_1b9df0;
        case 0x1b9df4u: goto label_1b9df4;
        case 0x1b9df8u: goto label_1b9df8;
        case 0x1b9dfcu: goto label_1b9dfc;
        case 0x1b9e00u: goto label_1b9e00;
        case 0x1b9e04u: goto label_1b9e04;
        case 0x1b9e08u: goto label_1b9e08;
        case 0x1b9e0cu: goto label_1b9e0c;
        case 0x1b9e10u: goto label_1b9e10;
        case 0x1b9e14u: goto label_1b9e14;
        case 0x1b9e18u: goto label_1b9e18;
        case 0x1b9e1cu: goto label_1b9e1c;
        case 0x1b9e20u: goto label_1b9e20;
        case 0x1b9e24u: goto label_1b9e24;
        case 0x1b9e28u: goto label_1b9e28;
        case 0x1b9e2cu: goto label_1b9e2c;
        case 0x1b9e30u: goto label_1b9e30;
        case 0x1b9e34u: goto label_1b9e34;
        case 0x1b9e38u: goto label_1b9e38;
        case 0x1b9e3cu: goto label_1b9e3c;
        case 0x1b9e40u: goto label_1b9e40;
        case 0x1b9e44u: goto label_1b9e44;
        case 0x1b9e48u: goto label_1b9e48;
        case 0x1b9e4cu: goto label_1b9e4c;
        case 0x1b9e50u: goto label_1b9e50;
        case 0x1b9e54u: goto label_1b9e54;
        case 0x1b9e58u: goto label_1b9e58;
        case 0x1b9e5cu: goto label_1b9e5c;
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e68u: goto label_1b9e68;
        case 0x1b9e6cu: goto label_1b9e6c;
        case 0x1b9e70u: goto label_1b9e70;
        case 0x1b9e74u: goto label_1b9e74;
        case 0x1b9e78u: goto label_1b9e78;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9e80u: goto label_1b9e80;
        case 0x1b9e84u: goto label_1b9e84;
        case 0x1b9e88u: goto label_1b9e88;
        case 0x1b9e8cu: goto label_1b9e8c;
        case 0x1b9e90u: goto label_1b9e90;
        case 0x1b9e94u: goto label_1b9e94;
        case 0x1b9e98u: goto label_1b9e98;
        case 0x1b9e9cu: goto label_1b9e9c;
        case 0x1b9ea0u: goto label_1b9ea0;
        case 0x1b9ea4u: goto label_1b9ea4;
        default: break;
    }

    ctx->pc = 0x1b9dd0u;

label_1b9dd0:
    // 0x1b9dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b9dd4:
    // 0x1b9dd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b9dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b9dd8:
    // 0x1b9dd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b9ddc:
    // 0x1b9ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9de0:
    // 0x1b9de0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b9de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1b9de4:
    // 0x1b9de4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b9de8:
    // 0x1b9de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b9dec:
    // 0x1b9dec: 0xc06ce22  jal         func_1B3888
label_1b9df0:
    if (ctx->pc == 0x1B9DF0u) {
        ctx->pc = 0x1B9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DECu;
        // 0x1b9df0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DF4u;
        goto label_1b9df4;
    }
    ctx->pc = 0x1B9DECu;
    SET_GPR_U32(ctx, 31, 0x1B9DF4u);
    ctx->pc = 0x1B9DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DECu;
    // 0x1b9df0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3888u, 0x1B9DECu, 0x1B9DF4u)) {
        return;
    }
    ctx->pc = 0x1B9DF4u;
label_1b9df4:
    // 0x1b9df4: 0x52220006  beql        $s1, $v0, . + 4 + (0x6 << 2)
label_1b9df8:
    if (ctx->pc == 0x1B9DF8u) {
        ctx->pc = 0x1B9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DF4u;
        // 0x1b9df8: 0x8e020274  lw          $v0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DFCu;
        goto label_1b9dfc;
    }
    ctx->pc = 0x1B9DF4u;
    {
        const bool branch_taken_0x1b9df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9df4) {
            ctx->pc = 0x1B9DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9DF4u;
            // 0x1b9df8: 0x8e020274  lw          $v0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9E10u;
            goto label_1b9e10;
        }
    }
    ctx->pc = 0x1B9DFCu;
label_1b9dfc:
    // 0x1b9dfc: 0xc06ce26  jal         func_1B3898
label_1b9e00:
    if (ctx->pc == 0x1B9E00u) {
        ctx->pc = 0x1B9E04u;
        goto label_1b9e04;
    }
    ctx->pc = 0x1B9DFCu;
    SET_GPR_U32(ctx, 31, 0x1B9E04u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1B9DFCu, 0x1B9E04u)) {
        return;
    }
    ctx->pc = 0x1B9E04u;
label_1b9e04:
    // 0x1b9e04: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
label_1b9e08:
    if (ctx->pc == 0x1B9E08u) {
        ctx->pc = 0x1B9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E04u;
        // 0x1b9e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E0Cu;
        goto label_1b9e0c;
    }
    ctx->pc = 0x1B9E04u;
    {
        const bool branch_taken_0x1b9e04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E04u;
        // 0x1b9e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e04) {
            ctx->pc = 0x1B9E80u;
            goto label_1b9e80;
        }
    }
    ctx->pc = 0x1B9E0Cu;
label_1b9e0c:
    // 0x1b9e0c: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x1b9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1b9e10:
    // 0x1b9e10: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_1b9e14:
    if (ctx->pc == 0x1B9E14u) {
        ctx->pc = 0x1B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E10u;
        // 0x1b9e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E18u;
        goto label_1b9e18;
    }
    ctx->pc = 0x1B9E10u;
    {
        const bool branch_taken_0x1b9e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9e10) {
            ctx->pc = 0x1B9E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9E10u;
            // 0x1b9e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9E80u;
            goto label_1b9e80;
        }
    }
    ctx->pc = 0x1B9E18u;
label_1b9e18:
    // 0x1b9e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9e1c:
    // 0x1b9e1c: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1b9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_1b9e20:
    // 0x1b9e20: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1b9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_1b9e24:
    // 0x1b9e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e28:
    // 0x1b9e28: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1b9e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
label_1b9e2c:
    // 0x1b9e2c: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1b9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b9e30:
    // 0x1b9e30: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b9e34:
    // 0x1b9e34: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b9e34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b9e38:
    // 0x1b9e38: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b9e3c:
    // 0x1b9e3c: 0x60f809  jalr        $v1
label_1b9e40:
    if (ctx->pc == 0x1B9E40u) {
        ctx->pc = 0x1B9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E3Cu;
        // 0x1b9e40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E44u;
        goto label_1b9e44;
    }
    ctx->pc = 0x1B9E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9E44u);
        ctx->pc = 0x1B9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E3Cu;
        // 0x1b9e40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9E3Cu, 0x1B9E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9E44u;
label_1b9e44:
    // 0x1b9e44: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1b9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1b9e48:
    // 0x1b9e48: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1b9e4c:
    // 0x1b9e4c: 0x8c8443b8  lw          $a0, 0x43B8($a0)
    ctx->pc = 0x1b9e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17336)));
label_1b9e50:
    // 0x1b9e50: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1b9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1b9e54:
    // 0x1b9e54: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_1b9e58:
    if (ctx->pc == 0x1B9E58u) {
        ctx->pc = 0x1B9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E54u;
        // 0x1b9e58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E5Cu;
        goto label_1b9e5c;
    }
    ctx->pc = 0x1B9E54u;
    {
        const bool branch_taken_0x1b9e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E54u;
        // 0x1b9e58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e54) {
            ctx->pc = 0x1B9E90u;
            goto label_1b9e90;
        }
    }
    ctx->pc = 0x1B9E5Cu;
label_1b9e5c:
    // 0x1b9e5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b9e60:
    // 0x1b9e60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b9e64:
    if (ctx->pc == 0x1B9E64u) {
        ctx->pc = 0x1B9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E60u;
        // 0x1b9e64: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E68u;
        goto label_1b9e68;
    }
    ctx->pc = 0x1B9E60u;
    {
        const bool branch_taken_0x1b9e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E60u;
        // 0x1b9e64: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e60) {
            ctx->pc = 0x1B9E94u;
            goto label_1b9e94;
        }
    }
    ctx->pc = 0x1B9E68u;
label_1b9e68:
    // 0x1b9e68: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b9e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1b9e6c:
    // 0x1b9e6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e70:
    // 0x1b9e70: 0xc07fd18  jal         func_1FF460
label_1b9e74:
    if (ctx->pc == 0x1B9E74u) {
        ctx->pc = 0x1B9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E70u;
        // 0x1b9e74: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E78u;
        goto label_1b9e78;
    }
    ctx->pc = 0x1B9E70u;
    SET_GPR_U32(ctx, 31, 0x1B9E78u);
    ctx->pc = 0x1B9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E70u;
    // 0x1b9e74: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B9E70u, 0x1B9E78u)) {
        return;
    }
    ctx->pc = 0x1B9E78u;
label_1b9e78:
    // 0x1b9e78: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b9e7c:
    if (ctx->pc == 0x1B9E7Cu) {
        ctx->pc = 0x1B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E78u;
        // 0x1b9e7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E80u;
        goto label_1b9e80;
    }
    ctx->pc = 0x1B9E78u;
    {
        const bool branch_taken_0x1b9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E78u;
        // 0x1b9e7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e78) {
            ctx->pc = 0x1B9E90u;
            goto label_1b9e90;
        }
    }
    ctx->pc = 0x1B9E80u;
label_1b9e80:
    // 0x1b9e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e84:
    // 0x1b9e84: 0xc06ba6c  jal         func_1AE9B0
label_1b9e88:
    if (ctx->pc == 0x1B9E88u) {
        ctx->pc = 0x1B9E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E84u;
        // 0x1b9e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E8Cu;
        goto label_1b9e8c;
    }
    ctx->pc = 0x1B9E84u;
    SET_GPR_U32(ctx, 31, 0x1B9E8Cu);
    ctx->pc = 0x1B9E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E84u;
    // 0x1b9e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1B9E84u, 0x1B9E8Cu)) {
        return;
    }
    ctx->pc = 0x1B9E8Cu;
label_1b9e8c:
    // 0x1b9e8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b9e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9e90:
    // 0x1b9e90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b9e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9e94:
    // 0x1b9e94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9e98:
    // 0x1b9e98: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b9e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b9e9c:
    // 0x1b9e9c: 0x3e00008  jr          $ra
label_1b9ea0:
    if (ctx->pc == 0x1B9EA0u) {
        ctx->pc = 0x1B9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E9Cu;
        // 0x1b9ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EA4u;
        goto label_1b9ea4;
    }
    ctx->pc = 0x1B9E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E9Cu;
        // 0x1b9ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9EA4u;
label_1b9ea4:
    // 0x1b9ea4: 0x0  nop
    ctx->pc = 0x1b9ea4u;
    // NOP
    ctx->pc = 0x1b9ea8u;
}
