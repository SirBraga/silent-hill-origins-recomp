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

// Function: sub_0010B2F0
// Address: 0x10b2f0 - 0x10b368
void sub_0010B2F0_0x10b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B2F0_0x10b2f0");
#endif

    switch (ctx->pc) {
        case 0x10b318u: goto label_10b318;
        case 0x10b33cu: goto label_10b33c;
        case 0x10b354u: goto label_10b354;
        default: break;
    }

    ctx->pc = 0x10b2f0u;

    // 0x10b2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b2f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10b2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b2fc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10B2FCu;
    {
        const bool branch_taken_0x10b2fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2FCu;
        // 0x10b300: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2fc) {
            ctx->pc = 0x10B354u;
            goto label_10b354;
        }
    }
    ctx->pc = 0x10B304u;
    // 0x10b304: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10B304u;
    {
        const bool branch_taken_0x10b304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B304u;
        // 0x10b308: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b304) {
            ctx->pc = 0x10B344u;
            goto label_10b344;
        }
    }
    ctx->pc = 0x10B30Cu;
    // 0x10b30c: 0x26109d30  addiu       $s0, $s0, -0x62D0
    ctx->pc = 0x10b30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942000));
    // 0x10b310: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x10B310u;
    SET_GPR_U32(ctx, 31, 0x10B318u);
    ctx->pc = 0x10B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B310u;
    // 0x10b314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x10B310u, 0x10B318u)) {
        return;
    }
    ctx->pc = 0x10B318u;
label_10b318:
    // 0x10b318: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10b318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10b31c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10b320: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x10b320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x10b324: 0xac6242f0  sw          $v0, 0x42F0($v1)
    ctx->pc = 0x10b324u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B42F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B42F0u, _value); } while (0);
    // 0x10b328: 0x248442f8  addiu       $a0, $a0, 0x42F8
    ctx->pc = 0x10b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17144));
    // 0x10b32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b330: 0x24c6b368  addiu       $a2, $a2, -0x4C98
    ctx->pc = 0x10b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947688));
    // 0x10b334: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x10B334u;
    SET_GPR_U32(ctx, 31, 0x10B33Cu);
    ctx->pc = 0x10B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B334u;
    // 0x10b338: 0x2407005c  addiu       $a3, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x10B334u, 0x10B33Cu)) {
        return;
    }
    ctx->pc = 0x10B33Cu;
label_10b33c:
    // 0x10b33c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10B33Cu;
    {
        const bool branch_taken_0x10b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B33Cu;
        // 0x10b340: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b33c) {
            ctx->pc = 0x10B358u;
            goto label_10b358;
        }
    }
    ctx->pc = 0x10B344u;
label_10b344:
    // 0x10b344: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10b344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10b348: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b34c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x10B34Cu;
    SET_GPR_U32(ctx, 31, 0x10B354u);
    ctx->pc = 0x10B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B34Cu;
    // 0x10b350: 0x248442f8  addiu       $a0, $a0, 0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x10B34Cu, 0x10B354u)) {
        return;
    }
    ctx->pc = 0x10B354u;
label_10b354:
    // 0x10b354: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b358:
    // 0x10b358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B35Cu;
        // 0x10b360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B364u;
    // 0x10b364: 0x0  nop
    ctx->pc = 0x10b364u;
    // NOP
    ctx->pc = 0x10b368u;
}
