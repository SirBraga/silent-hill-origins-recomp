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

// Function: sub_00203DD0
// Address: 0x203dd0 - 0x203ea8
void sub_00203DD0_0x203dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203DD0_0x203dd0");
#endif

    switch (ctx->pc) {
        case 0x203dd0u: goto label_203dd0;
        case 0x203dd4u: goto label_203dd4;
        case 0x203dd8u: goto label_203dd8;
        case 0x203ddcu: goto label_203ddc;
        case 0x203de0u: goto label_203de0;
        case 0x203de4u: goto label_203de4;
        case 0x203de8u: goto label_203de8;
        case 0x203decu: goto label_203dec;
        case 0x203df0u: goto label_203df0;
        case 0x203df4u: goto label_203df4;
        case 0x203df8u: goto label_203df8;
        case 0x203dfcu: goto label_203dfc;
        case 0x203e00u: goto label_203e00;
        case 0x203e04u: goto label_203e04;
        case 0x203e08u: goto label_203e08;
        case 0x203e0cu: goto label_203e0c;
        case 0x203e10u: goto label_203e10;
        case 0x203e14u: goto label_203e14;
        case 0x203e18u: goto label_203e18;
        case 0x203e1cu: goto label_203e1c;
        case 0x203e20u: goto label_203e20;
        case 0x203e24u: goto label_203e24;
        case 0x203e28u: goto label_203e28;
        case 0x203e2cu: goto label_203e2c;
        case 0x203e30u: goto label_203e30;
        case 0x203e34u: goto label_203e34;
        case 0x203e38u: goto label_203e38;
        case 0x203e3cu: goto label_203e3c;
        case 0x203e40u: goto label_203e40;
        case 0x203e44u: goto label_203e44;
        case 0x203e48u: goto label_203e48;
        case 0x203e4cu: goto label_203e4c;
        case 0x203e50u: goto label_203e50;
        case 0x203e54u: goto label_203e54;
        case 0x203e58u: goto label_203e58;
        case 0x203e5cu: goto label_203e5c;
        case 0x203e60u: goto label_203e60;
        case 0x203e64u: goto label_203e64;
        case 0x203e68u: goto label_203e68;
        case 0x203e6cu: goto label_203e6c;
        case 0x203e70u: goto label_203e70;
        case 0x203e74u: goto label_203e74;
        case 0x203e78u: goto label_203e78;
        case 0x203e7cu: goto label_203e7c;
        case 0x203e80u: goto label_203e80;
        case 0x203e84u: goto label_203e84;
        case 0x203e88u: goto label_203e88;
        case 0x203e8cu: goto label_203e8c;
        case 0x203e90u: goto label_203e90;
        case 0x203e94u: goto label_203e94;
        case 0x203e98u: goto label_203e98;
        case 0x203e9cu: goto label_203e9c;
        case 0x203ea0u: goto label_203ea0;
        case 0x203ea4u: goto label_203ea4;
        default: break;
    }

    ctx->pc = 0x203dd0u;

label_203dd0:
    // 0x203dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x203dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_203dd4:
    // 0x203dd4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x203dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_203dd8:
    // 0x203dd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x203dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_203ddc:
    // 0x203ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203de0:
    // 0x203de0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x203de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_203de4:
    // 0x203de4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x203de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203de8:
    // 0x203de8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x203de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_203dec:
    // 0x203dec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x203decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_203df0:
    // 0x203df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203df4:
    // 0x203df4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x203df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_203df8:
    // 0x203df8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_203dfc:
    if (ctx->pc == 0x203DFCu) {
        ctx->pc = 0x203DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DF8u;
        // 0x203dfc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E00u;
        goto label_203e00;
    }
    ctx->pc = 0x203DF8u;
    {
        const bool branch_taken_0x203df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DF8u;
        // 0x203dfc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203df8) {
            ctx->pc = 0x203E0Cu;
            goto label_203e0c;
        }
    }
    ctx->pc = 0x203E00u;
label_203e00:
    // 0x203e00: 0xc080f74  jal         func_203DD0
label_203e04:
    if (ctx->pc == 0x203E04u) {
        ctx->pc = 0x203E08u;
        goto label_203e08;
    }
    ctx->pc = 0x203E00u;
    SET_GPR_U32(ctx, 31, 0x203E08u);
    ctx->pc = 0x203DD0u;
    goto label_203dd0;
    ctx->pc = 0x203E08u;
label_203e08:
    // 0x203e08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x203e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203e0c:
    // 0x203e0c: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
label_203e10:
    if (ctx->pc == 0x203E10u) {
        ctx->pc = 0x203E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E0Cu;
        // 0x203e10: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E14u;
        goto label_203e14;
    }
    ctx->pc = 0x203E0Cu;
    {
        const bool branch_taken_0x203e0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x203E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E0Cu;
        // 0x203e10: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e0c) {
            ctx->pc = 0x203E84u;
            goto label_203e84;
        }
    }
    ctx->pc = 0x203E14u;
