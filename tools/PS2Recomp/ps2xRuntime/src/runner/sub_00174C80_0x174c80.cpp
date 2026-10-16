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

// Function: sub_00174C80
// Address: 0x174c80 - 0x174cf8
void sub_00174C80_0x174c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174C80_0x174c80");
#endif

    switch (ctx->pc) {
        case 0x174ca8u: goto label_174ca8;
        case 0x174cccu: goto label_174ccc;
        case 0x174ce4u: goto label_174ce4;
        default: break;
    }

    ctx->pc = 0x174c80u;

    // 0x174c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174c84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x174c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x174c88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174c8c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x174C8Cu;
    {
        const bool branch_taken_0x174c8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x174C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C8Cu;
        // 0x174c90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c8c) {
            ctx->pc = 0x174CE4u;
            goto label_174ce4;
        }
    }
    ctx->pc = 0x174C94u;
    // 0x174c94: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x174C94u;
    {
        const bool branch_taken_0x174c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C94u;
        // 0x174c98: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c94) {
            ctx->pc = 0x174CD4u;
            goto label_174cd4;
        }
    }
    ctx->pc = 0x174C9Cu;
    // 0x174c9c: 0x26105ff0  addiu       $s0, $s0, 0x5FF0
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24560));
    // 0x174ca0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x174CA0u;
    SET_GPR_U32(ctx, 31, 0x174CA8u);
    ctx->pc = 0x174CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CA0u;
    // 0x174ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x174CA0u, 0x174CA8u)) {
        return;
    }
    ctx->pc = 0x174CA8u;
label_174ca8:
    // 0x174ca8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x174ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x174cac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x174cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x174cb0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x174cb4: 0xac62f7f0  sw          $v0, -0x810($v1)
    ctx->pc = 0x174cb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF7F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF7F0u, _value); } while (0);
    // 0x174cb8: 0x2484f7f8  addiu       $a0, $a0, -0x808
    ctx->pc = 0x174cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965240));
    // 0x174cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cc0: 0x24c64cf8  addiu       $a2, $a2, 0x4CF8
    ctx->pc = 0x174cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19704));
    // 0x174cc4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x174CC4u;
    SET_GPR_U32(ctx, 31, 0x174CCCu);
    ctx->pc = 0x174CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CC4u;
    // 0x174cc8: 0x24070084  addiu       $a3, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x174CC4u, 0x174CCCu)) {
        return;
    }
    ctx->pc = 0x174CCCu;
label_174ccc:
    // 0x174ccc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174CCCu;
    {
        const bool branch_taken_0x174ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CCCu;
        // 0x174cd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ccc) {
            ctx->pc = 0x174CE8u;
            goto label_174ce8;
        }
    }
    ctx->pc = 0x174CD4u;
label_174cd4:
    // 0x174cd4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x174cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x174cd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x174cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174cdc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x174CDCu;
    SET_GPR_U32(ctx, 31, 0x174CE4u);
    ctx->pc = 0x174CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CDCu;
    // 0x174ce0: 0x2484f7f8  addiu       $a0, $a0, -0x808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x174CDCu, 0x174CE4u)) {
        return;
    }
    ctx->pc = 0x174CE4u;
label_174ce4:
    // 0x174ce4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174ce8:
    // 0x174ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174cec: 0x3e00008  jr          $ra
    ctx->pc = 0x174CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CECu;
        // 0x174cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174CF4u;
    // 0x174cf4: 0x0  nop
    ctx->pc = 0x174cf4u;
    // NOP
    ctx->pc = 0x174cf8u;
}
