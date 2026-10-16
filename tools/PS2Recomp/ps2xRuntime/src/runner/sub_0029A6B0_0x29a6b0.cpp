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

// Function: sub_0029A6B0
// Address: 0x29a6b0 - 0x29a758
void sub_0029A6B0_0x29a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A6B0_0x29a6b0");
#endif

    ctx->pc = 0x29a6b0u;

    // 0x29a6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a6b4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x29a6b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6b8: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29A6B8u;
    {
        const bool branch_taken_0x29a6b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6B8u;
        // 0x29a6bc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6b8) {
            ctx->pc = 0x29A708u;
            goto label_29a708;
        }
    }
    ctx->pc = 0x29A6C0u;
    // 0x29a6c0: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x29a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x29a6c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29a6c8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x29a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x29a6cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x29a6d0: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x29a6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x29a6d4: 0x2484da40  addiu       $a0, $a0, -0x25C0
    ctx->pc = 0x29a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957632));
    // 0x29a6d8: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x29a6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a6dc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29a6e0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x29a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x29a6e4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x29a6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29a6e8: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x29a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x29a6ec: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x29a6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x29a6f0: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x29a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x29a6f4: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x29a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x29a6f8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x29a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x29a6fc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x29a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x29a700: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29a700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29a704: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29a704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_29a708:
    // 0x29a708: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x29a708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29a70c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29a710: 0x2444d868  addiu       $a0, $v0, -0x2798
    ctx->pc = 0x29a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957160));
    // 0x29a714: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x29A714u;
    {
        const bool branch_taken_0x29a714 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A714u;
        // 0x29a718: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a714) {
            ctx->pc = 0x29A744u;
            goto label_29a744;
        }
    }
    ctx->pc = 0x29A71Cu;
    // 0x29a71c: 0xdc45d868  ld          $a1, -0x2798($v0)
    ctx->pc = 0x29a71cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957160)));
    // 0x29a720: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x29a720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a724: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x29a728: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x29a728u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a72c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x29a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29a730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a734: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x29a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x29a738: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x29a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x29a73c: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x29a73cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x29a740: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x29a740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_29a744:
    // 0x29a744: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x29a744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a748: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x29a748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x29a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A74Cu;
        // 0x29a750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A754u;
    // 0x29a754: 0x0  nop
    ctx->pc = 0x29a754u;
    // NOP
    ctx->pc = 0x29a758u;
}
