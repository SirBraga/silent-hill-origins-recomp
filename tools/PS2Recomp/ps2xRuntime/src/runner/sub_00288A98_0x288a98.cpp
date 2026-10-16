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

// Function: sub_00288A98
// Address: 0x288a98 - 0x288b40
void sub_00288A98_0x288a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288A98_0x288a98");
#endif

    switch (ctx->pc) {
        case 0x288a98u: goto label_288a98;
        case 0x288a9cu: goto label_288a9c;
        case 0x288aa0u: goto label_288aa0;
        case 0x288aa4u: goto label_288aa4;
        case 0x288aa8u: goto label_288aa8;
        case 0x288aacu: goto label_288aac;
        case 0x288ab0u: goto label_288ab0;
        case 0x288ab4u: goto label_288ab4;
        case 0x288ab8u: goto label_288ab8;
        case 0x288abcu: goto label_288abc;
        case 0x288ac0u: goto label_288ac0;
        case 0x288ac4u: goto label_288ac4;
        case 0x288ac8u: goto label_288ac8;
        case 0x288accu: goto label_288acc;
        case 0x288ad0u: goto label_288ad0;
        case 0x288ad4u: goto label_288ad4;
        case 0x288ad8u: goto label_288ad8;
        case 0x288adcu: goto label_288adc;
        case 0x288ae0u: goto label_288ae0;
        case 0x288ae4u: goto label_288ae4;
        case 0x288ae8u: goto label_288ae8;
        case 0x288aecu: goto label_288aec;
        case 0x288af0u: goto label_288af0;
        case 0x288af4u: goto label_288af4;
        case 0x288af8u: goto label_288af8;
        case 0x288afcu: goto label_288afc;
        case 0x288b00u: goto label_288b00;
        case 0x288b04u: goto label_288b04;
        case 0x288b08u: goto label_288b08;
        case 0x288b0cu: goto label_288b0c;
        case 0x288b10u: goto label_288b10;
        case 0x288b14u: goto label_288b14;
        case 0x288b18u: goto label_288b18;
        case 0x288b1cu: goto label_288b1c;
        case 0x288b20u: goto label_288b20;
        case 0x288b24u: goto label_288b24;
        case 0x288b28u: goto label_288b28;
        case 0x288b2cu: goto label_288b2c;
        case 0x288b30u: goto label_288b30;
        case 0x288b34u: goto label_288b34;
        case 0x288b38u: goto label_288b38;
        case 0x288b3cu: goto label_288b3c;
        default: break;
    }

    ctx->pc = 0x288a98u;

label_288a98:
    // 0x288a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_288a9c:
    // 0x288a9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x288a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_288aa0:
    // 0x288aa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x288aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_288aa4:
    // 0x288aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_288aa8:
    // 0x288aa8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x288aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_288aac:
    // 0x288aac: 0x10902b  sltu        $s2, $zero, $s0
    ctx->pc = 0x288aacu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_288ab0:
    // 0x288ab0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x288ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_288ab4:
    // 0x288ab4: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_288ab8:
    if (ctx->pc == 0x288AB8u) {
        ctx->pc = 0x288AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AB4u;
        // 0x288ab8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288ABCu;
        goto label_288abc;
    }
    ctx->pc = 0x288AB4u;
    {
        const bool branch_taken_0x288ab4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AB4u;
        // 0x288ab8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ab4) {
            ctx->pc = 0x288B20u;
            goto label_288b20;
        }
    }
    ctx->pc = 0x288ABCu;
label_288abc:
    // 0x288abc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x288abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288ac0:
    // 0x288ac0: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x288ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_288ac4:
    // 0x288ac4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x288ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_288ac8:
    // 0x288ac8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_288acc:
    if (ctx->pc == 0x288ACCu) {
        ctx->pc = 0x288ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AC8u;
        // 0x288acc: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288AD0u;
        goto label_288ad0;
    }
    ctx->pc = 0x288AC8u;
    {
        const bool branch_taken_0x288ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x288ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AC8u;
        // 0x288acc: 0x8c530014  lw          $s3, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ac8) {
            ctx->pc = 0x288AFCu;
            goto label_288afc;
        }
    }
    ctx->pc = 0x288AD0u;
