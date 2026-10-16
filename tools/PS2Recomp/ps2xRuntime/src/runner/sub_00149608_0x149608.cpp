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

// Function: sub_00149608
// Address: 0x149608 - 0x149640
void sub_00149608_0x149608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149608_0x149608");
#endif

    switch (ctx->pc) {
        case 0x14962cu: goto label_14962c;
        default: break;
    }

    ctx->pc = 0x149608u;

    // 0x149608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14960c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149610: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149610u;
    {
        const bool branch_taken_0x149610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x149614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149610u;
        // 0x149614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149610) {
            ctx->pc = 0x149634u;
            goto label_149634;
        }
    }
    ctx->pc = 0x149618u;
    // 0x149618: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149618u;
    {
        const bool branch_taken_0x149618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149618u;
        // 0x14961c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149618) {
            ctx->pc = 0x149638u;
            goto label_149638;
        }
    }
    ctx->pc = 0x149620u;
    // 0x149620: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x149620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x149624: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x149624u;
    SET_GPR_U32(ctx, 31, 0x14962Cu);
    ctx->pc = 0x149628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149624u;
    // 0x149628: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x149624u, 0x14962Cu)) {
        return;
    }
    ctx->pc = 0x14962Cu;
label_14962c:
    // 0x14962c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14962cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149630: 0xac62ee88  sw          $v0, -0x1178($v1)
    ctx->pc = 0x149630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEE88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEE88u, _value); } while (0);
label_149634:
    // 0x149634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149638:
    // 0x149638: 0x3e00008  jr          $ra
    ctx->pc = 0x149638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149638u;
        // 0x14963c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149640u;
}
