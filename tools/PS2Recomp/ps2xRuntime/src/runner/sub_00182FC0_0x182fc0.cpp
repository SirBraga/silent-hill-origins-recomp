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

// Function: sub_00182FC0
// Address: 0x182fc0 - 0x183090
void sub_00182FC0_0x182fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182FC0_0x182fc0");
#endif

    switch (ctx->pc) {
        case 0x182fdcu: goto label_182fdc;
        case 0x182ff0u: goto label_182ff0;
        case 0x183008u: goto label_183008;
        case 0x183034u: goto label_183034;
        case 0x183050u: goto label_183050;
        case 0x18306cu: goto label_18306c;
        default: break;
    }

    ctx->pc = 0x182fc0u;

    // 0x182fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182fc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x182fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x182fc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x182fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x182fcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182fd4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x182FD4u;
    SET_GPR_U32(ctx, 31, 0x182FDCu);
    ctx->pc = 0x182FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FD4u;
    // 0x182fd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x182FD4u, 0x182FDCu)) {
        return;
    }
    ctx->pc = 0x182FDCu;
label_182fdc:
    // 0x182fdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x182fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x182fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fe4: 0x8c463bf8  lw          $a2, 0x3BF8($v0)
    ctx->pc = 0x182fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6C3BF8u));
    // 0x182fe8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x182FE8u;
    SET_GPR_U32(ctx, 31, 0x182FF0u);
    ctx->pc = 0x182FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FE8u;
    // 0x182fec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x182FE8u, 0x182FF0u)) {
        return;
    }
    ctx->pc = 0x182FF0u;
label_182ff0:
    // 0x182ff0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x182ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182ff4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x182ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182ff8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x182FF8u;
    {
        const bool branch_taken_0x182ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FF8u;
        // 0x182ffc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ff8) {
            ctx->pc = 0x18307Cu;
            goto label_18307c;
        }
    }
    ctx->pc = 0x183000u;
    // 0x183000: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x183000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183004: 0x0  nop
    ctx->pc = 0x183004u;
    // NOP
label_183008:
    // 0x183008: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x183008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18300c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18300Cu;
    {
        const bool branch_taken_0x18300c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18300c) {
            ctx->pc = 0x183010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18300Cu;
            // 0x183010: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183024u;
            goto label_183024;
        }
    }
    ctx->pc = 0x183014u;
    // 0x183014: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183014u;
    {
        const bool branch_taken_0x183014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x183018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183014u;
        // 0x183018: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183014) {
            ctx->pc = 0x18303Cu;
            goto label_18303c;
        }
    }
    ctx->pc = 0x18301Cu;
    // 0x18301c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18301Cu;
    {
        const bool branch_taken_0x18301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18301Cu;
        // 0x183020: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18301c) {
            ctx->pc = 0x183058u;
            goto label_183058;
        }
    }
    ctx->pc = 0x183024u;
label_183024:
    // 0x183024: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x183024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x183028: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x183028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x18302c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x18302Cu;
    SET_GPR_U32(ctx, 31, 0x183034u);
    ctx->pc = 0x183030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18302Cu;
    // 0x183030: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x18302Cu, 0x183034u)) {
        return;
    }
    ctx->pc = 0x183034u;
label_183034:
    // 0x183034: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x183034u;
    {
        const bool branch_taken_0x183034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183034u;
        // 0x183038: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183034) {
            ctx->pc = 0x183054u;
            goto label_183054;
        }
    }
    ctx->pc = 0x18303Cu;
label_18303c:
    // 0x18303c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x18303cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x183040: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x183040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x183044: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x183044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x183048: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x183048u;
    SET_GPR_U32(ctx, 31, 0x183050u);
    ctx->pc = 0x18304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183048u;
    // 0x18304c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x183048u, 0x183050u)) {
        return;
    }
    ctx->pc = 0x183050u;
label_183050:
    // 0x183050: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x183050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_183054:
    // 0x183054: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183058:
    // 0x183058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18305c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183064: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x183064u;
    SET_GPR_U32(ctx, 31, 0x18306Cu);
    ctx->pc = 0x183068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183064u;
    // 0x183068: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x183064u, 0x18306Cu)) {
        return;
    }
    ctx->pc = 0x18306Cu;
label_18306c:
    // 0x18306c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x183070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183074: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x183074u;
    {
        const bool branch_taken_0x183074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183074u;
        // 0x183078: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183074) {
            ctx->pc = 0x183008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183008;
        }
    }
    ctx->pc = 0x18307Cu;
label_18307c:
    // 0x18307c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18307cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x183080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183088: 0x3e00008  jr          $ra
    ctx->pc = 0x183088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183088u;
        // 0x18308c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183090u;
}
