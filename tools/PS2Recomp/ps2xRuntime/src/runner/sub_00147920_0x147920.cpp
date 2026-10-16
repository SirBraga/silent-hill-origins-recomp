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

// Function: sub_00147920
// Address: 0x147920 - 0x147960
void sub_00147920_0x147920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147920_0x147920");
#endif

    switch (ctx->pc) {
        case 0x147944u: goto label_147944;
        default: break;
    }

    ctx->pc = 0x147920u;

    // 0x147920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147924: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x147924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x147928: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x147928u;
    {
        const bool branch_taken_0x147928 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147928u;
        // 0x14792c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147928) {
            ctx->pc = 0x14794Cu;
            goto label_14794c;
        }
    }
    ctx->pc = 0x147930u;
    // 0x147930: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147930u;
    {
        const bool branch_taken_0x147930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147930u;
        // 0x147934: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147930) {
            ctx->pc = 0x147950u;
            goto label_147950;
        }
    }
    ctx->pc = 0x147938u;
    // 0x147938: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x14793c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x14793Cu;
    SET_GPR_U32(ctx, 31, 0x147944u);
    ctx->pc = 0x147940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14793Cu;
    // 0x147940: 0x24841350  addiu       $a0, $a0, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x14793Cu, 0x147944u)) {
        return;
    }
    ctx->pc = 0x147944u;
label_147944:
    // 0x147944: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x147944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x147948: 0xac62ee60  sw          $v0, -0x11A0($v1)
    ctx->pc = 0x147948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEE60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEE60u, _value); } while (0);
label_14794c:
    // 0x14794c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_147950:
    // 0x147950: 0x3e00008  jr          $ra
    ctx->pc = 0x147950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147950u;
        // 0x147954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147958u;
    // 0x147958: 0x0  nop
    ctx->pc = 0x147958u;
    // NOP
    // 0x14795c: 0x0  nop
    ctx->pc = 0x14795cu;
    // NOP
    ctx->pc = 0x147960u;
}
