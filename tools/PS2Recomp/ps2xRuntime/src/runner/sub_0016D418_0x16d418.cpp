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

// Function: sub_0016D418
// Address: 0x16d418 - 0x16d490
void sub_0016D418_0x16d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D418_0x16d418");
#endif

    switch (ctx->pc) {
        case 0x16d440u: goto label_16d440;
        case 0x16d464u: goto label_16d464;
        case 0x16d47cu: goto label_16d47c;
        default: break;
    }

    ctx->pc = 0x16d418u;

    // 0x16d418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d41c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16d420: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16d424: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D424u;
    {
        const bool branch_taken_0x16d424 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D424u;
        // 0x16d428: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d424) {
            ctx->pc = 0x16D47Cu;
            goto label_16d47c;
        }
    }
    ctx->pc = 0x16D42Cu;
    // 0x16d42c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16D42Cu;
    {
        const bool branch_taken_0x16d42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D42Cu;
        // 0x16d430: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d42c) {
            ctx->pc = 0x16D46Cu;
            goto label_16d46c;
        }
    }
    ctx->pc = 0x16D434u;
    // 0x16d434: 0x26104cf8  addiu       $s0, $s0, 0x4CF8
    ctx->pc = 0x16d434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19704));
    // 0x16d438: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16D438u;
    SET_GPR_U32(ctx, 31, 0x16D440u);
    ctx->pc = 0x16D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D438u;
    // 0x16d43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16D438u, 0x16D440u)) {
        return;
    }
    ctx->pc = 0x16D440u;
label_16d440:
    // 0x16d440: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16d444: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16d444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16d448: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16d44c: 0xac62f6b0  sw          $v0, -0x950($v1)
    ctx->pc = 0x16d44cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF6B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF6B0u, _value); } while (0);
    // 0x16d450: 0x2484f6b8  addiu       $a0, $a0, -0x948
    ctx->pc = 0x16d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964920));
    // 0x16d454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d458: 0x24c6d490  addiu       $a2, $a2, -0x2B70
    ctx->pc = 0x16d458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956176));
    // 0x16d45c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16D45Cu;
    SET_GPR_U32(ctx, 31, 0x16D464u);
    ctx->pc = 0x16D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D45Cu;
    // 0x16d460: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16D45Cu, 0x16D464u)) {
        return;
    }
    ctx->pc = 0x16D464u;
label_16d464:
    // 0x16d464: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16D464u;
    {
        const bool branch_taken_0x16d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D464u;
        // 0x16d468: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d464) {
            ctx->pc = 0x16D480u;
            goto label_16d480;
        }
    }
    ctx->pc = 0x16D46Cu;
label_16d46c:
    // 0x16d46c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16d470: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d474: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16D474u;
    SET_GPR_U32(ctx, 31, 0x16D47Cu);
    ctx->pc = 0x16D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D474u;
    // 0x16d478: 0x2484f6b8  addiu       $a0, $a0, -0x948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16D474u, 0x16D47Cu)) {
        return;
    }
    ctx->pc = 0x16D47Cu;
label_16d47c:
    // 0x16d47c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d480:
    // 0x16d480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d484: 0x3e00008  jr          $ra
    ctx->pc = 0x16D484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D484u;
        // 0x16d488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D48Cu;
    // 0x16d48c: 0x0  nop
    ctx->pc = 0x16d48cu;
    // NOP
    ctx->pc = 0x16d490u;
}
