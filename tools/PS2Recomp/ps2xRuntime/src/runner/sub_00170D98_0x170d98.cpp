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

// Function: sub_00170D98
// Address: 0x170d98 - 0x170ef0
void sub_00170D98_0x170d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170D98_0x170d98");
#endif

    switch (ctx->pc) {
        case 0x170db4u: goto label_170db4;
        case 0x170dc8u: goto label_170dc8;
        case 0x170de0u: goto label_170de0;
        case 0x170e24u: goto label_170e24;
        case 0x170e3cu: goto label_170e3c;
        case 0x170e54u: goto label_170e54;
        case 0x170e6cu: goto label_170e6c;
        case 0x170e84u: goto label_170e84;
        case 0x170e98u: goto label_170e98;
        case 0x170ec8u: goto label_170ec8;
        default: break;
    }

    ctx->pc = 0x170d98u;

    // 0x170d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x170d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x170d9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x170d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x170da0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x170da4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x170da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170dac: 0xc05c4c2  jal         func_171308
    ctx->pc = 0x170DACu;
    SET_GPR_U32(ctx, 31, 0x170DB4u);
    ctx->pc = 0x170DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170DACu;
    // 0x170db0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171308u, 0x170DACu, 0x170DB4u)) {
        return;
    }
    ctx->pc = 0x170DB4u;
label_170db4:
    // 0x170db4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x170db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x170db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170dbc: 0x8c46f760  lw          $a2, -0x8A0($v0)
    ctx->pc = 0x170dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF760u));
    // 0x170dc0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x170DC0u;
    SET_GPR_U32(ctx, 31, 0x170DC8u);
    ctx->pc = 0x170DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170DC0u;
    // 0x170dc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x170DC0u, 0x170DC8u)) {
        return;
    }
    ctx->pc = 0x170DC8u;
label_170dc8:
    // 0x170dc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170dd0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x170DD0u;
    {
        const bool branch_taken_0x170dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DD0u;
        // 0x170dd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170dd0) {
            ctx->pc = 0x170EDCu;
            goto label_170edc;
        }
    }
    ctx->pc = 0x170DD8u;
    // 0x170dd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x170dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ddc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_170de0:
    // 0x170de0: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x170de0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x170de4: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x170DE4u;
    {
        const bool branch_taken_0x170de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DE4u;
        // 0x170de8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170de4) {
            ctx->pc = 0x170EACu;
            goto label_170eac;
        }
    }
    ctx->pc = 0x170DECu;
    // 0x170dec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170df0: 0x24425430  addiu       $v0, $v0, 0x5430
    ctx->pc = 0x170df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21552));
    // 0x170df4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170df8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x170df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170dfc: 0x800008  jr          $a0
    ctx->pc = 0x170DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170E04u: goto label_170e04;
            case 0x170E14u: goto label_170e14;
            case 0x170E2Cu: goto label_170e2c;
            case 0x170E44u: goto label_170e44;
            case 0x170E5Cu: goto label_170e5c;
            case 0x170E74u: goto label_170e74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170DFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x170E04u;
label_170e04:
    // 0x170e04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x170e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170e0c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x170E0Cu;
    {
        const bool branch_taken_0x170e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E0Cu;
        // 0x170e10: 0xae230120  sw          $v1, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e0c) {
            ctx->pc = 0x170EACu;
            goto label_170eac;
        }
    }
    ctx->pc = 0x170E14u;
label_170e14:
    // 0x170e14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e1c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x170E1Cu;
    SET_GPR_U32(ctx, 31, 0x170E24u);
    ctx->pc = 0x170E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E1Cu;
    // 0x170e20: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x170E1Cu, 0x170E24u)) {
        return;
    }
    ctx->pc = 0x170E24u;
label_170e24:
    // 0x170e24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x170E24u;
    {
        const bool branch_taken_0x170e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E24u;
        // 0x170e28: 0xae22012c  sw          $v0, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e24) {
            ctx->pc = 0x170E88u;
            goto label_170e88;
        }
    }
    ctx->pc = 0x170E2Cu;
