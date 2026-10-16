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

// Function: sub_00202F28
// Address: 0x202f28 - 0x202fe0
void sub_00202F28_0x202f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202F28_0x202f28");
#endif

    switch (ctx->pc) {
        case 0x202f48u: goto label_202f48;
        case 0x202f54u: goto label_202f54;
        case 0x202f90u: goto label_202f90;
        case 0x202f9cu: goto label_202f9c;
        case 0x202fc8u: goto label_202fc8;
        case 0x202fd0u: goto label_202fd0;
        default: break;
    }

    ctx->pc = 0x202f28u;

    // 0x202f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202f2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x202f2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202f34: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x202f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x202f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202f3c: 0x24900120  addiu       $s0, $a0, 0x120
    ctx->pc = 0x202f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x202f40: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x202f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x202f44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x202f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_202f48:
    // 0x202f48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x202f4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202f54:
    // 0x202f54: 0x0  nop
    ctx->pc = 0x202f54u;
    // NOP
    // 0x202f58: 0x0  nop
    ctx->pc = 0x202f58u;
    // NOP
    // 0x202f5c: 0x0  nop
    ctx->pc = 0x202f5cu;
    // NOP
    // 0x202f60: 0x0  nop
    ctx->pc = 0x202f60u;
    // NOP
    // 0x202f64: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202F64u;
    {
        const bool branch_taken_0x202f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202f64) {
            ctx->pc = 0x202F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202F64u;
            // 0x202f68: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202f54;
        }
    }
    ctx->pc = 0x202F6Cu;
    // 0x202f6c: 0x28620041  slti        $v0, $v1, 0x41
    ctx->pc = 0x202f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x202f70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x202F70u;
    {
        const bool branch_taken_0x202f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F70u;
        // 0x202f74: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f70) {
            ctx->pc = 0x202F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202f48;
        }
    }
    ctx->pc = 0x202F78u;
    // 0x202f78: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x202F78u;
    {
        const bool branch_taken_0x202f78 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x202F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F78u;
        // 0x202f7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f78) {
            ctx->pc = 0x202FC0u;
            goto label_202fc0;
        }
    }
    ctx->pc = 0x202F80u;
    // 0x202f80: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x202f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x202f84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x202f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x202f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x202f8c: 0x0  nop
    ctx->pc = 0x202f8cu;
    // NOP
label_202f90:
    // 0x202f90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x202f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202f94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202f9c:
    // 0x202f9c: 0x0  nop
    ctx->pc = 0x202f9cu;
    // NOP
    // 0x202fa0: 0x0  nop
    ctx->pc = 0x202fa0u;
    // NOP
    // 0x202fa4: 0x0  nop
    ctx->pc = 0x202fa4u;
    // NOP
    // 0x202fa8: 0x0  nop
    ctx->pc = 0x202fa8u;
    // NOP
    // 0x202fac: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202FACu;
    {
        const bool branch_taken_0x202fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202fac) {
            ctx->pc = 0x202FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202FACu;
            // 0x202fb0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202f9c;
        }
    }
    ctx->pc = 0x202FB4u;
    // 0x202fb4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x202fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x202fb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x202FB8u;
    {
        const bool branch_taken_0x202fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FB8u;
        // 0x202fbc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fb8) {
            ctx->pc = 0x202F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202f90;
        }
    }
    ctx->pc = 0x202FC0u;
label_202fc0:
    // 0x202fc0: 0xc086ff6  jal         func_21BFD8
    ctx->pc = 0x202FC0u;
    SET_GPR_U32(ctx, 31, 0x202FC8u);
    ctx->pc = 0x202FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FC0u;
    // 0x202fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BFD8u, 0x202FC0u, 0x202FC8u)) {
        return;
    }
    ctx->pc = 0x202FC8u;
label_202fc8:
    // 0x202fc8: 0xc086fea  jal         func_21BFA8
    ctx->pc = 0x202FC8u;
    SET_GPR_U32(ctx, 31, 0x202FD0u);
    ctx->pc = 0x202FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FC8u;
    // 0x202fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BFA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BFA8u, 0x202FC8u, 0x202FD0u)) {
        return;
    }
    ctx->pc = 0x202FD0u;
label_202fd0:
    // 0x202fd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x202FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FD8u;
        // 0x202fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202FE0u;
}
