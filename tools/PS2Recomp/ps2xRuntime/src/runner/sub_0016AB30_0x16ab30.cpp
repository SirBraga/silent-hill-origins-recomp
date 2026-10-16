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

// Function: sub_0016AB30
// Address: 0x16ab30 - 0x16ac68
void sub_0016AB30_0x16ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AB30_0x16ab30");
#endif

    switch (ctx->pc) {
        case 0x16ab4cu: goto label_16ab4c;
        case 0x16ab60u: goto label_16ab60;
        case 0x16ab78u: goto label_16ab78;
        case 0x16abc4u: goto label_16abc4;
        case 0x16abf8u: goto label_16abf8;
        case 0x16ac28u: goto label_16ac28;
        case 0x16ac44u: goto label_16ac44;
        default: break;
    }

    ctx->pc = 0x16ab30u;

    // 0x16ab30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ab34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16ab38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16ab3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16ab3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ab44: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16AB44u;
    SET_GPR_U32(ctx, 31, 0x16AB4Cu);
    ctx->pc = 0x16AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB44u;
    // 0x16ab48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16AB44u, 0x16AB4Cu)) {
        return;
    }
    ctx->pc = 0x16AB4Cu;
label_16ab4c:
    // 0x16ab4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16ab50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab54: 0x8c46f658  lw          $a2, -0x9A8($v0)
    ctx->pc = 0x16ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF658u));
    // 0x16ab58: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16AB58u;
    SET_GPR_U32(ctx, 31, 0x16AB60u);
    ctx->pc = 0x16AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB58u;
    // 0x16ab5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16AB58u, 0x16AB60u)) {
        return;
    }
    ctx->pc = 0x16AB60u;
label_16ab60:
    // 0x16ab60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ab64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ab68: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x16AB68u;
    {
        const bool branch_taken_0x16ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB68u;
        // 0x16ab6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab68) {
            ctx->pc = 0x16AC58u;
            goto label_16ac58;
        }
    }
    ctx->pc = 0x16AB70u;
    // 0x16ab70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ab74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16ab78:
    // 0x16ab78: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x16ab78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x16ab7c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x16AB7Cu;
    {
        const bool branch_taken_0x16ab7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB7Cu;
        // 0x16ab80: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab7c) {
            ctx->pc = 0x16AC28u;
            goto label_16ac28;
        }
    }
    ctx->pc = 0x16AB84u;
    // 0x16ab84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ab88: 0x24424650  addiu       $v0, $v0, 0x4650
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18000));
    // 0x16ab8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ab94: 0x800008  jr          $a0
    ctx->pc = 0x16AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AB9Cu: goto label_16ab9c;
            case 0x16ABACu: goto label_16abac;
            case 0x16ABCCu: goto label_16abcc;
            case 0x16ABD8u: goto label_16abd8;
            case 0x16ABE4u: goto label_16abe4;
            case 0x16AC00u: goto label_16ac00;
            case 0x16AC10u: goto label_16ac10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16AB9Cu;
label_16ab9c:
    // 0x16ab9c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aba0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16aba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16ABA4u;
    {
        const bool branch_taken_0x16aba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABA4u;
        // 0x16aba8: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aba4) {
            ctx->pc = 0x16ABB8u;
            goto label_16abb8;
        }
    }
    ctx->pc = 0x16ABACu;
label_16abac:
    // 0x16abac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16abacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16abb0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16abb4: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x16abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_16abb8:
    // 0x16abb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16abb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abbc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16ABBCu;
    SET_GPR_U32(ctx, 31, 0x16ABC4u);
    ctx->pc = 0x16ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABBCu;
    // 0x16abc0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16ABBCu, 0x16ABC4u)) {
        return;
    }
    ctx->pc = 0x16ABC4u;
label_16abc4:
    // 0x16abc4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16ABC4u;
    {
        const bool branch_taken_0x16abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABC4u;
        // 0x16abc8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abc4) {
            ctx->pc = 0x16AC2Cu;
            goto label_16ac2c;
        }
    }
    ctx->pc = 0x16ABCCu;
label_16abcc:
    // 0x16abcc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16abccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16abd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16ABD0u;
    {
        const bool branch_taken_0x16abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABD0u;
        // 0x16abd4: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abd0) {
            ctx->pc = 0x16ABECu;
            goto label_16abec;
        }
    }
    ctx->pc = 0x16ABD8u;
label_16abd8:
    // 0x16abd8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16abdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16ABDCu;
    {
        const bool branch_taken_0x16abdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABDCu;
        // 0x16abe0: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abdc) {
            ctx->pc = 0x16ABECu;
            goto label_16abec;
        }
    }
    ctx->pc = 0x16ABE4u;
label_16abe4:
    // 0x16abe4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16abe8: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_16abec:
    // 0x16abec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16abecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abf0: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16ABF0u;
    SET_GPR_U32(ctx, 31, 0x16ABF8u);
    ctx->pc = 0x16ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABF0u;
    // 0x16abf4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16ABF0u, 0x16ABF8u)) {
        return;
    }
    ctx->pc = 0x16ABF8u;
label_16abf8:
    // 0x16abf8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16ABF8u;
    {
        const bool branch_taken_0x16abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABF8u;
        // 0x16abfc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abf8) {
            ctx->pc = 0x16AC2Cu;
            goto label_16ac2c;
        }
    }
    ctx->pc = 0x16AC00u;
label_16ac00:
    // 0x16ac00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac04: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ac08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16AC08u;
    {
        const bool branch_taken_0x16ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC08u;
        // 0x16ac0c: 0xae230074  sw          $v1, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac08) {
            ctx->pc = 0x16AC28u;
            goto label_16ac28;
        }
    }
    ctx->pc = 0x16AC10u;
label_16ac10:
    // 0x16ac10: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac14: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16ac18: 0x2625006c  addiu       $a1, $s1, 0x6C
    ctx->pc = 0x16ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x16ac1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16ac1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac20: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16AC20u;
    SET_GPR_U32(ctx, 31, 0x16AC28u);
    ctx->pc = 0x16AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC20u;
    // 0x16ac24: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16AC20u, 0x16AC28u)) {
        return;
    }
    ctx->pc = 0x16AC28u;
label_16ac28:
    // 0x16ac28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ac2c:
    // 0x16ac2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16ac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ac34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ac38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ac3c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16AC3Cu;
    SET_GPR_U32(ctx, 31, 0x16AC44u);
    ctx->pc = 0x16AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC3Cu;
    // 0x16ac40: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16AC3Cu, 0x16AC44u)) {
        return;
    }
    ctx->pc = 0x16AC44u;
label_16ac44:
    // 0x16ac44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ac4c: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x16AC4Cu;
    {
        const bool branch_taken_0x16ac4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac4c) {
            ctx->pc = 0x16AC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC4Cu;
            // 0x16ac50: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ab78;
        }
    }
    ctx->pc = 0x16AC54u;
    // 0x16ac54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16ac54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ac58:
    // 0x16ac58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ac58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ac5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ac5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ac60: 0x3e00008  jr          $ra
    ctx->pc = 0x16AC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC60u;
        // 0x16ac64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AC68u;
}
