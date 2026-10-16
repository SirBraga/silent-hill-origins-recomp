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

// Function: sub_00168608
// Address: 0x168608 - 0x168680
void sub_00168608_0x168608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168608_0x168608");
#endif

    switch (ctx->pc) {
        case 0x168630u: goto label_168630;
        case 0x168654u: goto label_168654;
        case 0x16866cu: goto label_16866c;
        default: break;
    }

    ctx->pc = 0x168608u;

    // 0x168608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16860c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16860cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x168610: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x168614: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x168618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168614u;
        // 0x168618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168614) {
            ctx->pc = 0x16866Cu;
            goto label_16866c;
        }
    }
    ctx->pc = 0x16861Cu;
    // 0x16861c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16861Cu;
    {
        const bool branch_taken_0x16861c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16861Cu;
        // 0x168620: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16861c) {
            ctx->pc = 0x16865Cu;
            goto label_16865c;
        }
    }
    ctx->pc = 0x168624u;
    // 0x168624: 0x261040e8  addiu       $s0, $s0, 0x40E8
    ctx->pc = 0x168624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16616));
    // 0x168628: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x168628u;
    SET_GPR_U32(ctx, 31, 0x168630u);
    ctx->pc = 0x16862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168628u;
    // 0x16862c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x168628u, 0x168630u)) {
        return;
    }
    ctx->pc = 0x168630u;
label_168630:
    // 0x168630: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x168630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x168634: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x168634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x168638: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16863c: 0xac62f608  sw          $v0, -0x9F8($v1)
    ctx->pc = 0x16863cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF608u, _value); } while (0);
    // 0x168640: 0x2484f610  addiu       $a0, $a0, -0x9F0
    ctx->pc = 0x168640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    // 0x168644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168648: 0x24c68680  addiu       $a2, $a2, -0x7980
    ctx->pc = 0x168648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936192));
    // 0x16864c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16864Cu;
    SET_GPR_U32(ctx, 31, 0x168654u);
    ctx->pc = 0x168650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16864Cu;
    // 0x168650: 0x24070084  addiu       $a3, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16864Cu, 0x168654u)) {
        return;
    }
    ctx->pc = 0x168654u;
label_168654:
    // 0x168654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168654u;
    {
        const bool branch_taken_0x168654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168654u;
        // 0x168658: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168654) {
            ctx->pc = 0x168670u;
            goto label_168670;
        }
    }
    ctx->pc = 0x16865Cu;
label_16865c:
    // 0x16865c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16865cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x168660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168664: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x168664u;
    SET_GPR_U32(ctx, 31, 0x16866Cu);
    ctx->pc = 0x168668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168664u;
    // 0x168668: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x168664u, 0x16866Cu)) {
        return;
    }
    ctx->pc = 0x16866Cu;
label_16866c:
    // 0x16866c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16866cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168670:
    // 0x168670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168674: 0x3e00008  jr          $ra
    ctx->pc = 0x168674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168674u;
        // 0x168678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16867Cu;
    // 0x16867c: 0x0  nop
    ctx->pc = 0x16867cu;
    // NOP
    ctx->pc = 0x168680u;
}
