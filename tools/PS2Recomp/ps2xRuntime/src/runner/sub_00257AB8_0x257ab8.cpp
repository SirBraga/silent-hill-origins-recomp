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

// Function: sub_00257AB8
// Address: 0x257ab8 - 0x257b20
void sub_00257AB8_0x257ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257AB8_0x257ab8");
#endif

    switch (ctx->pc) {
        case 0x257ae0u: goto label_257ae0;
        case 0x257af8u: goto label_257af8;
        default: break;
    }

    ctx->pc = 0x257ab8u;

    // 0x257ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257abc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257acc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x257accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ad0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x257ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257ad4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x257ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x257ad8: 0xc092782  jal         func_249E08
    ctx->pc = 0x257AD8u;
    SET_GPR_U32(ctx, 31, 0x257AE0u);
    ctx->pc = 0x257ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257AD8u;
    // 0x257adc: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x257AD8u, 0x257AE0u)) {
        return;
    }
    ctx->pc = 0x257AE0u;
label_257ae0:
    // 0x257ae0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257AE0u;
    {
        const bool branch_taken_0x257ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AE0u;
        // 0x257ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ae0) {
            ctx->pc = 0x257B04u;
            goto label_257b04;
        }
    }
    ctx->pc = 0x257AE8u;
    // 0x257ae8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x257ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x257aec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x257aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257af0: 0xc092782  jal         func_249E08
    ctx->pc = 0x257AF0u;
    SET_GPR_U32(ctx, 31, 0x257AF8u);
    ctx->pc = 0x257AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257AF0u;
    // 0x257af4: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x257AF0u, 0x257AF8u)) {
        return;
    }
    ctx->pc = 0x257AF8u;
label_257af8:
    // 0x257af8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x257af8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x257afc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257AFCu;
    {
        const bool branch_taken_0x257afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AFCu;
        // 0x257b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257afc) {
            ctx->pc = 0x257B08u;
            goto label_257b08;
        }
    }
    ctx->pc = 0x257B04u;
label_257b04:
    // 0x257b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257b08:
    // 0x257b08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257b0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257b14: 0x3e00008  jr          $ra
    ctx->pc = 0x257B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B14u;
        // 0x257b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257B1Cu;
    // 0x257b1c: 0x0  nop
    ctx->pc = 0x257b1cu;
    // NOP
    ctx->pc = 0x257b20u;
}
