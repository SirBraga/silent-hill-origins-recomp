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

// Function: sub_001034B0
// Address: 0x1034b0 - 0x103540
void sub_001034B0_0x1034b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001034B0_0x1034b0");
#endif

    ctx->pc = 0x1034b0u;

    // 0x1034b0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1034b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1034b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1034b8: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1034B8u;
    {
        const bool branch_taken_0x1034b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1034BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034B8u;
        // 0x1034bc: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034b8) {
            ctx->pc = 0x1034C4u;
            goto label_1034c4;
        }
    }
    ctx->pc = 0x1034C0u;
    // 0x1034c0: 0x8d0601a0  lw          $a2, 0x1A0($t0)
    ctx->pc = 0x1034c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 416)));
label_1034c4:
    // 0x1034c4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1034c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1034c8: 0x8d0300d8  lw          $v1, 0xD8($t0)
    ctx->pc = 0x1034c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
    // 0x1034cc: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x1034ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1034d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1034d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1034d4: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1034d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1034d8: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1034d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1034dc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1034DCu;
    {
        const bool branch_taken_0x1034dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1034dc) {
            ctx->pc = 0x1034E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1034DCu;
            // 0x1034e0: 0x8d0300d8  lw          $v1, 0xD8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10352Cu;
            goto label_10352c;
        }
    }
    ctx->pc = 0x1034E4u;
    // 0x1034e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1034e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1034e8: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1034e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1034ec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1034ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1034f0: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x1034f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1034f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1034f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1034f8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1034f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1034fc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1034fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103500: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x103500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103504: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x103508: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x103508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x10350c: 0x8d0200d8  lw          $v0, 0xD8($t0)
    ctx->pc = 0x10350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
    // 0x103510: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x103510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x103514: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x103514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x103518: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x103518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10351c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x10351cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x103520: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x103520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x103524: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x103524u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x103528: 0x8d0300d8  lw          $v1, 0xD8($t0)
    ctx->pc = 0x103528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 216)));
label_10352c:
    // 0x10352c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x10352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x103530: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x103530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x103534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x103534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x103538: 0x3e00008  jr          $ra
    ctx->pc = 0x103538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103538u;
        // 0x10353c: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103540u;
}
