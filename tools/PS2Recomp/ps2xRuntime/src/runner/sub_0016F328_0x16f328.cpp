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

// Function: sub_0016F328
// Address: 0x16f328 - 0x16f3a0
void sub_0016F328_0x16f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F328_0x16f328");
#endif

    switch (ctx->pc) {
        case 0x16f350u: goto label_16f350;
        case 0x16f374u: goto label_16f374;
        case 0x16f38cu: goto label_16f38c;
        default: break;
    }

    ctx->pc = 0x16f328u;

    // 0x16f328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f32c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16f32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16f330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f334: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F334u;
    {
        const bool branch_taken_0x16f334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F334u;
        // 0x16f338: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f334) {
            ctx->pc = 0x16F38Cu;
            goto label_16f38c;
        }
    }
    ctx->pc = 0x16F33Cu;
    // 0x16f33c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16F33Cu;
    {
        const bool branch_taken_0x16f33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F33Cu;
        // 0x16f340: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f33c) {
            ctx->pc = 0x16F37Cu;
            goto label_16f37c;
        }
    }
    ctx->pc = 0x16F344u;
    // 0x16f344: 0x26105108  addiu       $s0, $s0, 0x5108
    ctx->pc = 0x16f344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20744));
    // 0x16f348: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16F348u;
    SET_GPR_U32(ctx, 31, 0x16F350u);
    ctx->pc = 0x16F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F348u;
    // 0x16f34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16F348u, 0x16F350u)) {
        return;
    }
    ctx->pc = 0x16F350u;
label_16f350:
    // 0x16f350: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16f350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16f354: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16f354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16f358: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16f358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16f35c: 0xac62f708  sw          $v0, -0x8F8($v1)
    ctx->pc = 0x16f35cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF708u, _value); } while (0);
    // 0x16f360: 0x2484f710  addiu       $a0, $a0, -0x8F0
    ctx->pc = 0x16f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965008));
    // 0x16f364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f368: 0x24c6f3a0  addiu       $a2, $a2, -0xC60
    ctx->pc = 0x16f368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964128));
    // 0x16f36c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16F36Cu;
    SET_GPR_U32(ctx, 31, 0x16F374u);
    ctx->pc = 0x16F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F36Cu;
    // 0x16f370: 0x2407004c  addiu       $a3, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16F36Cu, 0x16F374u)) {
        return;
    }
    ctx->pc = 0x16F374u;
label_16f374:
    // 0x16f374: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16F374u;
    {
        const bool branch_taken_0x16f374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F374u;
        // 0x16f378: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f374) {
            ctx->pc = 0x16F390u;
            goto label_16f390;
        }
    }
    ctx->pc = 0x16F37Cu;
label_16f37c:
    // 0x16f37c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16f380: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f384: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16F384u;
    SET_GPR_U32(ctx, 31, 0x16F38Cu);
    ctx->pc = 0x16F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F384u;
    // 0x16f388: 0x2484f710  addiu       $a0, $a0, -0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16F384u, 0x16F38Cu)) {
        return;
    }
    ctx->pc = 0x16F38Cu;
label_16f38c:
    // 0x16f38c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16f390:
    // 0x16f390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f394: 0x3e00008  jr          $ra
    ctx->pc = 0x16F394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F394u;
        // 0x16f398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F39Cu;
    // 0x16f39c: 0x0  nop
    ctx->pc = 0x16f39cu;
    // NOP
    ctx->pc = 0x16f3a0u;
}
