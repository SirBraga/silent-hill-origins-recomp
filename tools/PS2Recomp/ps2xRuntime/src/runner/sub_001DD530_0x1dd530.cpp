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

// Function: sub_001DD530
// Address: 0x1dd530 - 0x1dd5d8
void sub_001DD530_0x1dd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD530_0x1dd530");
#endif

    ctx->pc = 0x1dd530u;

    // 0x1dd530: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1dd534: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dd534u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dd538: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD538u;
    {
        const bool branch_taken_0x1dd538 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD538u;
        // 0x1dd53c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd538) {
            ctx->pc = 0x1DD5B8u;
            goto label_1dd5b8;
        }
    }
    ctx->pc = 0x1DD540u;
    // 0x1dd540: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1dd540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd544: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1dd544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dd548: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dd548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1dd54c: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd550: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dd550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd554: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1dd554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1dd558: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dd558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd55c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1dd55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dd560: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1dd560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1dd564: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dd564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd568: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd56c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1dd56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1dd570: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dd570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd574: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1dd574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dd578: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1dd578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1dd57c: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd580: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dd580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd584: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1dd584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1dd588: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dd588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd58c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1dd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dd590: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1dd590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1dd594: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dd594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd598: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dd598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd59c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1dd59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1dd5a0: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dd5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd5a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1dd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dd5a8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1dd5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1dd5ac: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960740)));
    // 0x1dd5b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dd5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd5b4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1dd5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_1dd5b8:
    // 0x1dd5b8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1dd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1dd5bc: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E670u));
    // 0x1dd5c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD5C0u;
    {
        const bool branch_taken_0x1dd5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5c0) {
            ctx->pc = 0x1DD5D0u;
            goto label_1dd5d0;
        }
    }
    ctx->pc = 0x1DD5C8u;
    // 0x1dd5c8: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1dd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1dd5cc: 0xac62e670  sw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960752), GPR_U32(ctx, 2));
label_1dd5d0:
    // 0x1dd5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5D0u;
        // 0x1dd5d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5D8u;
}
