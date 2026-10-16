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

// Function: sub_00321A18
// Address: 0x321a18 - 0x321ac8
void sub_00321A18_0x321a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321A18_0x321a18");
#endif

    switch (ctx->pc) {
        case 0x321a40u: goto label_321a40;
        case 0x321a70u: goto label_321a70;
        case 0x321a84u: goto label_321a84;
        default: break;
    }

    ctx->pc = 0x321a18u;

    // 0x321a18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321a1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321a20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321a24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321a2c: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x321a30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x321a34: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x321a34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x321a38: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x321A38u;
    {
        const bool branch_taken_0x321a38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A38u;
        // 0x321a3c: 0x3c120068  lui         $s2, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a38) {
            ctx->pc = 0x321A64u;
            goto label_321a64;
        }
    }
    ctx->pc = 0x321A40u;
label_321a40:
    // 0x321a40: 0x42000039  di
    ctx->pc = 0x321a40u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x321a44: 0x40f  sync.p
    ctx->pc = 0x321a44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x321a48: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x321a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x321a4c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x321a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x321a50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x321a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x321a54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x321A54u;
    {
        const bool branch_taken_0x321a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321a54) {
            ctx->pc = 0x321A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321a40;
        }
    }
    ctx->pc = 0x321A5Cu;
    // 0x321a5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x321A5Cu;
    {
        const bool branch_taken_0x321a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A5Cu;
        // 0x321a60: 0x8e427544  lw          $v0, 0x7544($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a5c) {
            ctx->pc = 0x321A68u;
            goto label_321a68;
        }
    }
    ctx->pc = 0x321A64u;
label_321a64:
    // 0x321a64: 0x8e427544  lw          $v0, 0x7544($s2)
    ctx->pc = 0x321a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30020)));
label_321a68:
    // 0x321a68: 0xc0c84c0  jal         func_321300
    ctx->pc = 0x321A68u;
    SET_GPR_U32(ctx, 31, 0x321A70u);
    ctx->pc = 0x321A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A68u;
    // 0x321a6c: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321300u, 0x321A68u, 0x321A70u)) {
        return;
    }
    ctx->pc = 0x321A70u;
label_321a70:
    // 0x321a70: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x321a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321a74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x321A74u;
    {
        const bool branch_taken_0x321a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A74u;
        // 0x321a78: 0x8e427544  lw          $v0, 0x7544($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a74) {
            ctx->pc = 0x321AA0u;
            goto label_321aa0;
        }
    }
    ctx->pc = 0x321A7Cu;
    // 0x321a7c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x321A7Cu;
    SET_GPR_U32(ctx, 31, 0x321A84u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x321A7Cu, 0x321A84u)) {
        return;
    }
    ctx->pc = 0x321A84u;
label_321a84:
    // 0x321a84: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x321a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x321a88: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x321A88u;
    {
        const bool branch_taken_0x321a88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A88u;
        // 0x321a8c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a88) {
            ctx->pc = 0x321A94u;
            goto label_321a94;
        }
    }
    ctx->pc = 0x321A90u;
    // 0x321a90: 0x42000038  ei
    ctx->pc = 0x321a90u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_321a94:
    // 0x321a94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x321a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x321a98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x321A98u;
    {
        const bool branch_taken_0x321a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A98u;
        // 0x321a9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a98) {
            ctx->pc = 0x321AACu;
            goto label_321aac;
        }
    }
    ctx->pc = 0x321AA0u;
label_321aa0:
    // 0x321aa0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x321AA0u;
    {
        const bool branch_taken_0x321aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AA0u;
        // 0x321aa4: 0xae507544  sw          $s0, 0x7544($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 30020), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321aa0) {
            ctx->pc = 0x321AACu;
            goto label_321aac;
        }
    }
    ctx->pc = 0x321AA8u;
    // 0x321aa8: 0x42000038  ei
    ctx->pc = 0x321aa8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_321aac:
    // 0x321aac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321ab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321ab4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321abc: 0x3e00008  jr          $ra
    ctx->pc = 0x321ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321ABCu;
        // 0x321ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321AC4u;
    // 0x321ac4: 0x0  nop
    ctx->pc = 0x321ac4u;
    // NOP
    ctx->pc = 0x321ac8u;
}
