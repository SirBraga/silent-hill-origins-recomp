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

// Function: sub_0013D410
// Address: 0x13d410 - 0x13d490
void sub_0013D410_0x13d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D410_0x13d410");
#endif

    switch (ctx->pc) {
        case 0x13d438u: goto label_13d438;
        case 0x13d45cu: goto label_13d45c;
        case 0x13d474u: goto label_13d474;
        default: break;
    }

    ctx->pc = 0x13d410u;

    // 0x13d410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d414: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13d418: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d41c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13D41Cu;
    {
        const bool branch_taken_0x13d41c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D41Cu;
        // 0x13d420: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d41c) {
            ctx->pc = 0x13D474u;
            goto label_13d474;
        }
    }
    ctx->pc = 0x13D424u;
    // 0x13d424: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13D424u;
    {
        const bool branch_taken_0x13d424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D424u;
        // 0x13d428: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d424) {
            ctx->pc = 0x13D464u;
            goto label_13d464;
        }
    }
    ctx->pc = 0x13D42Cu;
    // 0x13d42c: 0x2610fa18  addiu       $s0, $s0, -0x5E8
    ctx->pc = 0x13d42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965784));
    // 0x13d430: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13D430u;
    SET_GPR_U32(ctx, 31, 0x13D438u);
    ctx->pc = 0x13D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D430u;
    // 0x13d434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13D430u, 0x13D438u)) {
        return;
    }
    ctx->pc = 0x13D438u;
label_13d438:
    // 0x13d438: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13d438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13d43c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13d440: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13d440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13d444: 0xac6247c0  sw          $v0, 0x47C0($v1)
    ctx->pc = 0x13d444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B47C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B47C0u, _value); } while (0);
    // 0x13d448: 0x248447c8  addiu       $a0, $a0, 0x47C8
    ctx->pc = 0x13d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18376));
    // 0x13d44c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d450: 0x24c6d490  addiu       $a2, $a2, -0x2B70
    ctx->pc = 0x13d450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956176));
    // 0x13d454: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13D454u;
    SET_GPR_U32(ctx, 31, 0x13D45Cu);
    ctx->pc = 0x13D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D454u;
    // 0x13d458: 0x240701a0  addiu       $a3, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13D454u, 0x13D45Cu)) {
        return;
    }
    ctx->pc = 0x13D45Cu;
label_13d45c:
    // 0x13d45c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D45Cu;
    {
        const bool branch_taken_0x13d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D45Cu;
        // 0x13d460: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d45c) {
            ctx->pc = 0x13D478u;
            goto label_13d478;
        }
    }
    ctx->pc = 0x13D464u;
label_13d464:
    // 0x13d464: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13d464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13d468: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d46c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13D46Cu;
    SET_GPR_U32(ctx, 31, 0x13D474u);
    ctx->pc = 0x13D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D46Cu;
    // 0x13d470: 0x248447c8  addiu       $a0, $a0, 0x47C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13D46Cu, 0x13D474u)) {
        return;
    }
    ctx->pc = 0x13D474u;
label_13d474:
    // 0x13d474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d478:
    // 0x13d478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d47c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D47Cu;
        // 0x13d480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D484u;
    // 0x13d484: 0x0  nop
    ctx->pc = 0x13d484u;
    // NOP
    // 0x13d488: 0x0  nop
    ctx->pc = 0x13d488u;
    // NOP
    // 0x13d48c: 0x0  nop
    ctx->pc = 0x13d48cu;
    // NOP
    ctx->pc = 0x13d490u;
}