label_288ad0:
    // 0x288ad0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x288ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_288ad4:
    // 0x288ad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_288ad8:
    // 0x288ad8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_288adc:
    if (ctx->pc == 0x288ADCu) {
        ctx->pc = 0x288ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AD8u;
        // 0x288adc: 0x26220fc8  addiu       $v0, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288AE0u;
        goto label_288ae0;
    }
    ctx->pc = 0x288AD8u;
    {
        const bool branch_taken_0x288ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AD8u;
        // 0x288adc: 0x26220fc8  addiu       $v0, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ad8) {
            ctx->pc = 0x288AF0u;
            goto label_288af0;
        }
    }
    ctx->pc = 0x288AE0u;
label_288ae0:
    // 0x288ae0: 0xc092932  jal         func_24A4C8
label_288ae4:
    if (ctx->pc == 0x288AE4u) {
        ctx->pc = 0x288AE8u;
        goto label_288ae8;
    }
    ctx->pc = 0x288AE0u;
    SET_GPR_U32(ctx, 31, 0x288AE8u);
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x288AE0u, 0x288AE8u)) {
        return;
    }
    ctx->pc = 0x288AE8u;
label_288ae8:
    // 0x288ae8: 0x10000005  b           . + 4 + (0x5 << 2)
label_288aec:
    if (ctx->pc == 0x288AECu) {
        ctx->pc = 0x288AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AE8u;
        // 0x288aec: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288AF0u;
        goto label_288af0;
    }
    ctx->pc = 0x288AE8u;
    {
        const bool branch_taken_0x288ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AE8u;
        // 0x288aec: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ae8) {
            ctx->pc = 0x288B00u;
            goto label_288b00;
        }
    }
    ctx->pc = 0x288AF0u;
label_288af0:
    // 0x288af0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x288af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_288af4:
    // 0x288af4: 0x60f809  jalr        $v1
label_288af8:
    if (ctx->pc == 0x288AF8u) {
        ctx->pc = 0x288AFCu;
        goto label_288afc;
    }
    ctx->pc = 0x288AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x288AFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288AF4u, 0x288AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288AFCu;
label_288afc:
    // 0x288afc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x288afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_288b00:
    // 0x288b00: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x288b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_288b04:
    // 0x288b04: 0x8c4468d4  lw          $a0, 0x68D4($v0)
    ctx->pc = 0x288b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26836)));
label_288b08:
    // 0x288b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288b0c:
    // 0x288b0c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x288b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_288b10:
    // 0x288b10: 0x40f809  jalr        $v0
label_288b14:
    if (ctx->pc == 0x288B14u) {
        ctx->pc = 0x288B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B10u;
        // 0x288b14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B18u;
        goto label_288b18;
    }
    ctx->pc = 0x288B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x288B18u);
        ctx->pc = 0x288B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B10u;
        // 0x288b14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B10u, 0x288B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288B18u;
label_288b18:
    // 0x288b18: 0xc0a22a6  jal         func_288A98
label_288b1c:
    if (ctx->pc == 0x288B1Cu) {
        ctx->pc = 0x288B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B18u;
        // 0x288b1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B20u;
        goto label_288b20;
    }
    ctx->pc = 0x288B18u;
    SET_GPR_U32(ctx, 31, 0x288B20u);
    ctx->pc = 0x288B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B18u;
    // 0x288b1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A98u;
    goto label_288a98;
    ctx->pc = 0x288B20u;
label_288b20:
    // 0x288b20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x288b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_288b24:
    // 0x288b24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x288b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_288b28:
    // 0x288b28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x288b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_288b2c:
    // 0x288b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_288b30:
    // 0x288b30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x288b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288b34:
    // 0x288b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_288b38:
    // 0x288b38: 0x3e00008  jr          $ra
label_288b3c:
    if (ctx->pc == 0x288B3Cu) {
        ctx->pc = 0x288B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B38u;
        // 0x288b3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B40u;
        goto label_fallthrough_0x288b38;
    }
    ctx->pc = 0x288B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B38u;
        // 0x288b3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x288b38:
    ctx->pc = 0x288B40u;
}
