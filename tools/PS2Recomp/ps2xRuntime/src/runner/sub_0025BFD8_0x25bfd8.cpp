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

// Function: sub_0025BFD8
// Address: 0x25bfd8 - 0x25c078
void sub_0025BFD8_0x25bfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BFD8_0x25bfd8");
#endif

    switch (ctx->pc) {
        case 0x25bff4u: goto label_25bff4;
        case 0x25c01cu: goto label_25c01c;
        default: break;
    }

    ctx->pc = 0x25bfd8u;

    // 0x25bfd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bfdc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25bfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25bfe0: 0xac253fe0  sw          $a1, 0x3FE0($at)
    ctx->pc = 0x25bfe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FE0u, _value); } while (0);
    // 0x25bfe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25bfe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bfec: 0xc097bbc  jal         func_25EEF0
    ctx->pc = 0x25BFECu;
    SET_GPR_U32(ctx, 31, 0x25BFF4u);
    ctx->pc = 0x25BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFECu;
    // 0x25bff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EEF0u, 0x25BFECu, 0x25BFF4u)) {
        return;
    }
    ctx->pc = 0x25BFF4u;
label_25bff4:
    // 0x25bff4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25BFF4u;
    {
        const bool branch_taken_0x25bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFF4u;
        // 0x25bff8: 0x3c080070  lui         $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bff4) {
            ctx->pc = 0x25C064u;
            goto label_25c064;
        }
    }
    ctx->pc = 0x25BFFCu;
    // 0x25bffc: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x25bffcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x25c000: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x25c000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25c004: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25c004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25c008: 0x25084338  addiu       $t0, $t0, 0x4338
    ctx->pc = 0x25c008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17208));
    // 0x25c00c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x25c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25c010: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25c010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c014: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x25C014u;
    SET_GPR_U32(ctx, 31, 0x25C01Cu);
    ctx->pc = 0x25C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C014u;
    // 0x25c018: 0x3529000b  ori         $t1, $t1, 0xB (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x25C014u, 0x25C01Cu)) {
        return;
    }
    ctx->pc = 0x25C01Cu;
label_25c01c:
    // 0x25c01c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x25c020: 0x8ca53fe0  lw          $a1, 0x3FE0($a1)
    ctx->pc = 0x25c020u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3FE0u));
    // 0x25c024: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25c024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x25c028: 0x24660fc8  addiu       $a2, $v1, 0xFC8
    ctx->pc = 0x25c028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25c02c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x25c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x25c030: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25C030u;
    {
        const bool branch_taken_0x25c030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C030u;
        // 0x25c034: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c030) {
            ctx->pc = 0x25C064u;
            goto label_25c064;
        }
    }
    ctx->pc = 0x25C038u;
    // 0x25c038: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x25c038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x25c03c: 0x8c843fe4  lw          $a0, 0x3FE4($a0)
    ctx->pc = 0x25c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3FE4u));
    // 0x25c040: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x25c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25c044: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25c048: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c04c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c050: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x25c050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x25c054: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25c054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25c058: 0xac243fe4  sw          $a0, 0x3FE4($at)
    ctx->pc = 0x25c058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3FE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FE4u, _value); } while (0);
    // 0x25c05c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25C05Cu;
    {
        const bool branch_taken_0x25c05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C05Cu;
        // 0x25c060: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c05c) {
            ctx->pc = 0x25C068u;
            goto label_25c068;
        }
    }
    ctx->pc = 0x25C064u;
label_25c064:
    // 0x25c064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c068:
    // 0x25c068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25c068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c070: 0x3e00008  jr          $ra
    ctx->pc = 0x25C070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C070u;
        // 0x25c074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C078u;
}
