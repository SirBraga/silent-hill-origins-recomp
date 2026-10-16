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

// Function: sub_0019C030
// Address: 0x19c030 - 0x19c0a8
void sub_0019C030_0x19c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C030_0x19c030");
#endif

    switch (ctx->pc) {
        case 0x19c05cu: goto label_19c05c;
        case 0x19c070u: goto label_19c070;
        case 0x19c07cu: goto label_19c07c;
        case 0x19c090u: goto label_19c090;
        default: break;
    }

    ctx->pc = 0x19c030u;

    // 0x19c030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c034: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19c034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19c038: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c03c: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x19c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x19c040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c04c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19c04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c050: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x19c050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x19c054: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x19C054u;
    SET_GPR_U32(ctx, 31, 0x19C05Cu);
    ctx->pc = 0x19C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C054u;
    // 0x19c058: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x19C054u, 0x19C05Cu)) {
        return;
    }
    ctx->pc = 0x19C05Cu;
label_19c05c:
    // 0x19c05c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x19c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19c060: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C060u;
    {
        const bool branch_taken_0x19c060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C060u;
        // 0x19c064: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c060) {
            ctx->pc = 0x19C070u;
            goto label_19c070;
        }
    }
    ctx->pc = 0x19C068u;
    // 0x19c068: 0xc0769f2  jal         func_1DA7C8
    ctx->pc = 0x19C068u;
    SET_GPR_U32(ctx, 31, 0x19C070u);
    ctx->pc = 0x1DA7C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA7C8u, 0x19C068u, 0x19C070u)) {
        return;
    }
    ctx->pc = 0x19C070u;
label_19c070:
    // 0x19c070: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19c074: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x19C074u;
    SET_GPR_U32(ctx, 31, 0x19C07Cu);
    ctx->pc = 0x19C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C074u;
    // 0x19c078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x19C074u, 0x19C07Cu)) {
        return;
    }
    ctx->pc = 0x19C07Cu;
label_19c07c:
    // 0x19c07c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x19c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x19c080: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C080u;
    {
        const bool branch_taken_0x19c080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c080) {
            ctx->pc = 0x19C084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C080u;
            // 0x19c084: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19C088u;
    // 0x19c088: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19C088u;
    SET_GPR_U32(ctx, 31, 0x19C090u);
    ctx->pc = 0x19C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C088u;
    // 0x19c08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19C088u, 0x19C090u)) {
        return;
    }
    ctx->pc = 0x19C090u;
label_19c090:
    // 0x19c090: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c094:
    // 0x19c094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C09Cu;
        // 0x19c0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C0A4u;
    // 0x19c0a4: 0x0  nop
    ctx->pc = 0x19c0a4u;
    // NOP
    ctx->pc = 0x19c0a8u;
}
