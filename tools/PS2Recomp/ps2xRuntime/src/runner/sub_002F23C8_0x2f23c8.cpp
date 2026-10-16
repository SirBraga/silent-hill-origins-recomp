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

// Function: sub_002F23C8
// Address: 0x2f23c8 - 0x2f2458
void sub_002F23C8_0x2f23c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F23C8_0x2f23c8");
#endif

    switch (ctx->pc) {
        case 0x2f241cu: goto label_2f241c;
        default: break;
    }

    ctx->pc = 0x2f23c8u;

    // 0x2f23c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f23c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f23cc: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f23d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f23d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f23d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f23d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f23d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f23d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f23dc: 0x2023818  mult        $a3, $s0, $v0
    ctx->pc = 0x2f23dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f23e0: 0x3c110072  lui         $s1, 0x72
    ctx->pc = 0x2f23e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)114 << 16));
    // 0x2f23e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f23e8: 0x2625b748  addiu       $a1, $s1, -0x48B8
    ctx->pc = 0x2f23e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948680));
    // 0x2f23ec: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2f23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2f23f0: 0x8c460800  lw          $a2, 0x800($v0)
    ctx->pc = 0x2f23f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x2f23f4: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2F23F4u;
    {
        const bool branch_taken_0x2f23f4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2F23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23F4u;
        // 0x2f23f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23f4) {
            ctx->pc = 0x2F242Cu;
            goto label_2f242c;
        }
    }
    ctx->pc = 0x2F23FCu;
    // 0x2f23fc: 0x8c430894  lw          $v1, 0x894($v0)
    ctx->pc = 0x2f23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2196)));
    // 0x2f2400: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F2400u;
    {
        const bool branch_taken_0x2f2400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2400u;
        // 0x2f2404: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2400) {
            ctx->pc = 0x2F2430u;
            goto label_2f2430;
        }
    }
    ctx->pc = 0x2F2408u;
    // 0x2f2408: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x2f2408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x2f240c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2410: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2f2410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f2414: 0xc0bd9fc  jal         func_2F67F0
    ctx->pc = 0x2F2414u;
    SET_GPR_U32(ctx, 31, 0x2F241Cu);
    ctx->pc = 0x2F2418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2414u;
    // 0x2f2418: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67F0u, 0x2F2414u, 0x2F241Cu)) {
        return;
    }
    ctx->pc = 0x2F241Cu;
label_2f241c:
    // 0x2f241c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F241Cu;
    {
        const bool branch_taken_0x2f241c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F241Cu;
        // 0x2f2420: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f241c) {
            ctx->pc = 0x2F2430u;
            goto label_2f2430;
        }
    }
    ctx->pc = 0x2F2424u;
    // 0x2f2424: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2424u;
    {
        const bool branch_taken_0x2f2424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2424u;
        // 0x2f2428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2424) {
            ctx->pc = 0x2F2444u;
            goto label_2f2444;
        }
    }
    ctx->pc = 0x2F242Cu;
label_2f242c:
    // 0x2f242c: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_2f2430:
    // 0x2f2430: 0x2624b748  addiu       $a0, $s1, -0x48B8
    ctx->pc = 0x2f2430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948680));
    // 0x2f2434: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2f2434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f243c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f2440: 0xac800894  sw          $zero, 0x894($a0)
    ctx->pc = 0x2f2440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 0));
label_2f2444:
    // 0x2f2444: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f2444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2448: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f244c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f244cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2450: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2450u;
        // 0x2f2454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2458u;
}
