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

// Function: sub_002C0368
// Address: 0x2c0368 - 0x2c0430
void sub_002C0368_0x2c0368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0368_0x2c0368");
#endif

    ctx->pc = 0x2c0368u;

    // 0x2c0368: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2c0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2c036c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2c036cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0370: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2c0370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2c0374: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2c0374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c0378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c037c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2c037cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c0380: 0x68001b  divu        $zero, $v1, $t0
    ctx->pc = 0x2c0380u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c0384: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x2c0384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c0388: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2c0388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2c038c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c038cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c0390: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c0390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c0394: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2c0394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c0398: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2c0398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2c039c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2c039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2c03a0: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x2c03a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x2c03a4: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x2c03a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x2c03a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2c03a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c03ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c03acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c03b0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2c03b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2c03b4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C03B4u;
    {
        const bool branch_taken_0x2c03b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c03b4) {
            ctx->pc = 0x2C03B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C03B4u;
            // 0x2c03b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03BCu;
            goto label_2c03bc;
        }
    }
    ctx->pc = 0x2C03BCu;
label_2c03bc:
    // 0x2c03bc: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x2c03bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x2c03c0: 0x3812  mflo        $a3
    ctx->pc = 0x2c03c0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2c03c4: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x2c03c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2c03c8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2c03cc: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2c03ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2c03d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2c03d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2c03d4: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x2c03d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x2c03d8: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x2c03d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
    // 0x2c03dc: 0x1012  mflo        $v0
    ctx->pc = 0x2c03dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2c03e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c03e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c03e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c03ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c03f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c03f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c03f8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c03fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c03fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0400: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0404: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c040c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c041c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c0420: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c0424: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c0424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c0428: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0428u;
        // 0x2c042c: 0x491024  and         $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0430u;
}
