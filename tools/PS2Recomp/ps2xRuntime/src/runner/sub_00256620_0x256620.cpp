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

// Function: sub_00256620
// Address: 0x256620 - 0x256670
void sub_00256620_0x256620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256620_0x256620");
#endif

    switch (ctx->pc) {
        case 0x256658u: goto label_256658;
        default: break;
    }

    ctx->pc = 0x256620u;

    // 0x256620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256624: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x256624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x256628: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x256628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25662c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256634: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x256634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256638: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x256638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25663c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25663Cu;
    {
        const bool branch_taken_0x25663c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25663Cu;
        // 0x256640: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25663c) {
            ctx->pc = 0x25665Cu;
            goto label_25665c;
        }
    }
    ctx->pc = 0x256644u;
    // 0x256644: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x256644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x256648: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256648u;
    {
        const bool branch_taken_0x256648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256648u;
        // 0x25664c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256648) {
            ctx->pc = 0x256660u;
            goto label_256660;
        }
    }
    ctx->pc = 0x256650u;
    // 0x256650: 0xc096264  jal         func_258990
    ctx->pc = 0x256650u;
    SET_GPR_U32(ctx, 31, 0x256658u);
    ctx->pc = 0x258990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258990u, 0x256650u, 0x256658u)) {
        return;
    }
    ctx->pc = 0x256658u;
label_256658:
    // 0x256658: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x256658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_25665c:
    // 0x25665c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25665cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256660:
    // 0x256660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256664: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256668: 0x3e00008  jr          $ra
    ctx->pc = 0x256668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256668u;
        // 0x25666c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256670u;
}
