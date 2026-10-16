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

// Function: sub_00172420
// Address: 0x172420 - 0x172498
void sub_00172420_0x172420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172420_0x172420");
#endif

    switch (ctx->pc) {
        case 0x172448u: goto label_172448;
        case 0x17246cu: goto label_17246c;
        case 0x172484u: goto label_172484;
        default: break;
    }

    ctx->pc = 0x172420u;

    // 0x172420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172424: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x172424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x172428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17242c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17242Cu;
    {
        const bool branch_taken_0x17242c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x172430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17242Cu;
        // 0x172430: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17242c) {
            ctx->pc = 0x172484u;
            goto label_172484;
        }
    }
    ctx->pc = 0x172434u;
    // 0x172434: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x172434u;
    {
        const bool branch_taken_0x172434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172434u;
        // 0x172438: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172434) {
            ctx->pc = 0x172474u;
            goto label_172474;
        }
    }
    ctx->pc = 0x17243Cu;
    // 0x17243c: 0x261058d0  addiu       $s0, $s0, 0x58D0
    ctx->pc = 0x17243cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22736));
    // 0x172440: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x172440u;
    SET_GPR_U32(ctx, 31, 0x172448u);
    ctx->pc = 0x172444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172440u;
    // 0x172444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x172440u, 0x172448u)) {
        return;
    }
    ctx->pc = 0x172448u;
label_172448:
    // 0x172448: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17244c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x172450: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x172450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x172454: 0xac62f780  sw          $v0, -0x880($v1)
    ctx->pc = 0x172454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF780u, _value); } while (0);
    // 0x172458: 0x2484f788  addiu       $a0, $a0, -0x878
    ctx->pc = 0x172458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965128));
    // 0x17245c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172460: 0x24c62498  addiu       $a2, $a2, 0x2498
    ctx->pc = 0x172460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9368));
    // 0x172464: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x172464u;
    SET_GPR_U32(ctx, 31, 0x17246Cu);
    ctx->pc = 0x172468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172464u;
    // 0x172468: 0x240700d0  addiu       $a3, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x172464u, 0x17246Cu)) {
        return;
    }
    ctx->pc = 0x17246Cu;
label_17246c:
    // 0x17246c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17246Cu;
    {
        const bool branch_taken_0x17246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17246Cu;
        // 0x172470: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17246c) {
            ctx->pc = 0x172488u;
            goto label_172488;
        }
    }
    ctx->pc = 0x172474u;
label_172474:
    // 0x172474: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x172474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x172478: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x172478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17247c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17247Cu;
    SET_GPR_U32(ctx, 31, 0x172484u);
    ctx->pc = 0x172480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17247Cu;
    // 0x172480: 0x2484f788  addiu       $a0, $a0, -0x878 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17247Cu, 0x172484u)) {
        return;
    }
    ctx->pc = 0x172484u;
label_172484:
    // 0x172484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172488:
    // 0x172488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17248c: 0x3e00008  jr          $ra
    ctx->pc = 0x17248Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17248Cu;
        // 0x172490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17248Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172494u;
    // 0x172494: 0x0  nop
    ctx->pc = 0x172494u;
    // NOP
    ctx->pc = 0x172498u;
}
