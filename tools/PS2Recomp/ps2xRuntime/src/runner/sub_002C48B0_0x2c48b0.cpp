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

// Function: sub_002C48B0
// Address: 0x2c48b0 - 0x2c4938
void sub_002C48B0_0x2c48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C48B0_0x2c48b0");
#endif

    ctx->pc = 0x2c48b0u;

    // 0x2c48b0: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x2c48b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c48b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c48b8: 0xca5818  mult        $t3, $a2, $t2
    ctx->pc = 0x2c48b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2c48bc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2c48bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2c48c0: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x2c48c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
    // 0x2c48c4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c48c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c48c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c48cc: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2c48ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2c48d0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2c48d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2c48d4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c48d8: 0x1633021  addu        $a2, $t3, $v1
    ctx->pc = 0x2c48d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2c48dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2c48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2c48e0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2c48e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2c48e4: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x2c48e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x2c48e8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2c48ec: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x2c48ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x2c48f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c48f4: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2c48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x2c48f8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c48fc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2c48fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2c4900: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c4900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c4904: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2c4904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2c4908: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2c4908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c490c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2c490cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2c4910: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2c4910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2c4914: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x2c4914u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x2c4918: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2c4918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2c491c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x2c491cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x2c4920: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2c4920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2c4924: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x2c4924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x2c4928: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2c4928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2c492c: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x2c492cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x2c4930: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4930u;
        // 0x2c4934: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4938u;
}
