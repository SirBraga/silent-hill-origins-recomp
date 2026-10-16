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

// Function: sub_003124F4
// Address: 0x3124f4 - 0x3125ac
void sub_003124F4_0x3124f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003124F4_0x3124f4");
#endif

    switch (ctx->pc) {
        case 0x312530u: goto label_312530;
        case 0x312554u: goto label_312554;
        case 0x31258cu: goto label_31258c;
        default: break;
    }

    ctx->pc = 0x3124f4u;

    // 0x3124f4: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3124f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3124f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3124F8u;
    {
        const bool branch_taken_0x3124f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3124FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124F8u;
        // 0x3124fc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124f8) {
            ctx->pc = 0x312570u;
            goto label_312570;
        }
    }
    ctx->pc = 0x312500u;
    // 0x312500: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x312500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x312504: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x312504u;
    {
        const bool branch_taken_0x312504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312504u;
        // 0x312508: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312504) {
            ctx->pc = 0x312570u;
            goto label_312570;
        }
    }
    ctx->pc = 0x31250Cu;
    // 0x31250c: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x31250cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x312510: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x312510u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x312514: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x312514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312518: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x312518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x31251c: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x31251cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x312520: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x312520u;
    { __m128i src = GPR_VEC(ctx, 8); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x312524: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x312524u;
    {
        const bool branch_taken_0x312524 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x312528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312524u;
        // 0x312528: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312524) {
            ctx->pc = 0x312560u;
            goto label_312560;
        }
    }
    ctx->pc = 0x31252Cu;
    // 0x31252c: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x31252cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_312530:
    // 0x312530: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x312530u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x312534: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x312534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x312538: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x312538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31253c: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x31253cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x312540: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x312540u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x312544: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x312544u;
    {
        const bool branch_taken_0x312544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312544u;
        // 0x312548: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312544) {
            ctx->pc = 0x312530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312530;
        }
    }
    ctx->pc = 0x31254Cu;
    // 0x31254c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31254Cu;
    {
        const bool branch_taken_0x31254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31254Cu;
        // 0x312550: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31254c) {
            ctx->pc = 0x312560u;
            goto label_312560;
        }
    }
    ctx->pc = 0x312554u;
label_312554:
    // 0x312554: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x312554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x312558: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x312558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x31255c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x31255cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_312560:
    // 0x312560: 0x0  nop
    ctx->pc = 0x312560u;
    // NOP
    // 0x312564: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x312564u;
    {
        const bool branch_taken_0x312564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312564) {
            ctx->pc = 0x312568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312564u;
            // 0x312568: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312554;
        }
    }
    ctx->pc = 0x31256Cu;
    // 0x31256c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x31256cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_312570:
    // 0x312570: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x312574: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x312574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x312578: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31257c: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31257Cu;
    {
        const bool branch_taken_0x31257c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x31257c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312584u;
    // 0x312584: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x312588: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31258c:
    // 0x31258c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x31258cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x312590: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x312590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x312594: 0x0  nop
    ctx->pc = 0x312594u;
    // NOP
    // 0x312598: 0x0  nop
    ctx->pc = 0x312598u;
    // NOP
    // 0x31259c: 0x14c2fffb  bne         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31259Cu;
    {
        const bool branch_taken_0x31259c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3125A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31259Cu;
        // 0x3125a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31259c) {
            ctx->pc = 0x31258Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31258c;
        }
    }
    ctx->pc = 0x3125A4u;
label_3125a4:
    // 0x3125a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3125A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3125A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125A4u;
        // 0x3125a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3125A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3125ACu;
}
