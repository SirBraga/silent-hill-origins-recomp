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

// Function: sub_0025EFF8
// Address: 0x25eff8 - 0x25f0b8
void sub_0025EFF8_0x25eff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EFF8_0x25eff8");
#endif

    switch (ctx->pc) {
        case 0x25f010u: goto label_25f010;
        case 0x25f028u: goto label_25f028;
        case 0x25f03cu: goto label_25f03c;
        case 0x25f050u: goto label_25f050;
        case 0x25f064u: goto label_25f064;
        case 0x25f074u: goto label_25f074;
        case 0x25f090u: goto label_25f090;
        case 0x25f09cu: goto label_25f09c;
        default: break;
    }

    ctx->pc = 0x25eff8u;

    // 0x25eff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25eff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25effc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25f000: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x25f004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f008: 0xc092442  jal         func_249108
    ctx->pc = 0x25F008u;
    SET_GPR_U32(ctx, 31, 0x25F010u);
    ctx->pc = 0x249108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249108u, 0x25F008u, 0x25F010u)) {
        return;
    }
    ctx->pc = 0x25F010u;
label_25f010:
    // 0x25f010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f014: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x25F014u;
    {
        const bool branch_taken_0x25f014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F014u;
        // 0x25f018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f014) {
            ctx->pc = 0x25F074u;
            goto label_25f074;
        }
    }
    ctx->pc = 0x25F01Cu;
    // 0x25f01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f020: 0xc0c121e  jal         func_304878
    ctx->pc = 0x25F020u;
    SET_GPR_U32(ctx, 31, 0x25F028u);
    ctx->pc = 0x25F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F020u;
    // 0x25f024: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304878u, 0x25F020u, 0x25F028u)) {
        return;
    }
    ctx->pc = 0x25F028u;
label_25f028:
    // 0x25f028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f02c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x25F02Cu;
    {
        const bool branch_taken_0x25f02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f02c) {
            ctx->pc = 0x25F06Cu;
            goto label_25f06c;
        }
    }
    ctx->pc = 0x25F034u;
    // 0x25f034: 0xc097bfa  jal         func_25EFE8
    ctx->pc = 0x25F034u;
    SET_GPR_U32(ctx, 31, 0x25F03Cu);
    ctx->pc = 0x25EFE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EFE8u, 0x25F034u, 0x25F03Cu)) {
        return;
    }
    ctx->pc = 0x25F03Cu;
label_25f03c:
    // 0x25f03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f040: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25f040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f048: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x25F048u;
    SET_GPR_U32(ctx, 31, 0x25F050u);
    ctx->pc = 0x25F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F048u;
    // 0x25f04c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304B30u, 0x25F048u, 0x25F050u)) {
        return;
    }
    ctx->pc = 0x25F050u;
label_25f050:
    // 0x25f050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f054: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F054u;
    {
        const bool branch_taken_0x25f054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f054) {
            ctx->pc = 0x25F06Cu;
            goto label_25f06c;
        }
    }
    ctx->pc = 0x25F05Cu;
    // 0x25f05c: 0xc0c10d8  jal         func_304360
    ctx->pc = 0x25F05Cu;
    SET_GPR_U32(ctx, 31, 0x25F064u);
    ctx->pc = 0x25F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F05Cu;
    // 0x25f060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304360u, 0x25F05Cu, 0x25F064u)) {
        return;
    }
    ctx->pc = 0x25F064u;
label_25f064:
    // 0x25f064: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25F064u;
    {
        const bool branch_taken_0x25f064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F064u;
        // 0x25f068: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f064) {
            ctx->pc = 0x25F0A0u;
            goto label_25f0a0;
        }
    }
    ctx->pc = 0x25F06Cu;
label_25f06c:
    // 0x25f06c: 0xc092466  jal         func_249198
    ctx->pc = 0x25F06Cu;
    SET_GPR_U32(ctx, 31, 0x25F074u);
    ctx->pc = 0x25F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F06Cu;
    // 0x25f070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249198u, 0x25F06Cu, 0x25F074u)) {
        return;
    }
    ctx->pc = 0x25F074u;
label_25f074:
    // 0x25f074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f078: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25f078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x25f07c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x25f080: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25f080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25f084: 0x24a5b7c0  addiu       $a1, $a1, -0x4840
    ctx->pc = 0x25f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948800));
    // 0x25f088: 0xc092848  jal         func_24A120
    ctx->pc = 0x25F088u;
    SET_GPR_U32(ctx, 31, 0x25F090u);
    ctx->pc = 0x25F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F088u;
    // 0x25f08c: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25F088u, 0x25F090u)) {
        return;
    }
    ctx->pc = 0x25F090u;
label_25f090:
    // 0x25f090: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f094: 0xc09281a  jal         func_24A068
    ctx->pc = 0x25F094u;
    SET_GPR_U32(ctx, 31, 0x25F09Cu);
    ctx->pc = 0x25F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F094u;
    // 0x25f098: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25F094u, 0x25F09Cu)) {
        return;
    }
    ctx->pc = 0x25F09Cu;
label_25f09c:
    // 0x25f09c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f0a0:
    // 0x25f0a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25f0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f0a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25f0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25F0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0ACu;
        // 0x25f0b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F0B4u;
    // 0x25f0b4: 0x0  nop
    ctx->pc = 0x25f0b4u;
    // NOP
    ctx->pc = 0x25f0b8u;
}
