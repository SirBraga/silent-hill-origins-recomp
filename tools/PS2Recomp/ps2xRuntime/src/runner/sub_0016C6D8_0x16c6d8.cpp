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

// Function: sub_0016C6D8
// Address: 0x16c6d8 - 0x16c750
void sub_0016C6D8_0x16c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C6D8_0x16c6d8");
#endif

    switch (ctx->pc) {
        case 0x16c714u: goto label_16c714;
        case 0x16c71cu: goto label_16c71c;
        case 0x16c738u: goto label_16c738;
        default: break;
    }

    ctx->pc = 0x16c6d8u;

    // 0x16c6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c6dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16c6e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c6e4: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16C6E4u;
    {
        const bool branch_taken_0x16c6e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6E4u;
        // 0x16c6e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6e4) {
            ctx->pc = 0x16C738u;
            goto label_16c738;
        }
    }
    ctx->pc = 0x16C6ECu;
    // 0x16c6ec: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x16C6ECu;
    {
        const bool branch_taken_0x16c6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6ECu;
        // 0x16c6f0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6ec) {
            ctx->pc = 0x16C728u;
            goto label_16c728;
        }
    }
    ctx->pc = 0x16C6F4u;
    // 0x16c6f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16c6f8: 0x26104a78  addiu       $s0, $s0, 0x4A78
    ctx->pc = 0x16c6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19064));
    // 0x16c6fc: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16c6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16c700: 0x24c6c750  addiu       $a2, $a2, -0x38B0
    ctx->pc = 0x16c700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
    // 0x16c704: 0x2484f698  addiu       $a0, $a0, -0x968
    ctx->pc = 0x16c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964888));
    // 0x16c708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c70c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16C70Cu;
    SET_GPR_U32(ctx, 31, 0x16C714u);
    ctx->pc = 0x16C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C70Cu;
    // 0x16c710: 0x24070110  addiu       $a3, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16C70Cu, 0x16C714u)) {
        return;
    }
    ctx->pc = 0x16C714u;
label_16c714:
    // 0x16c714: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16C714u;
    SET_GPR_U32(ctx, 31, 0x16C71Cu);
    ctx->pc = 0x16C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C714u;
    // 0x16c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16C714u, 0x16C71Cu)) {
        return;
    }
    ctx->pc = 0x16C71Cu;
label_16c71c:
    // 0x16c71c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16c720: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16C720u;
    {
        const bool branch_taken_0x16c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C720u;
        // 0x16c724: 0xac62f69c  sw          $v0, -0x964($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c720) {
            ctx->pc = 0x16C738u;
            goto label_16c738;
        }
    }
    ctx->pc = 0x16C728u;
label_16c728:
    // 0x16c728: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16c728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16c72c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c730: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16C730u;
    SET_GPR_U32(ctx, 31, 0x16C738u);
    ctx->pc = 0x16C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C730u;
    // 0x16c734: 0x2484f698  addiu       $a0, $a0, -0x968 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16C730u, 0x16C738u)) {
        return;
    }
    ctx->pc = 0x16C738u;
label_16c738:
    // 0x16c738: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c740: 0x3e00008  jr          $ra
    ctx->pc = 0x16C740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C740u;
        // 0x16c744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C748u;
    // 0x16c748: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16c748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16c74c: 0x0  nop
    ctx->pc = 0x16c74cu;
    // NOP
    ctx->pc = 0x16c750u;
}