label_203e14:
    // 0x203e14: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_203e18:
    if (ctx->pc == 0x203E18u) {
        ctx->pc = 0x203E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E14u;
        // 0x203e18: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E1Cu;
        goto label_203e1c;
    }
    ctx->pc = 0x203E14u;
    {
        const bool branch_taken_0x203e14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E14u;
        // 0x203e18: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e14) {
            ctx->pc = 0x203E84u;
            goto label_203e84;
        }
    }
    ctx->pc = 0x203E1Cu;
label_203e1c:
    // 0x203e1c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x203e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203e20:
    // 0x203e20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203e24:
    // 0x203e24: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x203e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_203e28:
    // 0x203e28: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x203e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_203e2c:
    // 0x203e2c: 0x40f809  jalr        $v0
label_203e30:
    if (ctx->pc == 0x203E30u) {
        ctx->pc = 0x203E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E2Cu;
        // 0x203e30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E34u;
        goto label_203e34;
    }
    ctx->pc = 0x203E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203E34u);
        ctx->pc = 0x203E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E2Cu;
        // 0x203e30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203E2Cu, 0x203E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203E34u;
label_203e34:
    // 0x203e34: 0x5454000f  bnel        $v0, $s4, . + 4 + (0xF << 2)
label_203e38:
    if (ctx->pc == 0x203E38u) {
        ctx->pc = 0x203E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E34u;
        // 0x203e38: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E3Cu;
        goto label_203e3c;
    }
    ctx->pc = 0x203E34u;
    {
        const bool branch_taken_0x203e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x203e34) {
            ctx->pc = 0x203E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203E34u;
            // 0x203e38: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E74u;
            goto label_203e74;
        }
    }
    ctx->pc = 0x203E3Cu;
label_203e3c:
    // 0x203e3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x203e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203e40:
    // 0x203e40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203e44:
    // 0x203e44: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_203e48:
    // 0x203e48: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x203e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_203e4c:
    // 0x203e4c: 0x40f809  jalr        $v0
label_203e50:
    if (ctx->pc == 0x203E50u) {
        ctx->pc = 0x203E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E4Cu;
        // 0x203e50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E54u;
        goto label_203e54;
    }
    ctx->pc = 0x203E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203E54u);
        ctx->pc = 0x203E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E4Cu;
        // 0x203e50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203E4Cu, 0x203E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203E54u;
label_203e54:
    // 0x203e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203e58:
    // 0x203e58: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_203e5c:
    if (ctx->pc == 0x203E5Cu) {
        ctx->pc = 0x203E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E58u;
        // 0x203e5c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E60u;
        goto label_203e60;
    }
    ctx->pc = 0x203E58u;
    {
        const bool branch_taken_0x203e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e58) {
            ctx->pc = 0x203E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203E58u;
            // 0x203e5c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E74u;
            goto label_203e74;
        }
    }
    ctx->pc = 0x203E60u;
label_203e60:
    // 0x203e60: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_203e64:
    // 0x203e64: 0xc0c5c96  jal         func_317258
label_203e68:
    if (ctx->pc == 0x203E68u) {
        ctx->pc = 0x203E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E64u;
        // 0x203e68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E6Cu;
        goto label_203e6c;
    }
    ctx->pc = 0x203E64u;
    SET_GPR_U32(ctx, 31, 0x203E6Cu);
    ctx->pc = 0x203E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203E64u;
    // 0x203e68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x203E64u, 0x203E6Cu)) {
        return;
    }
    ctx->pc = 0x203E6Cu;
label_203e6c:
    // 0x203e6c: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x203e6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
label_203e70:
    // 0x203e70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_203e74:
    // 0x203e74: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_203e78:
    if (ctx->pc == 0x203E78u) {
        ctx->pc = 0x203E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E74u;
        // 0x203e78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E7Cu;
        goto label_203e7c;
    }
    ctx->pc = 0x203E74u;
    {
        const bool branch_taken_0x203e74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x203E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E74u;
        // 0x203e78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e74) {
            ctx->pc = 0x203E84u;
            goto label_203e84;
        }
    }
    ctx->pc = 0x203E7Cu;
label_203e7c:
    // 0x203e7c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
label_203e80:
    if (ctx->pc == 0x203E80u) {
        ctx->pc = 0x203E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E7Cu;
        // 0x203e80: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E84u;
        goto label_203e84;
    }
    ctx->pc = 0x203E7Cu;
    {
        const bool branch_taken_0x203e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203e7c) {
            ctx->pc = 0x203E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203E7Cu;
            // 0x203e80: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203e20;
        }
    }
    ctx->pc = 0x203E84u;
label_203e84:
    // 0x203e84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x203e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203e88:
    // 0x203e88: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x203e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_203e8c:
    // 0x203e8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x203e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_203e90:
    // 0x203e90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x203e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203e94:
    // 0x203e94: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x203e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203e98:
    // 0x203e98: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x203e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203e9c:
    // 0x203e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203ea0:
    // 0x203ea0: 0x3e00008  jr          $ra
label_203ea4:
    if (ctx->pc == 0x203EA4u) {
        ctx->pc = 0x203EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EA0u;
        // 0x203ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203EA8u;
        goto label_fallthrough_0x203ea0;
    }
    ctx->pc = 0x203EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EA0u;
        // 0x203ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203ea0:
    ctx->pc = 0x203EA8u;
}
