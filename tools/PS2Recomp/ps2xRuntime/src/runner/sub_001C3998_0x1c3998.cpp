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

// Function: sub_001C3998
// Address: 0x1c3998 - 0x1c3a60
void sub_001C3998_0x1c3998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3998_0x1c3998");
#endif

    switch (ctx->pc) {
        case 0x1c3998u: goto label_1c3998;
        case 0x1c399cu: goto label_1c399c;
        case 0x1c39a0u: goto label_1c39a0;
        case 0x1c39a4u: goto label_1c39a4;
        case 0x1c39a8u: goto label_1c39a8;
        case 0x1c39acu: goto label_1c39ac;
        case 0x1c39b0u: goto label_1c39b0;
        case 0x1c39b4u: goto label_1c39b4;
        case 0x1c39b8u: goto label_1c39b8;
        case 0x1c39bcu: goto label_1c39bc;
        case 0x1c39c0u: goto label_1c39c0;
        case 0x1c39c4u: goto label_1c39c4;
        case 0x1c39c8u: goto label_1c39c8;
        case 0x1c39ccu: goto label_1c39cc;
        case 0x1c39d0u: goto label_1c39d0;
        case 0x1c39d4u: goto label_1c39d4;
        case 0x1c39d8u: goto label_1c39d8;
        case 0x1c39dcu: goto label_1c39dc;
        case 0x1c39e0u: goto label_1c39e0;
        case 0x1c39e4u: goto label_1c39e4;
        case 0x1c39e8u: goto label_1c39e8;
        case 0x1c39ecu: goto label_1c39ec;
        case 0x1c39f0u: goto label_1c39f0;
        case 0x1c39f4u: goto label_1c39f4;
        case 0x1c39f8u: goto label_1c39f8;
        case 0x1c39fcu: goto label_1c39fc;
        case 0x1c3a00u: goto label_1c3a00;
        case 0x1c3a04u: goto label_1c3a04;
        case 0x1c3a08u: goto label_1c3a08;
        case 0x1c3a0cu: goto label_1c3a0c;
        case 0x1c3a10u: goto label_1c3a10;
        case 0x1c3a14u: goto label_1c3a14;
        case 0x1c3a18u: goto label_1c3a18;
        case 0x1c3a1cu: goto label_1c3a1c;
        case 0x1c3a20u: goto label_1c3a20;
        case 0x1c3a24u: goto label_1c3a24;
        case 0x1c3a28u: goto label_1c3a28;
        case 0x1c3a2cu: goto label_1c3a2c;
        case 0x1c3a30u: goto label_1c3a30;
        case 0x1c3a34u: goto label_1c3a34;
        case 0x1c3a38u: goto label_1c3a38;
        case 0x1c3a3cu: goto label_1c3a3c;
        case 0x1c3a40u: goto label_1c3a40;
        case 0x1c3a44u: goto label_1c3a44;
        case 0x1c3a48u: goto label_1c3a48;
        case 0x1c3a4cu: goto label_1c3a4c;
        case 0x1c3a50u: goto label_1c3a50;
        case 0x1c3a54u: goto label_1c3a54;
        case 0x1c3a58u: goto label_1c3a58;
        case 0x1c3a5cu: goto label_1c3a5c;
        default: break;
    }

    ctx->pc = 0x1c3998u;

label_1c3998:
    // 0x1c3998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c399c:
    // 0x1c399c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1c39a0:
    // 0x1c39a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c39a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c39a4:
    // 0x1c39a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c39a8:
    // 0x1c39a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c39ac:
    // 0x1c39ac: 0xc06bbe0  jal         func_1AEF80
label_1c39b0:
    if (ctx->pc == 0x1C39B0u) {
        ctx->pc = 0x1C39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39ACu;
        // 0x1c39b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39B4u;
        goto label_1c39b4;
    }
    ctx->pc = 0x1C39ACu;
    SET_GPR_U32(ctx, 31, 0x1C39B4u);
    ctx->pc = 0x1C39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39ACu;
    // 0x1c39b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C39ACu, 0x1C39B4u)) {
        return;
    }
    ctx->pc = 0x1C39B4u;
