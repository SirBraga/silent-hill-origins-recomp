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

// Function: sub_0029BB00
// Address: 0x29bb00 - 0x29bca0
void sub_0029BB00_0x29bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BB00_0x29bb00");
#endif

    switch (ctx->pc) {
        case 0x29bb34u: goto label_29bb34;
        case 0x29bb48u: goto label_29bb48;
        case 0x29bb60u: goto label_29bb60;
        case 0x29bbc0u: goto label_29bbc0;
        case 0x29bc08u: goto label_29bc08;
        case 0x29bc28u: goto label_29bc28;
        case 0x29bc70u: goto label_29bc70;
        default: break;
    }

    ctx->pc = 0x29bb00u;

    // 0x29bb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29bb04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29bb08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29bb0c: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x29bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x29bb10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29bb14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29bb18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb1c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x29bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x29bb20: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x29bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x29bb24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BB24u;
    {
        const bool branch_taken_0x29bb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB24u;
        // 0x29bb28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb24) {
            ctx->pc = 0x29BB34u;
            goto label_29bb34;
        }
    }
    ctx->pc = 0x29BB2Cu;
    // 0x29bb2c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x29BB2Cu;
    SET_GPR_U32(ctx, 31, 0x29BB34u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x29BB2Cu, 0x29BB34u)) {
        return;
    }
    ctx->pc = 0x29BB34u;
label_29bb34:
    // 0x29bb34: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x29bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29bb38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BB38u;
    {
        const bool branch_taken_0x29bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB38u;
        // 0x29bb3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb38) {
            ctx->pc = 0x29BB4Cu;
            goto label_29bb4c;
        }
    }
    ctx->pc = 0x29BB40u;
    // 0x29bb40: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x29BB40u;
    SET_GPR_U32(ctx, 31, 0x29BB48u);
    ctx->pc = 0x29BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB40u;
    // 0x29bb44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x29BB40u, 0x29BB48u)) {
        return;
    }
    ctx->pc = 0x29BB48u;
label_29bb48:
    // 0x29bb48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29bb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29bb4c:
    // 0x29bb4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29bb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bb50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29bb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bb54: 0x3e00008  jr          $ra
    ctx->pc = 0x29BB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB54u;
        // 0x29bb58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BB5Cu;
    // 0x29bb5c: 0x0  nop
    ctx->pc = 0x29bb5cu;
    // NOP
label_29bb60:
    // 0x29bb60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29bb64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x29bb64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb68: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x29bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x29bb6c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x29bb6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb70: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BB70u;
    {
        const bool branch_taken_0x29bb70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB70u;
        // 0x29bb74: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb70) {
            ctx->pc = 0x29BB84u;
            goto label_29bb84;
        }
    }
    ctx->pc = 0x29BB78u;
    // 0x29bb78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29bb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29BB7Cu;
    {
        const bool branch_taken_0x29bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB7Cu;
        // 0x29bb80: 0xa0e2001a  sb          $v0, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb7c) {
            ctx->pc = 0x29BB88u;
            goto label_29bb88;
        }
    }
    ctx->pc = 0x29BB84u;
label_29bb84:
    // 0x29bb84: 0xa0e0001a  sb          $zero, 0x1A($a3)
    ctx->pc = 0x29bb84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 0));
label_29bb88:
    // 0x29bb88: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x29bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29bb8c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x29bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x29bb90: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x29bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29bb94: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x29bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x29bb98: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x29bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x29bb9c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x29bb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bba0: 0xa4e30018  sh          $v1, 0x18($a3)
    ctx->pc = 0x29bba0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x29bba4: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x29bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x29bba8: 0xace5001c  sw          $a1, 0x1C($a3)
    ctx->pc = 0x29bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
    // 0x29bbac: 0xa0e0001b  sb          $zero, 0x1B($a3)
    ctx->pc = 0x29bbacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x29bbb0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x29bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x29bbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x29BBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BBB4u;
        // 0x29bbb8: 0xace00020  sw          $zero, 0x20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BBBCu;
    // 0x29bbbc: 0x0  nop
    ctx->pc = 0x29bbbcu;
    // NOP
