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

// Function: sub_002F2240
// Address: 0x2f2240 - 0x2f22a8
void sub_002F2240_0x2f2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2240_0x2f2240");
#endif

    ctx->pc = 0x2f2240u;

    // 0x2f2240: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2244: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f2244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f2248: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2f2248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f224c: 0x2463b748  addiu       $v1, $v1, -0x48B8
    ctx->pc = 0x2f224cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948680));
    // 0x2f2250: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f2250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2254: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f2254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2258: 0x246a0808  addiu       $t2, $v1, 0x808
    ctx->pc = 0x2f2258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 2056));
    // 0x2f225c: 0x3c0b006b  lui         $t3, 0x6B
    ctx->pc = 0x2f225cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)107 << 16));
    // 0x2f2260: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2f2260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f2264: 0xaca80800  sw          $t0, 0x800($a1)
    ctx->pc = 0x2f2264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2048), GPR_U32(ctx, 8));
    // 0x2f2268: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f2268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f226c: 0xacc80804  sw          $t0, 0x804($a2)
    ctx->pc = 0x2f226cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2052), GPR_U32(ctx, 8));
    // 0x2f2270: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f2270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2274: 0xace00894  sw          $zero, 0x894($a3)
    ctx->pc = 0x2f2274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2196), GPR_U32(ctx, 0));
    // 0x2f2278: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2f2278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f227c: 0xaca90888  sw          $t1, 0x888($a1)
    ctx->pc = 0x2f227cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2184), GPR_U32(ctx, 9));
    // 0x2f2280: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2f2280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2f2284: 0xacc0088c  sw          $zero, 0x88C($a2)
    ctx->pc = 0x2f2284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2188), GPR_U32(ctx, 0));
    // 0x2f2288: 0xac600890  sw          $zero, 0x890($v1)
    ctx->pc = 0x2f2288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2192), GPR_U32(ctx, 0));
    // 0x2f228c: 0x25670158  addiu       $a3, $t3, 0x158
    ctx->pc = 0x2f228cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 344));
    // 0x2f2290: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x6B0158u));
    // 0x2f2294: 0x80e50001  lb          $a1, 0x1($a3)
    ctx->pc = 0x2f2294u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x6B0159u));
    // 0x2f2298: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f2298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f229c: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x2f229cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f22a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F22A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22A0u;
        // 0x2f22a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F22A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F22A8u;
}
