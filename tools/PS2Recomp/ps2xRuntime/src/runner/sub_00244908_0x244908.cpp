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

// Function: sub_00244908
// Address: 0x244908 - 0x244958
void sub_00244908_0x244908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244908_0x244908");
#endif

    switch (ctx->pc) {
        case 0x24494cu: goto label_24494c;
        default: break;
    }

    ctx->pc = 0x244908u;

    // 0x244908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24490c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x244910: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x244910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x244914: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x244914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x244918: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x244918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x24491c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x24491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x244920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244924: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x244924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x244928: 0x24842a38  addiu       $a0, $a0, 0x2A38
    ctx->pc = 0x244928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10808));
    // 0x24492c: 0x24a52c58  addiu       $a1, $a1, 0x2C58
    ctx->pc = 0x24492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11352));
    // 0x244930: 0x24c63b20  addiu       $a2, $a2, 0x3B20
    ctx->pc = 0x244930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15136));
    // 0x244934: 0x244248a0  addiu       $v0, $v0, 0x48A0
    ctx->pc = 0x244934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18592));
    // 0x244938: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x244938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x730FFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x730FFCu, _value); } while (0);
    // 0x24493c: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x24493cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x730FF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x730FF0u, _value); } while (0);
    // 0x244940: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x244940u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x730FF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x730FF4u, _value); } while (0);
    // 0x244944: 0xc09094c  jal         func_242530
    ctx->pc = 0x244944u;
    SET_GPR_U32(ctx, 31, 0x24494Cu);
    ctx->pc = 0x244948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244944u;
    // 0x244948: 0xac660030  sw          $a2, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242530u, 0x244944u, 0x24494Cu)) {
        return;
    }
    ctx->pc = 0x24494Cu;
label_24494c:
    // 0x24494c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24494cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244950: 0x3e00008  jr          $ra
    ctx->pc = 0x244950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244950u;
        // 0x244954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244958u;
}
