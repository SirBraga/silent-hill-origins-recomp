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

// Function: sub_0025C078
// Address: 0x25c078 - 0x25c0f0
void sub_0025C078_0x25c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C078_0x25c078");
#endif

    switch (ctx->pc) {
        case 0x25c0d4u: goto label_25c0d4;
        default: break;
    }

    ctx->pc = 0x25c078u;

    // 0x25c078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c07c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25c080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c088: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x25c088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x25c08c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25C08Cu;
    {
        const bool branch_taken_0x25c08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C08Cu;
        // 0x25c090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c08c) {
            ctx->pc = 0x25C0DCu;
            goto label_25c0dc;
        }
    }
    ctx->pc = 0x25C094u;
    // 0x25c094: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x25c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x25c098: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x25C098u;
    {
        const bool branch_taken_0x25c098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C098u;
        // 0x25c09c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c098) {
            ctx->pc = 0x25C0CCu;
            goto label_25c0cc;
        }
    }
    ctx->pc = 0x25C0A0u;
    // 0x25c0a0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25c0a4: 0x24450fc8  addiu       $a1, $v0, 0xFC8
    ctx->pc = 0x25c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x25c0a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x730FCCu));
    // 0x25c0ac: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x25c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x25c0b0: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C0B0u;
    {
        const bool branch_taken_0x25c0b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c0b0) {
            ctx->pc = 0x25C0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C0B0u;
            // 0x25c0b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C0CCu;
            goto label_25c0cc;
        }
    }
    ctx->pc = 0x25C0B8u;
    // 0x25c0b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25c0bc: 0x8c424190  lw          $v0, 0x4190($v0)
    ctx->pc = 0x25c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4190u));
    // 0x25c0c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25c0c4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x25c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x25c0c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c0cc:
    // 0x25c0cc: 0xc09240e  jal         func_249038
    ctx->pc = 0x25C0CCu;
    SET_GPR_U32(ctx, 31, 0x25C0D4u);
    ctx->pc = 0x25C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0CCu;
    // 0x25c0d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x25C0CCu, 0x25C0D4u)) {
        return;
    }
    ctx->pc = 0x25C0D4u;
label_25c0d4:
    // 0x25c0d4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x25c0d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x25c0d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c0dc:
    // 0x25c0dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25c0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0E4u;
        // 0x25c0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C0ECu;
    // 0x25c0ec: 0x0  nop
    ctx->pc = 0x25c0ecu;
    // NOP
    ctx->pc = 0x25c0f0u;
}
