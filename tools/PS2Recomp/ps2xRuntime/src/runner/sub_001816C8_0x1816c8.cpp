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

// Function: sub_001816C8
// Address: 0x1816c8 - 0x181748
void sub_001816C8_0x1816c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001816C8_0x1816c8");
#endif

    ctx->pc = 0x1816c8u;

    // 0x1816c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1816c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1816ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1816d0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1816D0u;
    {
        const bool branch_taken_0x1816d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1816d0) {
            ctx->pc = 0x1816D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1816D0u;
            // 0x1816d4: 0x8cc20034  lw          $v0, 0x34($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18170Cu;
            goto label_18170c;
        }
    }
    ctx->pc = 0x1816D8u;
    // 0x1816d8: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1816dc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1816dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1816e0: 0x443823  subu        $a3, $v0, $a0
    ctx->pc = 0x1816e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1816e4: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x1816e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1816e8: 0xa3380b  movn        $a3, $a1, $v1
    ctx->pc = 0x1816e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5));
    // 0x1816ec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1816ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1816f0: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1816f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816F4u;
    {
        const bool branch_taken_0x1816f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816F4u;
        // 0x1816f8: 0xacc4002c  sw          $a0, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816f4) {
            ctx->pc = 0x181704u;
            goto label_181704;
        }
    }
    ctx->pc = 0x1816FCu;
    // 0x1816fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181700: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x181700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_181704:
    // 0x181704: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x181708: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18170c:
    // 0x18170c: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x18170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x181710: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x181714: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x181714u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181718: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181718u;
    {
        const bool branch_taken_0x181718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181718) {
            ctx->pc = 0x18171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181718u;
            // 0x18171c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181720u;
            goto label_181720;
        }
    }
    ctx->pc = 0x181720u;
label_181720:
    // 0x181720: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x181720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x181724: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x181724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x181728: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18172c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x181730: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x181730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
    // 0x181734: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x181734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x181738: 0x2010  mfhi        $a0
    ctx->pc = 0x181738u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x18173c: 0x3e00008  jr          $ra
    ctx->pc = 0x18173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18173Cu;
        // 0x181740: 0xacc40034  sw          $a0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181744u;
    // 0x181744: 0x0  nop
    ctx->pc = 0x181744u;
    // NOP
    ctx->pc = 0x181748u;
}
