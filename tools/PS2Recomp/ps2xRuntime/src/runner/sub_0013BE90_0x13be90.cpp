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

// Function: sub_0013BE90
// Address: 0x13be90 - 0x13bf68
void sub_0013BE90_0x13be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BE90_0x13be90");
#endif

    switch (ctx->pc) {
        case 0x13be90u: goto label_13be90;
        case 0x13be94u: goto label_13be94;
        case 0x13be98u: goto label_13be98;
        case 0x13be9cu: goto label_13be9c;
        case 0x13bea0u: goto label_13bea0;
        case 0x13bea4u: goto label_13bea4;
        case 0x13bea8u: goto label_13bea8;
        case 0x13beacu: goto label_13beac;
        case 0x13beb0u: goto label_13beb0;
        case 0x13beb4u: goto label_13beb4;
        case 0x13beb8u: goto label_13beb8;
        case 0x13bebcu: goto label_13bebc;
        case 0x13bec0u: goto label_13bec0;
        case 0x13bec4u: goto label_13bec4;
        case 0x13bec8u: goto label_13bec8;
        case 0x13beccu: goto label_13becc;
        case 0x13bed0u: goto label_13bed0;
        case 0x13bed4u: goto label_13bed4;
        case 0x13bed8u: goto label_13bed8;
        case 0x13bedcu: goto label_13bedc;
        case 0x13bee0u: goto label_13bee0;
        case 0x13bee4u: goto label_13bee4;
        case 0x13bee8u: goto label_13bee8;
        case 0x13beecu: goto label_13beec;
        case 0x13bef0u: goto label_13bef0;
        case 0x13bef4u: goto label_13bef4;
        case 0x13bef8u: goto label_13bef8;
        case 0x13befcu: goto label_13befc;
        case 0x13bf00u: goto label_13bf00;
        case 0x13bf04u: goto label_13bf04;
        case 0x13bf08u: goto label_13bf08;
        case 0x13bf0cu: goto label_13bf0c;
        case 0x13bf10u: goto label_13bf10;
        case 0x13bf14u: goto label_13bf14;
        case 0x13bf18u: goto label_13bf18;
        case 0x13bf1cu: goto label_13bf1c;
        case 0x13bf20u: goto label_13bf20;
        case 0x13bf24u: goto label_13bf24;
        case 0x13bf28u: goto label_13bf28;
        case 0x13bf2cu: goto label_13bf2c;
        case 0x13bf30u: goto label_13bf30;
        case 0x13bf34u: goto label_13bf34;
        case 0x13bf38u: goto label_13bf38;
        case 0x13bf3cu: goto label_13bf3c;
        case 0x13bf40u: goto label_13bf40;
        case 0x13bf44u: goto label_13bf44;
        case 0x13bf48u: goto label_13bf48;
        case 0x13bf4cu: goto label_13bf4c;
        case 0x13bf50u: goto label_13bf50;
        case 0x13bf54u: goto label_13bf54;
        case 0x13bf58u: goto label_13bf58;
        case 0x13bf5cu: goto label_13bf5c;
        case 0x13bf60u: goto label_13bf60;
        case 0x13bf64u: goto label_13bf64;
        default: break;
    }

    ctx->pc = 0x13be90u;

label_13be90:
    // 0x13be90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13be94:
    // 0x13be94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13be94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13be98:
    // 0x13be98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_13be9c:
    // 0x13be9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13be9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13bea0:
    // 0x13bea0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_13bea4:
    // 0x13bea4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13bea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bea8:
    // 0x13bea8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_13beac:
    // 0x13beac: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
label_13beb0:
    if (ctx->pc == 0x13BEB0u) {
        ctx->pc = 0x13BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEACu;
        // 0x13beb0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEB4u;
        goto label_13beb4;
    }
    ctx->pc = 0x13BEACu;
    {
        const bool branch_taken_0x13beac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEACu;
        // 0x13beb0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13beac) {
            ctx->pc = 0x13BF48u;
            goto label_13bf48;
        }
    }
    ctx->pc = 0x13BEB4u;
label_13beb4:
    // 0x13beb4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_13beb8:
    // 0x13beb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13bebc:
    // 0x13bebc: 0x8c4647bc  lw          $a2, 0x47BC($v0)
    ctx->pc = 0x13bebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18364)));
label_13bec0:
    // 0x13bec0: 0xc07f1c0  jal         func_1FC700
label_13bec4:
    if (ctx->pc == 0x13BEC4u) {
        ctx->pc = 0x13BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEC0u;
        // 0x13bec4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEC8u;
        goto label_13bec8;
    }
    ctx->pc = 0x13BEC0u;
    SET_GPR_U32(ctx, 31, 0x13BEC8u);
    ctx->pc = 0x13BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BEC0u;
    // 0x13bec4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13BEC0u, 0x13BEC8u)) {
        return;
    }
    ctx->pc = 0x13BEC8u;
label_13bec8:
    // 0x13bec8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13becc:
    // 0x13becc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13bed0:
    // 0x13bed0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_13bed4:
    if (ctx->pc == 0x13BED4u) {
        ctx->pc = 0x13BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BED0u;
        // 0x13bed4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BED8u;
        goto label_13bed8;
    }
    ctx->pc = 0x13BED0u;
    {
        const bool branch_taken_0x13bed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BED0u;
        // 0x13bed4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bed0) {
            ctx->pc = 0x13BF14u;
            goto label_13bf14;
        }
    }
    ctx->pc = 0x13BED8u;