label_29bbc0:
    // 0x29bbc0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BBC0u;
    {
        const bool branch_taken_0x29bbc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BBC0u;
        // 0x29bbc4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bbc0) {
            ctx->pc = 0x29BBD4u;
            goto label_29bbd4;
        }
    }
    ctx->pc = 0x29BBC8u;
    // 0x29bbc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29bbcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29BBCCu;
    {
        const bool branch_taken_0x29bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BBCCu;
        // 0x29bbd0: 0xa0e2001a  sb          $v0, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bbcc) {
            ctx->pc = 0x29BBD8u;
            goto label_29bbd8;
        }
    }
    ctx->pc = 0x29BBD4u;
label_29bbd4:
    // 0x29bbd4: 0xa0e0001a  sb          $zero, 0x1A($a3)
    ctx->pc = 0x29bbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 0));
label_29bbd8:
    // 0x29bbd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29bbdc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x29bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x29bbe0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29bbe4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x29bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x29bbe8: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x29bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x29bbec: 0xa4e20018  sh          $v0, 0x18($a3)
    ctx->pc = 0x29bbecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x29bbf0: 0xfce30010  sd          $v1, 0x10($a3)
    ctx->pc = 0x29bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 3));
    // 0x29bbf4: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x29bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
    // 0x29bbf8: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x29bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x29bbfc: 0xa0e0001b  sb          $zero, 0x1B($a3)
    ctx->pc = 0x29bbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x29bc00: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC00u;
        // 0x29bc04: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC08u;
label_29bc08:
    // 0x29bc08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29bc0c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29bc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29bc10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BC10u;
    {
        const bool branch_taken_0x29bc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc10) {
            ctx->pc = 0x29BC20u;
            goto label_29bc20;
        }
    }
    ctx->pc = 0x29BC18u;
    // 0x29bc18: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC18u;
        // 0x29bc1c: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC20u;
label_29bc20:
    // 0x29bc20: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC20u;
        // 0x29bc24: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC28u;
label_29bc28:
    // 0x29bc28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29bc2c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x29bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x29bc30: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29BC30u;
    {
        const bool branch_taken_0x29bc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc30) {
            ctx->pc = 0x29BC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BC30u;
            // 0x29bc34: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BC3Cu;
            goto label_29bc3c;
        }
    }
    ctx->pc = 0x29BC38u;
    // 0x29bc38: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x29bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_29bc3c:
    // 0x29bc3c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29BC3Cu;
    {
        const bool branch_taken_0x29bc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc3c) {
            ctx->pc = 0x29BC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BC3Cu;
            // 0x29bc40: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BC48u;
            goto label_29bc48;
        }
    }
    ctx->pc = 0x29BC44u;
    // 0x29bc44: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x29bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_29bc48:
    // 0x29bc48: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29BC48u;
    {
        const bool branch_taken_0x29bc48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC48u;
        // 0x29bc4c: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc48) {
            ctx->pc = 0x29BC68u;
            goto label_29bc68;
        }
    }
    ctx->pc = 0x29BC50u;
    // 0x29bc50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BC50u;
    {
        const bool branch_taken_0x29bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc50) {
            ctx->pc = 0x29BC60u;
            goto label_29bc60;
        }
    }
    ctx->pc = 0x29BC58u;
    // 0x29bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC58u;
        // 0x29bc5c: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC60u;
label_29bc60:
    // 0x29bc60: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC60u;
        // 0x29bc64: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC68u;
label_29bc68:
    // 0x29bc68: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC68u;
        // 0x29bc6c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC70u;
label_29bc70:
    // 0x29bc70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29bc74: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x29bc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x29bc78: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29BC78u;
    {
        const bool branch_taken_0x29bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc78) {
            ctx->pc = 0x29BC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BC78u;
            // 0x29bc7c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BC84u;
            goto label_29bc84;
        }
    }
    ctx->pc = 0x29BC80u;
    // 0x29bc80: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x29bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_29bc84:
    // 0x29bc84: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29BC84u;
    {
        const bool branch_taken_0x29bc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc84) {
            ctx->pc = 0x29BC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BC84u;
            // 0x29bc88: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BC90u;
            goto label_29bc90;
        }
    }
    ctx->pc = 0x29BC8Cu;
    // 0x29bc8c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x29bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_29bc90:
    // 0x29bc90: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x29bc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x29bc94: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC94u;
        // 0x29bc98: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC9Cu;
    // 0x29bc9c: 0x0  nop
    ctx->pc = 0x29bc9cu;
    // NOP
    ctx->pc = 0x29bca0u;
}
