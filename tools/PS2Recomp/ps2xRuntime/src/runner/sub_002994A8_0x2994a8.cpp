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

// Function: sub_002994A8
// Address: 0x2994a8 - 0x299588
void sub_002994A8_0x2994a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002994A8_0x2994a8");
#endif

    ctx->pc = 0x2994a8u;

    // 0x2994a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2994a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2994ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2994acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994b0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2994b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994b4: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2994B4u;
    {
        const bool branch_taken_0x2994b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2994B4u;
        // 0x2994b8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2994b4) {
            ctx->pc = 0x299504u;
            goto label_299504;
        }
    }
    ctx->pc = 0x2994BCu;
    // 0x2994bc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2994c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2994c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2994c4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2994c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2994c8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2994c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2994cc: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x2994ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x2994d0: 0x2484da40  addiu       $a0, $a0, -0x25C0
    ctx->pc = 0x2994d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957632));
    // 0x2994d4: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x2994d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x2994d8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2994d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2994dc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2994dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2994e0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2994e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2994e4: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x2994e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x2994e8: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x2994e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x2994ec: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x2994ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x2994f0: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x2994f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x2994f4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2994f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2994f8: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x2994f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x2994fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2994fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x299500: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x299500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_299504:
    // 0x299504: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x299504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x299508: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x299508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29950c: 0x2444d878  addiu       $a0, $v0, -0x2788
    ctx->pc = 0x29950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957176));
    // 0x299510: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x299510u;
    {
        const bool branch_taken_0x299510 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x299514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299510u;
        // 0x299514: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299510) {
            ctx->pc = 0x299540u;
            goto label_299540;
        }
    }
    ctx->pc = 0x299518u;
    // 0x299518: 0xdc45d878  ld          $a1, -0x2788($v0)
    ctx->pc = 0x299518u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957176)));
    // 0x29951c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x29951cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299520: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x299520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x299524: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x299524u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299528: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x299528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x29952c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299530: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x299530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x299534: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x299534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x299538: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x299538u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x29953c: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x29953cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_299540:
    // 0x299540: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x299540u;
    {
        const bool branch_taken_0x299540 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x299540) {
            ctx->pc = 0x299544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299540u;
            // 0x299544: 0xa0c0001a  sb          $zero, 0x1A($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299550u;
            goto label_299550;
        }
    }
    ctx->pc = 0x299548u;
    // 0x299548: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x299548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29954c: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x29954cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
label_299550:
    // 0x299550: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x299550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x299554: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x299554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x299558: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x299558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29955c: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x29955cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x299560: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x299560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x299564: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x299564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299568: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x299568u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x29956c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x29956cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x299570: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x299570u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x299574: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x299574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x299578: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x299578u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x29957c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x29957cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x299580: 0x3e00008  jr          $ra
    ctx->pc = 0x299580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299580u;
        // 0x299584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299588u;
}
