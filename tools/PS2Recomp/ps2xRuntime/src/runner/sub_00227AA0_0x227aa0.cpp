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

// Function: sub_00227AA0
// Address: 0x227aa0 - 0x227b58
void sub_00227AA0_0x227aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227AA0_0x227aa0");
#endif

    switch (ctx->pc) {
        case 0x227ab8u: goto label_227ab8;
        case 0x227ae0u: goto label_227ae0;
        case 0x227af4u: goto label_227af4;
        case 0x227b04u: goto label_227b04;
        case 0x227b0cu: goto label_227b0c;
        case 0x227b14u: goto label_227b14;
        case 0x227b1cu: goto label_227b1c;
        case 0x227b2cu: goto label_227b2c;
        case 0x227b3cu: goto label_227b3c;
        default: break;
    }

    ctx->pc = 0x227aa0u;

    // 0x227aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227aa4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x227aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x227aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227ab0: 0xc089db0  jal         func_2276C0
    ctx->pc = 0x227AB0u;
    SET_GPR_U32(ctx, 31, 0x227AB8u);
    ctx->pc = 0x227AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AB0u;
    // 0x227ab4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2276C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2276C0u, 0x227AB0u, 0x227AB8u)) {
        return;
    }
    ctx->pc = 0x227AB8u;
label_227ab8:
    // 0x227ab8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x227ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227abc: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x227ABCu;
    {
        const bool branch_taken_0x227abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227ABCu;
        // 0x227ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227abc) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227AC4u;
    // 0x227ac4: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x227AC4u;
    {
        const bool branch_taken_0x227ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC4u;
        // 0x227ac8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ac4) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227ACCu;
    // 0x227acc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x227accu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227ad0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x227AD0u;
    {
        const bool branch_taken_0x227ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AD0u;
        // 0x227ad4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ad0) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227AD8u;
    // 0x227ad8: 0xc089db0  jal         func_2276C0
    ctx->pc = 0x227AD8u;
    SET_GPR_U32(ctx, 31, 0x227AE0u);
    ctx->pc = 0x227ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AD8u;
    // 0x227adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2276C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2276C0u, 0x227AD8u, 0x227AE0u)) {
        return;
    }
    ctx->pc = 0x227AE0u;
label_227ae0:
    // 0x227ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ae4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227AE4u;
    {
        const bool branch_taken_0x227ae4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x227ae4) {
            ctx->pc = 0x227AFCu;
            goto label_227afc;
        }
    }
    ctx->pc = 0x227AECu;
    // 0x227aec: 0xc089b96  jal         func_226E58
    ctx->pc = 0x227AECu;
    SET_GPR_U32(ctx, 31, 0x227AF4u);
    ctx->pc = 0x227AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AECu;
    // 0x227af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x227AECu, 0x227AF4u)) {
        return;
    }
    ctx->pc = 0x227AF4u;
label_227af4:
    // 0x227af4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x227AF4u;
    {
        const bool branch_taken_0x227af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AF4u;
        // 0x227af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227af4) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227AFCu;
label_227afc:
    // 0x227afc: 0xc089c0c  jal         func_227030
    ctx->pc = 0x227AFCu;
    SET_GPR_U32(ctx, 31, 0x227B04u);
    ctx->pc = 0x227B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AFCu;
    // 0x227b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227030u, 0x227AFCu, 0x227B04u)) {
        return;
    }
    ctx->pc = 0x227B04u;
label_227b04:
    // 0x227b04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227B04u;
    {
        const bool branch_taken_0x227b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B04u;
        // 0x227b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b04) {
            ctx->pc = 0x227B24u;
            goto label_227b24;
        }
    }
    ctx->pc = 0x227B0Cu;
label_227b0c:
    // 0x227b0c: 0xc089b96  jal         func_226E58
    ctx->pc = 0x227B0Cu;
    SET_GPR_U32(ctx, 31, 0x227B14u);
    ctx->pc = 0x227B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B0Cu;
    // 0x227b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x227B0Cu, 0x227B14u)) {
        return;
    }
    ctx->pc = 0x227B14u;
label_227b14:
    // 0x227b14: 0xc089b96  jal         func_226E58
    ctx->pc = 0x227B14u;
    SET_GPR_U32(ctx, 31, 0x227B1Cu);
    ctx->pc = 0x227B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B14u;
    // 0x227b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x227B14u, 0x227B1Cu)) {
        return;
    }
    ctx->pc = 0x227B1Cu;
label_227b1c:
    // 0x227b1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x227B1Cu;
    {
        const bool branch_taken_0x227b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B1Cu;
        // 0x227b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b1c) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227B24u;
label_227b24:
    // 0x227b24: 0xc089c50  jal         func_227140
    ctx->pc = 0x227B24u;
    SET_GPR_U32(ctx, 31, 0x227B2Cu);
    ctx->pc = 0x227B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B24u;
    // 0x227b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227140u, 0x227B24u, 0x227B2Cu)) {
        return;
    }
    ctx->pc = 0x227B2Cu;
label_227b2c:
    // 0x227b2c: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x227B2Cu;
    {
        const bool branch_taken_0x227b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b2c) {
            ctx->pc = 0x227B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227b0c;
        }
    }
    ctx->pc = 0x227B34u;
    // 0x227b34: 0xc089b96  jal         func_226E58
    ctx->pc = 0x227B34u;
    SET_GPR_U32(ctx, 31, 0x227B3Cu);
    ctx->pc = 0x227B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B34u;
    // 0x227b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x227B34u, 0x227B3Cu)) {
        return;
    }
    ctx->pc = 0x227B3Cu;
label_227b3c:
    // 0x227b3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x227b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_227b40:
    // 0x227b40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x227b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x227B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B4Cu;
        // 0x227b50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B54u;
    // 0x227b54: 0x0  nop
    ctx->pc = 0x227b54u;
    // NOP
    ctx->pc = 0x227b58u;
}