label_170e2c:
    // 0x170e2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x170e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e34: 0xc081b56  jal         func_206D58
    ctx->pc = 0x170E34u;
    SET_GPR_U32(ctx, 31, 0x170E3Cu);
    ctx->pc = 0x170E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E34u;
    // 0x170e38: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x170E34u, 0x170E3Cu)) {
        return;
    }
    ctx->pc = 0x170E3Cu;
label_170e3c:
    // 0x170e3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x170E3Cu;
    {
        const bool branch_taken_0x170e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E3Cu;
        // 0x170e40: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e3c) {
            ctx->pc = 0x170E88u;
            goto label_170e88;
        }
    }
    ctx->pc = 0x170E44u;
label_170e44:
    // 0x170e44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x170e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e4c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x170E4Cu;
    SET_GPR_U32(ctx, 31, 0x170E54u);
    ctx->pc = 0x170E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E4Cu;
    // 0x170e50: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x170E4Cu, 0x170E54u)) {
        return;
    }
    ctx->pc = 0x170E54u;
label_170e54:
    // 0x170e54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x170E54u;
    {
        const bool branch_taken_0x170e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E54u;
        // 0x170e58: 0xae220134  sw          $v0, 0x134($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e54) {
            ctx->pc = 0x170E88u;
            goto label_170e88;
        }
    }
    ctx->pc = 0x170E5Cu;
label_170e5c:
    // 0x170e5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x170e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e64: 0xc081b56  jal         func_206D58
    ctx->pc = 0x170E64u;
    SET_GPR_U32(ctx, 31, 0x170E6Cu);
    ctx->pc = 0x170E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E64u;
    // 0x170e68: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x170E64u, 0x170E6Cu)) {
        return;
    }
    ctx->pc = 0x170E6Cu;
label_170e6c:
    // 0x170e6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x170E6Cu;
    {
        const bool branch_taken_0x170e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E6Cu;
        // 0x170e70: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e6c) {
            ctx->pc = 0x170E88u;
            goto label_170e88;
        }
    }
    ctx->pc = 0x170E74u;
label_170e74:
    // 0x170e74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x170e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e7c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x170E7Cu;
    SET_GPR_U32(ctx, 31, 0x170E84u);
    ctx->pc = 0x170E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E7Cu;
    // 0x170e80: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x170E7Cu, 0x170E84u)) {
        return;
    }
    ctx->pc = 0x170E84u;
label_170e84:
    // 0x170e84: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x170e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
label_170e88:
    // 0x170e88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170E88u;
    {
        const bool branch_taken_0x170e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E88u;
        // 0x170e8c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e88) {
            ctx->pc = 0x170EB0u;
            goto label_170eb0;
        }
    }
    ctx->pc = 0x170E90u;
    // 0x170e90: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x170E90u;
    SET_GPR_U32(ctx, 31, 0x170E98u);
    ctx->pc = 0x170E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E90u;
    // 0x170e94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x170E90u, 0x170E98u)) {
        return;
    }
    ctx->pc = 0x170E98u;
label_170e98:
    // 0x170e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170E98u;
    {
        const bool branch_taken_0x170e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E98u;
        // 0x170e9c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e98) {
            ctx->pc = 0x170EB0u;
            goto label_170eb0;
        }
    }
    ctx->pc = 0x170EA0u;
    // 0x170ea0: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x170ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x170ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x170ea8: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x170ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_170eac:
    // 0x170eac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_170eb0:
    // 0x170eb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x170eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170eb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170eb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170ebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170ec0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x170EC0u;
    SET_GPR_U32(ctx, 31, 0x170EC8u);
    ctx->pc = 0x170EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EC0u;
    // 0x170ec4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x170EC0u, 0x170EC8u)) {
        return;
    }
    ctx->pc = 0x170EC8u;
label_170ec8:
    // 0x170ec8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x170ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x170eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170ed0: 0x5460ffc3  bnel        $v1, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x170ED0u;
    {
        const bool branch_taken_0x170ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170ed0) {
            ctx->pc = 0x170ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170ED0u;
            // 0x170ed4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170de0;
        }
    }
    ctx->pc = 0x170ED8u;
    // 0x170ed8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x170ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_170edc:
    // 0x170edc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x170edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x170EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EE4u;
        // 0x170ee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170EECu;
    // 0x170eec: 0x0  nop
    ctx->pc = 0x170eecu;
    // NOP
    ctx->pc = 0x170ef0u;
}