label_1c39b4:
    // 0x1c39b4: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x1c39b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1c39b8:
    // 0x1c39b8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_1c39bc:
    if (ctx->pc == 0x1C39BCu) {
        ctx->pc = 0x1C39C0u;
        goto label_1c39c0;
    }
    ctx->pc = 0x1C39B8u;
    {
        const bool branch_taken_0x1c39b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39b8) {
            ctx->pc = 0x1C3A14u;
            goto label_1c3a14;
        }
    }
    ctx->pc = 0x1C39C0u;
label_1c39c0:
    // 0x1c39c0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1c39c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c39c4:
    // 0x1c39c4: 0x0  nop
    ctx->pc = 0x1c39c4u;
    // NOP
label_1c39c8:
    // 0x1c39c8: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_1c39cc:
    if (ctx->pc == 0x1C39CCu) {
        ctx->pc = 0x1C39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39C8u;
        // 0x1c39cc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39D0u;
        goto label_1c39d0;
    }
    ctx->pc = 0x1C39C8u;
    {
        const bool branch_taken_0x1c39c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39c8) {
            ctx->pc = 0x1C39CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C39C8u;
            // 0x1c39cc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3A0Cu;
            goto label_1c3a0c;
        }
    }
    ctx->pc = 0x1C39D0u;
label_1c39d0:
    // 0x1c39d0: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1c39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1c39d4:
    // 0x1c39d4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1c39d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c39d8:
    // 0x1c39d8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1c39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c39dc:
    // 0x1c39dc: 0x60f809  jalr        $v1
label_1c39e0:
    if (ctx->pc == 0x1C39E0u) {
        ctx->pc = 0x1C39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39DCu;
        // 0x1c39e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39E4u;
        goto label_1c39e4;
    }
    ctx->pc = 0x1C39DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C39E4u);
        ctx->pc = 0x1C39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39DCu;
        // 0x1c39e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C39DCu, 0x1C39E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C39E4u;
label_1c39e4:
    // 0x1c39e4: 0x8e460260  lw          $a2, 0x260($s2)
    ctx->pc = 0x1c39e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1c39e8:
    // 0x1c39e8: 0x54d00008  bnel        $a2, $s0, . + 4 + (0x8 << 2)
label_1c39ec:
    if (ctx->pc == 0x1C39ECu) {
        ctx->pc = 0x1C39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39E8u;
        // 0x1c39ec: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39F0u;
        goto label_1c39f0;
    }
    ctx->pc = 0x1C39E8u;
    {
        const bool branch_taken_0x1c39e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c39e8) {
            ctx->pc = 0x1C39ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C39E8u;
            // 0x1c39ec: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3A0Cu;
            goto label_1c3a0c;
        }
    }
    ctx->pc = 0x1C39F0u;
label_1c39f0:
    // 0x1c39f0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c39f4:
    // 0x1c39f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c39f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c39f8:
    // 0x1c39f8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1c39f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1c39fc:
    // 0x1c39fc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1c39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1c3a00:
    // 0x1c3a00: 0x60f809  jalr        $v1
label_1c3a04:
    if (ctx->pc == 0x1C3A04u) {
        ctx->pc = 0x1C3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A00u;
        // 0x1c3a04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A08u;
        goto label_1c3a08;
    }
    ctx->pc = 0x1C3A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3A08u);
        ctx->pc = 0x1C3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A00u;
        // 0x1c3a04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3A00u, 0x1C3A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3A08u;
label_1c3a08:
    // 0x1c3a08: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1c3a08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c3a0c:
    // 0x1c3a0c: 0x5620ffee  bnel        $s1, $zero, . + 4 + (-0x12 << 2)
