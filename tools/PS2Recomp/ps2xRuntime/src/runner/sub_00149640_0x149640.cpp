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

// Function: sub_00149640
// Address: 0x149640 - 0x149690
void sub_00149640_0x149640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149640_0x149640");
#endif

    switch (ctx->pc) {
        case 0x149654u: goto label_149654;
        default: break;
    }

    ctx->pc = 0x149640u;

    // 0x149640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149644: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14964c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x14964Cu;
    SET_GPR_U32(ctx, 31, 0x149654u);
    ctx->pc = 0x149650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14964Cu;
    // 0x149650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x14964Cu, 0x149654u)) {
        return;
    }
    ctx->pc = 0x149654u;
label_149654:
    // 0x149654: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x149654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x149658: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x149658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x14965c: 0x246318f0  addiu       $v1, $v1, 0x18F0
    ctx->pc = 0x14965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6384));
    // 0x149660: 0x248418a0  addiu       $a0, $a0, 0x18A0
    ctx->pc = 0x149660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6304));
    // 0x149664: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x149664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x149668: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14966c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x14966cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x149670: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x149670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x149674: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x149674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x149678: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x149678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x14967c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149684: 0x3e00008  jr          $ra
    ctx->pc = 0x149684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149684u;
        // 0x149688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14968Cu;
    // 0x14968c: 0x0  nop
    ctx->pc = 0x14968cu;
    // NOP
    ctx->pc = 0x149690u;
}
