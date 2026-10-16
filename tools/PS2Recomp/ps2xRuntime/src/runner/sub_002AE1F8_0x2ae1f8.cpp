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

// Function: sub_002AE1F8
// Address: 0x2ae1f8 - 0x2ae2c0
void sub_002AE1F8_0x2ae1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE1F8_0x2ae1f8");
#endif

    ctx->pc = 0x2ae1f8u;

    // 0x2ae1f8: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x2ae1f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ae1fc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2ae1fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2ae200: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x2ae200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2ae204: 0x354afff0  ori         $t2, $t2, 0xFFF0
    ctx->pc = 0x2ae204u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65520);
    // 0x2ae208: 0x258c000f  addiu       $t4, $t4, 0xF
    ctx->pc = 0x2ae208u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15));
    // 0x2ae20c: 0x8ccb0008  lw          $t3, 0x8($a2)
    ctx->pc = 0x2ae20cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ae210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ae210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ae214: 0x18a6024  and         $t4, $t4, $t2
    ctx->pc = 0x2ae214u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x2ae218: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x2ae218u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae21c: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x2ae21cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ae220: 0x1891021  addu        $v0, $t4, $t1
    ctx->pc = 0x2ae220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x2ae224: 0x6d3018  mult        $a2, $v1, $t5
    ctx->pc = 0x2ae224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ae228: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae22c: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2ae22cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ae230: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2ae230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2ae234: 0x34140  sll         $t0, $v1, 5
    ctx->pc = 0x2ae234u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ae238: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae23c: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x2ae23cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2ae240: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2ae240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2ae244: 0xacac0010  sw          $t4, 0x10($a1)
    ctx->pc = 0x2ae244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 12));
    // 0x2ae248: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2ae248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ae24c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x2ae24cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x2ae250: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae254: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x2ae254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x2ae258: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae25c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x2ae25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x2ae260: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2ae260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ae264: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2ae264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x2ae268: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2ae268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2ae26c: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x2ae26cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x2ae270: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2ae270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2ae274: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x2ae274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x2ae278: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x2ae278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2ae27c: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x2ae27cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x2ae280: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2ae280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2ae284: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x2ae284u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x2ae288: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2ae288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2ae28c: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x2ae28cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x2ae290: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x2ae290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2ae294: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x2ae294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
    // 0x2ae298: 0x2529000f  addiu       $t1, $t1, 0xF
    ctx->pc = 0x2ae298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x2ae29c: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x2ae29cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x2ae2a0: 0x2529000f  addiu       $t1, $t1, 0xF
    ctx->pc = 0x2ae2a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x2ae2a4: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x2ae2a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x2ae2a8: 0x12b5821  addu        $t3, $t1, $t3
    ctx->pc = 0x2ae2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2ae2ac: 0xaca90024  sw          $t1, 0x24($a1)
    ctx->pc = 0x2ae2acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 9));
    // 0x2ae2b0: 0x256b000f  addiu       $t3, $t3, 0xF
    ctx->pc = 0x2ae2b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x2ae2b4: 0x16a5824  and         $t3, $t3, $t2
    ctx->pc = 0x2ae2b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x2ae2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2B8u;
        // 0x2ae2bc: 0xac8b0008  sw          $t3, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE2C0u;
}
