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

// Function: sub_001C1178
// Address: 0x1c1178 - 0x1c11e8
void sub_001C1178_0x1c1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1178_0x1c1178");
#endif

    switch (ctx->pc) {
        case 0x1c1190u: goto label_1c1190;
        case 0x1c11a8u: goto label_1c11a8;
        case 0x1c11d8u: goto label_1c11d8;
        default: break;
    }

    ctx->pc = 0x1c1178u;

    // 0x1c1178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c117c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1188: 0xc065a0e  jal         func_196838
    ctx->pc = 0x1C1188u;
    SET_GPR_U32(ctx, 31, 0x1C1190u);
    ctx->pc = 0x1C118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1188u;
    // 0x1c118c: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196838u, 0x1C1188u, 0x1C1190u)) {
        return;
    }
    ctx->pc = 0x1C1190u;
label_1c1190:
    // 0x1c1190: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c1194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1198: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c119c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c11a0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1c11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1c11a4: 0x0  nop
    ctx->pc = 0x1c11a4u;
    // NOP
label_1c11a8:
    // 0x1c11a8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c11ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c11acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c11b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c11b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c11b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c11b8: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c11b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c11bc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C11BCu;
    {
        const bool branch_taken_0x1c11bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11BCu;
        // 0x1c11c0: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11bc) {
            ctx->pc = 0x1C11A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11a8;
        }
    }
    ctx->pc = 0x1C11C4u;
    // 0x1c11c4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c11c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11d0: 0xc0705e0  jal         func_1C1780
    ctx->pc = 0x1C11D0u;
    SET_GPR_U32(ctx, 31, 0x1C11D8u);
    ctx->pc = 0x1C11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11D0u;
    // 0x1c11d4: 0xac6201d0  sw          $v0, 0x1D0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1780u, 0x1C11D0u, 0x1C11D8u)) {
        return;
    }
    ctx->pc = 0x1C11D8u;
label_1c11d8:
    // 0x1c11d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c11d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11E0u;
        // 0x1c11e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11E8u;
}
