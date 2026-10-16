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

// Function: sub_001CE010
// Address: 0x1ce010 - 0x1ce120
void sub_001CE010_0x1ce010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE010_0x1ce010");
#endif

    switch (ctx->pc) {
        case 0x1ce050u: goto label_1ce050;
        case 0x1ce068u: goto label_1ce068;
        case 0x1ce080u: goto label_1ce080;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce0a8u: goto label_1ce0a8;
        case 0x1ce0bcu: goto label_1ce0bc;
        case 0x1ce0d0u: goto label_1ce0d0;
        case 0x1ce0e4u: goto label_1ce0e4;
        case 0x1ce0fcu: goto label_1ce0fc;
        default: break;
    }

    ctx->pc = 0x1ce010u;

    // 0x1ce010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ce010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ce014: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ce014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ce018: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ce018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ce01c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1ce020: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ce020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ce024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce028: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ce028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ce02c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ce02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ce030: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ce030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ce034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce038: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1ce038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x1ce03c: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1ce03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ce040: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE040u;
    {
        const bool branch_taken_0x1ce040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE040u;
        // 0x1ce044: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce040) {
            ctx->pc = 0x1CE054u;
            goto label_1ce054;
        }
    }
    ctx->pc = 0x1CE048u;
    // 0x1ce048: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1CE048u;
    SET_GPR_U32(ctx, 31, 0x1CE050u);
    ctx->pc = 0x1CE04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE048u;
    // 0x1ce04c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1CE048u, 0x1CE050u)) {
        return;
    }
    ctx->pc = 0x1CE050u;
label_1ce050:
    // 0x1ce050: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1ce050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_1ce054:
    // 0x1ce054: 0x8e240290  lw          $a0, 0x290($s1)
    ctx->pc = 0x1ce054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x1ce058: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE058u;
    {
        const bool branch_taken_0x1ce058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce058) {
            ctx->pc = 0x1CE05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE058u;
            // 0x1ce05c: 0x8e240298  lw          $a0, 0x298($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE070u;
            goto label_1ce070;
        }
    }
    ctx->pc = 0x1CE060u;
    // 0x1ce060: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CE060u;
    SET_GPR_U32(ctx, 31, 0x1CE068u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CE060u, 0x1CE068u)) {
        return;
    }
    ctx->pc = 0x1CE068u;
label_1ce068:
    // 0x1ce068: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x1ce068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x1ce06c: 0x8e240298  lw          $a0, 0x298($s1)
    ctx->pc = 0x1ce06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_1ce070:
    // 0x1ce070: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE070u;
    {
        const bool branch_taken_0x1ce070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce070) {
            ctx->pc = 0x1CE074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE070u;
            // 0x1ce074: 0x8e2402f8  lw          $a0, 0x2F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE088u;
            goto label_1ce088;
        }
    }
    ctx->pc = 0x1CE078u;
    // 0x1ce078: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CE078u;
    SET_GPR_U32(ctx, 31, 0x1CE080u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CE078u, 0x1CE080u)) {
        return;
    }
    ctx->pc = 0x1CE080u;
label_1ce080:
    // 0x1ce080: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1ce080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
    // 0x1ce084: 0x8e2402f8  lw          $a0, 0x2F8($s1)
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
label_1ce088:
    // 0x1ce088: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE088u;
    {
        const bool branch_taken_0x1ce088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE088u;
        // 0x1ce08c: 0x263302c8  addiu       $s3, $s1, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce088) {
            ctx->pc = 0x1CE09Cu;
            goto label_1ce09c;
        }
    }
    ctx->pc = 0x1CE090u;
    // 0x1ce090: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CE090u;
    SET_GPR_U32(ctx, 31, 0x1CE098u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CE090u, 0x1CE098u)) {
        return;
    }
    ctx->pc = 0x1CE098u;
label_1ce098:
    // 0x1ce098: 0xae2002f8  sw          $zero, 0x2F8($s1)
    ctx->pc = 0x1ce098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 760), GPR_U32(ctx, 0));
label_1ce09c:
    // 0x1ce09c: 0x263002a0  addiu       $s0, $s1, 0x2A0
    ctx->pc = 0x1ce09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1ce0a0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1ce0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce0a4: 0x0  nop
    ctx->pc = 0x1ce0a4u;
    // NOP
label_1ce0a8:
    // 0x1ce0a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ce0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce0ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE0ACu;
    {
        const bool branch_taken_0x1ce0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0ACu;
        // 0x1ce0b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0ac) {
            ctx->pc = 0x1CE0C0u;
            goto label_1ce0c0;
        }
    }
    ctx->pc = 0x1CE0B4u;
    // 0x1ce0b4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CE0B4u;
    SET_GPR_U32(ctx, 31, 0x1CE0BCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CE0B4u, 0x1CE0BCu)) {
        return;
    }
    ctx->pc = 0x1CE0BCu;
label_1ce0bc:
    // 0x1ce0bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ce0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ce0c0:
    // 0x1ce0c0: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CE0C0u;
    {
        const bool branch_taken_0x1ce0c0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1CE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0C0u;
        // 0x1ce0c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0c0) {
            ctx->pc = 0x1CE0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce0a8;
        }
    }
    ctx->pc = 0x1CE0C8u;
    // 0x1ce0c8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1ce0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0cc: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ce0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ce0d0:
    // 0x1ce0d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ce0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce0d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE0D4u;
    {
        const bool branch_taken_0x1ce0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0D4u;
        // 0x1ce0d8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0d4) {
            ctx->pc = 0x1CE0E8u;
            goto label_1ce0e8;
        }
    }
    ctx->pc = 0x1CE0DCu;
    // 0x1ce0dc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CE0DCu;
    SET_GPR_U32(ctx, 31, 0x1CE0E4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CE0DCu, 0x1CE0E4u)) {
        return;
    }
    ctx->pc = 0x1CE0E4u;
label_1ce0e4:
    // 0x1ce0e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ce0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ce0e8:
    // 0x1ce0e8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CE0E8u;
    {
        const bool branch_taken_0x1ce0e8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1CE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0E8u;
        // 0x1ce0ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0e8) {
            ctx->pc = 0x1CE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce0d0;
        }
    }
    ctx->pc = 0x1CE0F0u;
    // 0x1ce0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0f4: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1CE0F4u;
    SET_GPR_U32(ctx, 31, 0x1CE0FCu);
    ctx->pc = 0x1CE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0F4u;
    // 0x1ce0f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1CE0F4u, 0x1CE0FCu)) {
        return;
    }
    ctx->pc = 0x1CE0FCu;
label_1ce0fc:
    // 0x1ce0fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ce0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce100: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ce100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce104: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ce104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce108: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ce108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce10c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ce10cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce114: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE114u;
        // 0x1ce118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE11Cu;
    // 0x1ce11c: 0x0  nop
    ctx->pc = 0x1ce11cu;
    // NOP
    ctx->pc = 0x1ce120u;
}
