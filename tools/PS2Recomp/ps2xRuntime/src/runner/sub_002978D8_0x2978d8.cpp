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

// Function: sub_002978D8
// Address: 0x2978d8 - 0x2979c0
void sub_002978D8_0x2978d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002978D8_0x2978d8");
#endif

    ctx->pc = 0x2978d8u;

    // 0x2978d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2978d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2978dc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2978dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978e0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2978e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978e4: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2978E4u;
    {
        const bool branch_taken_0x2978e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978E4u;
        // 0x2978e8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978e4) {
            ctx->pc = 0x297934u;
            goto label_297934;
        }
    }
    ctx->pc = 0x2978ECu;
    // 0x2978ec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2978ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2978f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2978f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2978f4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2978f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2978f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2978f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2978fc: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x2978fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x297900: 0x2484da40  addiu       $a0, $a0, -0x25C0
    ctx->pc = 0x297900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957632));
    // 0x297904: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x297904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x297908: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x297908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29790c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x29790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x297910: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x297910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x297914: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x297914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x297918: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x297918u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x29791c: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x29791cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x297920: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x297920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x297924: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x297924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x297928: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x297928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x29792c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29792cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x297930: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x297930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_297934:
    // 0x297934: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x297934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x297938: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x297938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29793c: 0x2444d868  addiu       $a0, $v0, -0x2798
    ctx->pc = 0x29793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957160));
    // 0x297940: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x297940u;
    {
        const bool branch_taken_0x297940 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x297944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297940u;
        // 0x297944: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297940) {
            ctx->pc = 0x297970u;
            goto label_297970;
        }
    }
    ctx->pc = 0x297948u;
    // 0x297948: 0xdc45d868  ld          $a1, -0x2798($v0)
    ctx->pc = 0x297948u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957160)));
    // 0x29794c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x29794cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x297950: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x297950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x297954: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x297954u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x297958: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x297958u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x29795c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x297960: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x297960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x297964: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x297964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x297968: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x297968u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x29796c: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x29796cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_297970:
    // 0x297970: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x297970u;
    {
        const bool branch_taken_0x297970 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x297970) {
            ctx->pc = 0x297974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297970u;
            // 0x297974: 0xa0c0001a  sb          $zero, 0x1A($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297980u;
            goto label_297980;
        }
    }
    ctx->pc = 0x297978u;
    // 0x297978: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29797c: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x29797cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
label_297980:
    // 0x297980: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x297980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x297984: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x297984u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x297988: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x297988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x29798c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x29798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x297990: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x297990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x297994: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x297994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x297998: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x297998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x29799c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x29799cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979a0: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x2979a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x2979a4: 0xa4c40018  sh          $a0, 0x18($a2)
    ctx->pc = 0x2979a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x2979a8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2979a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2979ac: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x2979acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x2979b0: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2979b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2979b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2979B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2979B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979B4u;
        // 0x2979b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2979BCu;
    // 0x2979bc: 0x0  nop
    ctx->pc = 0x2979bcu;
    // NOP
    ctx->pc = 0x2979c0u;
}
