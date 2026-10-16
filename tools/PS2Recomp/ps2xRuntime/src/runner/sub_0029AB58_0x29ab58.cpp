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

// Function: sub_0029AB58
// Address: 0x29ab58 - 0x29abf8
void sub_0029AB58_0x29ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AB58_0x29ab58");
#endif

    ctx->pc = 0x29ab58u;

    // 0x29ab58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ab5c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x29ab5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab60: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29AB60u;
    {
        const bool branch_taken_0x29ab60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB60u;
        // 0x29ab64: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab60) {
            ctx->pc = 0x29ABB0u;
            goto label_29abb0;
        }
    }
    ctx->pc = 0x29AB68u;
    // 0x29ab68: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x29ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x29ab6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29ab70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x29ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x29ab74: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x29ab78: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x29ab78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ab7c: 0x2484da40  addiu       $a0, $a0, -0x25C0
    ctx->pc = 0x29ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957632));
    // 0x29ab80: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x29ab80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ab84: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29ab88: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x29ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x29ab8c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x29ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29ab90: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x29ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x29ab94: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x29ab94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x29ab98: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x29ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x29ab9c: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x29ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x29aba0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x29aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x29aba4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x29aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x29aba8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29abac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29abacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_29abb0:
    // 0x29abb0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x29abb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29abb4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29abb8: 0x2444d878  addiu       $a0, $v0, -0x2788
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957176));
    // 0x29abbc: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x29ABBCu;
    {
        const bool branch_taken_0x29abbc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABBCu;
        // 0x29abc0: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abbc) {
            ctx->pc = 0x29ABECu;
            goto label_29abec;
        }
    }
    ctx->pc = 0x29ABC4u;
    // 0x29abc4: 0xdc45d878  ld          $a1, -0x2788($v0)
    ctx->pc = 0x29abc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957176)));
    // 0x29abc8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x29abc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29abcc: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x29abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x29abd0: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x29abd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29abd4: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x29abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29abd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29abdc: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x29abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x29abe0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x29abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x29abe4: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x29abe4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x29abe8: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x29abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_29abec:
    // 0x29abec: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x29abecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x29ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABF0u;
        // 0x29abf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ABF8u;
}
