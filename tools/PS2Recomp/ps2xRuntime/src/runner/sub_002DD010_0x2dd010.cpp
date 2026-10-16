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

// Function: sub_002DD010
// Address: 0x2dd010 - 0x2dd108
void sub_002DD010_0x2dd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD010_0x2dd010");
#endif

    switch (ctx->pc) {
        case 0x2dd068u: goto label_2dd068;
        case 0x2dd07cu: goto label_2dd07c;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd090u: goto label_2dd090;
        case 0x2dd0acu: goto label_2dd0ac;
        case 0x2dd0c0u: goto label_2dd0c0;
        case 0x2dd0d8u: goto label_2dd0d8;
        default: break;
    }

    ctx->pc = 0x2dd010u;

    // 0x2dd010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dd014: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2dd014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2dd018: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2dd018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2dd01c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dd01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd020: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2dd020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2dd024: 0x2676000c  addiu       $s6, $s3, 0xC
    ctx->pc = 0x2dd024u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2dd028: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2dd028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2dd02c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2dd02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2dd030: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2dd030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2dd034: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2dd034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2dd038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd03c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2dd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dd040: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2dd040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dd044: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2dd044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2dd048: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x2dd048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dd04c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dd050: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2dd050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2dd054: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x2dd054u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dd058: 0x12560017  beq         $s2, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD058u;
    {
        const bool branch_taken_0x2dd058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD058u;
        // 0x2dd05c: 0x8f909020  lw          $s0, -0x6FE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd058) {
            ctx->pc = 0x2DD0B8u;
            goto label_2dd0b8;
        }
    }
    ctx->pc = 0x2DD060u;
    // 0x2dd060: 0x27959020  addiu       $s5, $gp, -0x6FE0
    ctx->pc = 0x2dd060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dd064: 0x0  nop
    ctx->pc = 0x2dd064u;
    // NOP
label_2dd068:
    // 0x2dd068: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dd068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd06c: 0x16150004  bne         $s0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD06Cu;
    {
        const bool branch_taken_0x2dd06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x2DD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD06Cu;
        // 0x2dd070: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd06c) {
            ctx->pc = 0x2DD080u;
            goto label_2dd080;
        }
    }
    ctx->pc = 0x2DD074u;
    // 0x2dd074: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DD074u;
    SET_GPR_U32(ctx, 31, 0x2DD07Cu);
    ctx->pc = 0x2DD078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD074u;
    // 0x2dd078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DD074u, 0x2DD07Cu)) {
        return;
    }
    ctx->pc = 0x2DD07Cu;
label_2dd07c:
    // 0x2dd07c: 0x0  nop
    ctx->pc = 0x2dd07cu;
    // NOP
label_2dd080:
    // 0x2dd080: 0x12150006  beq         $s0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD080u;
    {
        const bool branch_taken_0x2dd080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x2DD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD080u;
        // 0x2dd084: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd080) {
            ctx->pc = 0x2DD09Cu;
            goto label_2dd09c;
        }
    }
    ctx->pc = 0x2DD088u;
    // 0x2dd088: 0xc0b746c  jal         func_2DD1B0
    ctx->pc = 0x2DD088u;
    SET_GPR_U32(ctx, 31, 0x2DD090u);
    ctx->pc = 0x2DD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD088u;
    // 0x2dd08c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1B0u, 0x2DD088u, 0x2DD090u)) {
        return;
    }
    ctx->pc = 0x2DD090u;
label_2dd090:
    // 0x2dd090: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DD090u;
    {
        const bool branch_taken_0x2dd090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd090) {
            ctx->pc = 0x2DD094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD090u;
            // 0x2dd094: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd080;
        }
    }
    ctx->pc = 0x2DD098u;
    // 0x2dd098: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2dd098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd09c:
    // 0x2dd09c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD09Cu;
    {
        const bool branch_taken_0x2dd09c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd09c) {
            ctx->pc = 0x2DD0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD09Cu;
            // 0x2dd0a0: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD0B0u;
            goto label_2dd0b0;
        }
    }
    ctx->pc = 0x2DD0A4u;
    // 0x2dd0a4: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DD0A4u;
    SET_GPR_U32(ctx, 31, 0x2DD0ACu);
    ctx->pc = 0x2DD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0A4u;
    // 0x2dd0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DD0A4u, 0x2DD0ACu)) {
        return;
    }
    ctx->pc = 0x2DD0ACu;
label_2dd0ac:
    // 0x2dd0ac: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2dd0acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dd0b0:
    // 0x2dd0b0: 0x1656ffed  bne         $s2, $s6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DD0B0u;
    {
        const bool branch_taken_0x2dd0b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x2DD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B0u;
        // 0x2dd0b4: 0x8f909020  lw          $s0, -0x6FE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0b0) {
            ctx->pc = 0x2DD068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd068;
        }
    }
    ctx->pc = 0x2DD0B8u;
label_2dd0b8:
    // 0x2dd0b8: 0xc0b8370  jal         func_2E0DC0
    ctx->pc = 0x2DD0B8u;
    SET_GPR_U32(ctx, 31, 0x2DD0C0u);
    ctx->pc = 0x2DD0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0B8u;
    // 0x2dd0bc: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0DC0u, 0x2DD0B8u, 0x2DD0C0u)) {
        return;
    }
    ctx->pc = 0x2DD0C0u;
label_2dd0c0:
    // 0x2dd0c0: 0x8f828be4  lw          $v0, -0x741C($gp)
    ctx->pc = 0x2dd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x2dd0c4: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD0C4u;
    {
        const bool branch_taken_0x2dd0c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0C4u;
        // 0x2dd0c8: 0x8f828be0  lw          $v0, -0x7420($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0c4) {
            ctx->pc = 0x2DD0D0u;
            goto label_2dd0d0;
        }
    }
    ctx->pc = 0x2DD0CCu;
    // 0x2dd0cc: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dd0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
label_2dd0d0:
    // 0x2dd0d0: 0xc0b7506  jal         func_2DD418
    ctx->pc = 0x2DD0D0u;
    SET_GPR_U32(ctx, 31, 0x2DD0D8u);
    ctx->pc = 0x2DD0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0D0u;
    // 0x2dd0d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD418u, 0x2DD0D0u, 0x2DD0D8u)) {
        return;
    }
    ctx->pc = 0x2DD0D8u;
label_2dd0d8:
    // 0x2dd0d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2dd0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd0dc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2dd0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd0e0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2dd0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd0e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2dd0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd0e8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2dd0e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd0ec: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2dd0ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd0f0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2dd0f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0F8u;
        // 0x2dd0fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD100u;
    // 0x2dd100: 0x0  nop
    ctx->pc = 0x2dd100u;
    // NOP
    // 0x2dd104: 0x0  nop
    ctx->pc = 0x2dd104u;
    // NOP
    ctx->pc = 0x2dd108u;
}
