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

// Function: sub_0024EFB0
// Address: 0x24efb0 - 0x24f038
void sub_0024EFB0_0x24efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EFB0_0x24efb0");
#endif

    switch (ctx->pc) {
        case 0x24efecu: goto label_24efec;
        default: break;
    }

    ctx->pc = 0x24efb0u;

    // 0x24efb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24efb4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24efb8: 0xac253f88  sw          $a1, 0x3F88($at)
    ctx->pc = 0x24efb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F88u, _value); } while (0);
    // 0x24efbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24efc0: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x24efc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x24efc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24efc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24efc8: 0x8f858578  lw          $a1, -0x7A88($gp)
    ctx->pc = 0x24efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x24efcc: 0x8f87857c  lw          $a3, -0x7A84($gp)
    ctx->pc = 0x24efccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935932)));
    // 0x24efd0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x24efd0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x24efd4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x24efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x24efd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24efdc: 0x25084248  addiu       $t0, $t0, 0x4248
    ctx->pc = 0x24efdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16968));
    // 0x24efe0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24efe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24efe4: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x24EFE4u;
    SET_GPR_U32(ctx, 31, 0x24EFECu);
    ctx->pc = 0x24EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EFE4u;
    // 0x24efe8: 0x35290412  ori         $t1, $t1, 0x412 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1042);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x24EFE4u, 0x24EFECu)) {
        return;
    }
    ctx->pc = 0x24EFECu;
label_24efec:
    // 0x24efec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24efecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24eff0: 0x8c843f88  lw          $a0, 0x3F88($a0)
    ctx->pc = 0x24eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F88u));
    // 0x24eff4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24eff8: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24effc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24f000: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F000u;
    {
        const bool branch_taken_0x24f000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F000u;
        // 0x24f004: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f000) {
            ctx->pc = 0x24F024u;
            goto label_24f024;
        }
    }
    ctx->pc = 0x24F008u;
    // 0x24f008: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24f008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24f00c: 0x8c633f8c  lw          $v1, 0x3F8C($v1)
    ctx->pc = 0x24f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F8Cu));
    // 0x24f010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f014: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24f014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24f018: 0xac233f8c  sw          $v1, 0x3F8C($at)
    ctx->pc = 0x24f018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F8Cu, _value); } while (0);
    // 0x24f01c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F01Cu;
    {
        const bool branch_taken_0x24f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F01Cu;
        // 0x24f020: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f01c) {
            ctx->pc = 0x24F028u;
            goto label_24f028;
        }
    }
    ctx->pc = 0x24F024u;
label_24f024:
    // 0x24f024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24f024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f028:
    // 0x24f028: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24f028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f030: 0x3e00008  jr          $ra
    ctx->pc = 0x24F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F030u;
        // 0x24f034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F038u;
}