label_13bed8:
    // 0x13bed8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13bed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13bedc:
    // 0x13bedc: 0x0  nop
    ctx->pc = 0x13bedcu;
    // NOP
label_13bee0:
    // 0x13bee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13bee4:
    // 0x13bee4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13bee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13bee8:
    // 0x13bee8: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x13bee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_13beec:
    // 0x13beec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13bef0:
    // 0x13bef0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_13bef4:
    // 0x13bef4: 0xe3800a  movz        $s0, $a3, $v1
    ctx->pc = 0x13bef4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7));
label_13bef8:
    // 0x13bef8: 0xc07f0c8  jal         func_1FC320
label_13befc:
    if (ctx->pc == 0x13BEFCu) {
        ctx->pc = 0x13BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEF8u;
        // 0x13befc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF00u;
        goto label_13bf00;
    }
    ctx->pc = 0x13BEF8u;
    SET_GPR_U32(ctx, 31, 0x13BF00u);
    ctx->pc = 0x13BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BEF8u;
    // 0x13befc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13BEF8u, 0x13BF00u)) {
        return;
    }
    ctx->pc = 0x13BF00u;
label_13bf00:
    // 0x13bf00: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_13bf04:
    if (ctx->pc == 0x13BF04u) {
        ctx->pc = 0x13BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF00u;
        // 0x13bf04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF08u;
        goto label_13bf08;
    }
    ctx->pc = 0x13BF00u;
    {
        const bool branch_taken_0x13bf00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF00u;
        // 0x13bf04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf00) {
            ctx->pc = 0x13BF1Cu;
            goto label_13bf1c;
        }
    }
    ctx->pc = 0x13BF08u;
label_13bf08:
    // 0x13bf08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13bf0c:
    // 0x13bf0c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_13bf10:
    if (ctx->pc == 0x13BF10u) {
        ctx->pc = 0x13BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF0Cu;
        // 0x13bf10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF14u;
        goto label_13bf14;
    }
    ctx->pc = 0x13BF0Cu;
    {
        const bool branch_taken_0x13bf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF0Cu;
        // 0x13bf10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf0c) {
            ctx->pc = 0x13BEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bee0;
        }
    }
    ctx->pc = 0x13BF14u;
label_13bf14:
    // 0x13bf14: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_13bf18:
    if (ctx->pc == 0x13BF18u) {
        ctx->pc = 0x13BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF14u;
        // 0x13bf18: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF1Cu;
        goto label_13bf1c;
    }
    ctx->pc = 0x13BF14u;
    {
        const bool branch_taken_0x13bf14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF14u;
        // 0x13bf18: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf14) {
            ctx->pc = 0x13BF4Cu;
            goto label_13bf4c;
        }
    }
    ctx->pc = 0x13BF1Cu;
label_13bf1c:
    // 0x13bf1c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x13bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_13bf20:
    // 0x13bf20: 0x2451108c  addiu       $s1, $v0, 0x108C
    ctx->pc = 0x13bf20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_13bf24:
    // 0x13bf24: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x13bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_13bf28:
    // 0x13bf28: 0x40f809  jalr        $v0
label_13bf2c:
    if (ctx->pc == 0x13BF2Cu) {
        ctx->pc = 0x13BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF28u;
        // 0x13bf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF30u;
        goto label_13bf30;
    }
    ctx->pc = 0x13BF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BF30u);
        ctx->pc = 0x13BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF28u;
        // 0x13bf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF28u, 0x13BF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BF30u;
label_13bf30:
    // 0x13bf30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13bf34:
    if (ctx->pc == 0x13BF34u) {
        ctx->pc = 0x13BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF30u;
        // 0x13bf34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF38u;
        goto label_13bf38;
    }
    ctx->pc = 0x13BF30u;
    {
        const bool branch_taken_0x13bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF30u;
        // 0x13bf34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf30) {
            ctx->pc = 0x13BF48u;
            goto label_13bf48;
        }
    }
    ctx->pc = 0x13BF38u;
label_13bf38:
    // 0x13bf38: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x13bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_13bf3c:
    // 0x13bf3c: 0x40f809  jalr        $v0
label_13bf40:
    if (ctx->pc == 0x13BF40u) {
        ctx->pc = 0x13BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF3Cu;
        // 0x13bf40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF44u;
        goto label_13bf44;
    }
    ctx->pc = 0x13BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BF44u);
        ctx->pc = 0x13BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF3Cu;
        // 0x13bf40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF3Cu, 0x13BF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BF44u;
label_13bf44:
    // 0x13bf44: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x13bf44u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13bf48:
    // 0x13bf48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x13bf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13bf4c:
    // 0x13bf4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13bf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13bf50:
    // 0x13bf50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13bf50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13bf54:
    // 0x13bf54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13bf54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13bf58:
    // 0x13bf58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13bf58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13bf5c:
    // 0x13bf5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13bf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13bf60:
    // 0x13bf60: 0x3e00008  jr          $ra
label_13bf64:
    if (ctx->pc == 0x13BF64u) {
        ctx->pc = 0x13BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF60u;
        // 0x13bf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF68u;
        goto label_fallthrough_0x13bf60;
    }
    ctx->pc = 0x13BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF60u;
        // 0x13bf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13bf60:
    ctx->pc = 0x13BF68u;
}
