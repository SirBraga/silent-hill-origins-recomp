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

// Function: sub_002F6FC0
// Address: 0x2f6fc0 - 0x2f7090
void sub_002F6FC0_0x2f6fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6FC0_0x2f6fc0");
#endif

    switch (ctx->pc) {
        case 0x2f7000u: goto label_2f7000;
        case 0x2f700cu: goto label_2f700c;
        default: break;
    }

    ctx->pc = 0x2f6fc0u;

    // 0x2f6fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f6fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f6fc4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f6fc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f6fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f6fcc: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x2f6fccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    // 0x2f6fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6fd4: 0x8c4414c0  lw          $a0, 0x14C0($v0)
    ctx->pc = 0x2f6fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7214C0u));
    // 0x2f6fd8: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f6fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f6fdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f6fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f6fe0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f6fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f6fe4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2f6fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fe8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6fec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f6fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f6ff0: 0x261135c0  addiu       $s1, $s0, 0x35C0
    ctx->pc = 0x2f6ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13760));
    // 0x2f6ff4: 0xae406648  sw          $zero, 0x6648($s2)
    ctx->pc = 0x2f6ff4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x686648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686648u, _value); } while (0);
    // 0x2f6ff8: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F6FF8u;
    SET_GPR_U32(ctx, 31, 0x2F7000u);
    ctx->pc = 0x2F6FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FF8u;
    // 0x2f6ffc: 0x26330080  addiu       $s3, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F6FF8u, 0x2F7000u)) {
        return;
    }
    ctx->pc = 0x2F7000u;
label_2f7000:
    // 0x2f7000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7004: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2F7004u;
    SET_GPR_U32(ctx, 31, 0x2F700Cu);
    ctx->pc = 0x2F7008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7004u;
    // 0x2f7008: 0x262500ff  addiu       $a1, $s1, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2F7004u, 0x2F700Cu)) {
        return;
    }
    ctx->pc = 0x2F700Cu;
label_2f700c:
    // 0x2f700c: 0x8e0335c0  lw          $v1, 0x35C0($s0)
    ctx->pc = 0x2f700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13760)));
    // 0x2f7010: 0x8e426648  lw          $v0, 0x6648($s2)
    ctx->pc = 0x2f7010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26184)));
    // 0x2f7014: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f7014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f7018: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7018u;
    {
        const bool branch_taken_0x2f7018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7018) {
            ctx->pc = 0x2F701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7018u;
            // 0x2f701c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7038u;
            goto label_2f7038;
        }
    }
    ctx->pc = 0x2F7020u;
    // 0x2f7020: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2f7020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2f7024: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f7024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f7028: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7028u;
    {
        const bool branch_taken_0x2f7028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7028) {
            ctx->pc = 0x2F702Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7028u;
            // 0x2f702c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7038u;
            goto label_2f7038;
        }
    }
    ctx->pc = 0x2F7030u;
    // 0x2f7030: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F7030u;
    {
        const bool branch_taken_0x2f7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7030u;
        // 0x2f7034: 0xae436648  sw          $v1, 0x6648($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 26184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7030) {
            ctx->pc = 0x2F7068u;
            goto label_2f7068;
        }
    }
    ctx->pc = 0x2F7038u;
label_2f7038:
    // 0x2f7038: 0x8e826648  lw          $v0, 0x6648($s4)
    ctx->pc = 0x2f7038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26184)));
    // 0x2f703c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f703cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f7040: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7040u;
    {
        const bool branch_taken_0x2f7040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7040) {
            ctx->pc = 0x2F7044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7040u;
            // 0x2f7044: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7068u;
            goto label_2f7068;
        }
    }
    ctx->pc = 0x2F7048u;
    // 0x2f7048: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f7048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f704c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f704cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f7050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7050u;
    {
        const bool branch_taken_0x2f7050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7050u;
        // 0x2f7054: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7050) {
            ctx->pc = 0x2F7064u;
            goto label_2f7064;
        }
    }
    ctx->pc = 0x2F7058u;
    // 0x2f7058: 0xae436648  sw          $v1, 0x6648($s2)
    ctx->pc = 0x2f7058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 26184), GPR_U32(ctx, 3));
    // 0x2f705c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F705Cu;
    {
        const bool branch_taken_0x2f705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F705Cu;
        // 0x2f7060: 0x24423640  addiu       $v0, $v0, 0x3640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f705c) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F7064u;
label_2f7064:
    // 0x2f7064: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2f7064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2f7068:
    // 0x2f7068: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f7068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f706c:
    // 0x2f706c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f706cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7070: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f7070u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7074: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f7074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7078: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f7078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f707c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f707cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7084: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7084u;
        // 0x2f7088: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F708Cu;
    // 0x2f708c: 0x0  nop
    ctx->pc = 0x2f708cu;
    // NOP
    ctx->pc = 0x2f7090u;
}