label_1c3a10:
    if (ctx->pc == 0x1C3A10u) {
        ctx->pc = 0x1C3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A0Cu;
        // 0x1c3a10: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A14u;
        goto label_1c3a14;
    }
    ctx->pc = 0x1C3A0Cu;
    {
        const bool branch_taken_0x1c3a0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a0c) {
            ctx->pc = 0x1C3A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3A0Cu;
            // 0x1c3a10: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C39C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c39c8;
        }
    }
    ctx->pc = 0x1C3A14u;
label_1c3a14:
    // 0x1c3a14: 0xc070f34  jal         func_1C3CD0
label_1c3a18:
    if (ctx->pc == 0x1C3A18u) {
        ctx->pc = 0x1C3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A14u;
        // 0x1c3a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A1Cu;
        goto label_1c3a1c;
    }
    ctx->pc = 0x1C3A14u;
    SET_GPR_U32(ctx, 31, 0x1C3A1Cu);
    ctx->pc = 0x1C3A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A14u;
    // 0x1c3a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3CD0u, 0x1C3A14u, 0x1C3A1Cu)) {
        return;
    }
    ctx->pc = 0x1C3A1Cu;
label_1c3a1c:
    // 0x1c3a1c: 0x8e420274  lw          $v0, 0x274($s2)
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_1c3a20:
    // 0x1c3a20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1c3a24:
    if (ctx->pc == 0x1C3A24u) {
        ctx->pc = 0x1C3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A20u;
        // 0x1c3a24: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A28u;
        goto label_1c3a28;
    }
    ctx->pc = 0x1C3A20u;
    {
        const bool branch_taken_0x1c3a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a20) {
            ctx->pc = 0x1C3A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3A20u;
            // 0x1c3a24: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3A34u;
            goto label_1c3a34;
        }
    }
    ctx->pc = 0x1C3A28u;
label_1c3a28:
    // 0x1c3a28: 0xc06bcc4  jal         func_1AF310
label_1c3a2c:
    if (ctx->pc == 0x1C3A2Cu) {
        ctx->pc = 0x1C3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A28u;
        // 0x1c3a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A30u;
        goto label_1c3a30;
    }
    ctx->pc = 0x1C3A28u;
    SET_GPR_U32(ctx, 31, 0x1C3A30u);
    ctx->pc = 0x1C3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A28u;
    // 0x1c3a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF310u, 0x1C3A28u, 0x1C3A30u)) {
        return;
    }
    ctx->pc = 0x1C3A30u;
label_1c3a30:
    // 0x1c3a30: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1c3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1c3a34:
    // 0x1c3a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a38:
    // 0x1c3a38: 0xc06bc90  jal         func_1AF240
label_1c3a3c:
    if (ctx->pc == 0x1C3A3Cu) {
        ctx->pc = 0x1C3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A38u;
        // 0x1c3a3c: 0xac520158  sw          $s2, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A40u;
        goto label_1c3a40;
    }
    ctx->pc = 0x1C3A38u;
    SET_GPR_U32(ctx, 31, 0x1C3A40u);
    ctx->pc = 0x1C3A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A38u;
    // 0x1c3a3c: 0xac520158  sw          $s2, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF240u, 0x1C3A38u, 0x1C3A40u)) {
        return;
    }
    ctx->pc = 0x1C3A40u;
label_1c3a40:
    // 0x1c3a40: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1c3a44:
    // 0x1c3a44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c3a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3a48:
    // 0x1c3a48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3a4c:
    // 0x1c3a4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c3a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3a50:
    // 0x1c3a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3a54:
    // 0x1c3a54: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1c3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1c3a58:
    // 0x1c3a58: 0x3e00008  jr          $ra
label_1c3a5c:
    if (ctx->pc == 0x1C3A5Cu) {
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A58u;
        // 0x1c3a5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A60u;
        goto label_fallthrough_0x1c3a58;
    }
    ctx->pc = 0x1C3A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A58u;
        // 0x1c3a5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3a58:
    ctx->pc = 0x1C3A60u;
}
