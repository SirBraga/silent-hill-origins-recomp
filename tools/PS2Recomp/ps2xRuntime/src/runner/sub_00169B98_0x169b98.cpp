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

// Function: sub_00169B98
// Address: 0x169b98 - 0x169cb0
void sub_00169B98_0x169b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169B98_0x169b98");
#endif

    switch (ctx->pc) {
        case 0x169bb4u: goto label_169bb4;
        case 0x169bc8u: goto label_169bc8;
        case 0x169be0u: goto label_169be0;
        case 0x169c28u: goto label_169c28;
        case 0x169c48u: goto label_169c48;
        case 0x169c88u: goto label_169c88;
        default: break;
    }

    ctx->pc = 0x169b98u;

    // 0x169b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169b9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x169b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x169ba0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x169ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x169ba4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x169ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169bac: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x169BACu;
    SET_GPR_U32(ctx, 31, 0x169BB4u);
    ctx->pc = 0x169BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BACu;
    // 0x169bb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x169BACu, 0x169BB4u)) {
        return;
    }
    ctx->pc = 0x169BB4u;
label_169bb4:
    // 0x169bb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x169bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x169bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bbc: 0x8c46f628  lw          $a2, -0x9D8($v0)
    ctx->pc = 0x169bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF628u));
    // 0x169bc0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x169BC0u;
    SET_GPR_U32(ctx, 31, 0x169BC8u);
    ctx->pc = 0x169BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BC0u;
    // 0x169bc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x169BC0u, 0x169BC8u)) {
        return;
    }
    ctx->pc = 0x169BC8u;
label_169bc8:
    // 0x169bc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x169bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x169bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169bd0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x169BD0u;
    {
        const bool branch_taken_0x169bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD0u;
        // 0x169bd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bd0) {
            ctx->pc = 0x169C9Cu;
            goto label_169c9c;
        }
    }
    ctx->pc = 0x169BD8u;
    // 0x169bd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bdc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x169bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_169be0:
    // 0x169be0: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x169be0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x169be4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x169BE4u;
    {
        const bool branch_taken_0x169be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BE4u;
        // 0x169be8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169be4) {
            ctx->pc = 0x169C6Cu;
            goto label_169c6c;
        }
    }
    ctx->pc = 0x169BECu;
    // 0x169bec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x169becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169bf0: 0x244243c0  addiu       $v0, $v0, 0x43C0
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x169bf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169bf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169bfc: 0x800008  jr          $a0
    ctx->pc = 0x169BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169C04u: goto label_169c04;
            case 0x169C14u: goto label_169c14;
            case 0x169C30u: goto label_169c30;
            case 0x169C50u: goto label_169c50;
            case 0x169C60u: goto label_169c60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169BFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x169C04u;
label_169c04:
    // 0x169c04: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x169c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c08: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x169c0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x169C0Cu;
    {
        const bool branch_taken_0x169c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C0Cu;
        // 0x169c10: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c0c) {
            ctx->pc = 0x169C3Cu;
            goto label_169c3c;
        }
    }
    ctx->pc = 0x169C14u;
label_169c14:
    // 0x169c14: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c18: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x169c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x169c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c20: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x169C20u;
    SET_GPR_U32(ctx, 31, 0x169C28u);
    ctx->pc = 0x169C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C20u;
    // 0x169c24: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x169C20u, 0x169C28u)) {
        return;
    }
    ctx->pc = 0x169C28u;
label_169c28:
    // 0x169c28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x169C28u;
    {
        const bool branch_taken_0x169c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C28u;
        // 0x169c2c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c28) {
            ctx->pc = 0x169C70u;
            goto label_169c70;
        }
    }
    ctx->pc = 0x169C30u;
label_169c30:
    // 0x169c30: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x169c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c34: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x169c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x169c38: 0x26250054  addiu       $a1, $s1, 0x54
    ctx->pc = 0x169c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_169c3c:
    // 0x169c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c40: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x169C40u;
    SET_GPR_U32(ctx, 31, 0x169C48u);
    ctx->pc = 0x169C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C40u;
    // 0x169c44: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x169C40u, 0x169C48u)) {
        return;
    }
    ctx->pc = 0x169C48u;
label_169c48:
    // 0x169c48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x169C48u;
    {
        const bool branch_taken_0x169c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C48u;
        // 0x169c4c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c48) {
            ctx->pc = 0x169C70u;
            goto label_169c70;
        }
    }
    ctx->pc = 0x169C50u;
label_169c50:
    // 0x169c50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x169c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x169c58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169C58u;
    {
        const bool branch_taken_0x169c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C58u;
        // 0x169c5c: 0xae23005c  sw          $v1, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c58) {
            ctx->pc = 0x169C6Cu;
            goto label_169c6c;
        }
    }
    ctx->pc = 0x169C60u;
label_169c60:
    // 0x169c60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c64: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x169c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x169c68: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x169c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_169c6c:
    // 0x169c6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x169c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_169c70:
    // 0x169c70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x169c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169c78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169c80: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x169C80u;
    SET_GPR_U32(ctx, 31, 0x169C88u);
    ctx->pc = 0x169C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C80u;
    // 0x169c84: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x169C80u, 0x169C88u)) {
        return;
    }
    ctx->pc = 0x169C88u;
label_169c88:
    // 0x169c88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169c90: 0x5460ffd3  bnel        $v1, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x169C90u;
    {
        const bool branch_taken_0x169c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169c90) {
            ctx->pc = 0x169C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169C90u;
            // 0x169c94: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169be0;
        }
    }
    ctx->pc = 0x169C98u;
    // 0x169c98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x169c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_169c9c:
    // 0x169c9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x169c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x169CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CA4u;
        // 0x169ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169CACu;
    // 0x169cac: 0x0  nop
    ctx->pc = 0x169cacu;
    // NOP
    ctx->pc = 0x169cb0u;
}
